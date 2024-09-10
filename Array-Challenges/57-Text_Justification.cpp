#include <iostream>
#include <string>
#include <sstream>

using namespace std;

void justifyText(string words[], int wordsSize, int maxWidth, string result[], int& resultSize) {
    int index = 0;
    resultSize = 0;
    
    while (index < wordsSize) {
        int count = 0, last = index;
        
        // Find the maximum number of words that fit in the current line
        while (last < wordsSize && count + words[last].length() + (last - index) <= maxWidth) {
            count += words[last].length();
            last++;
        }
        
        string line;
        int numWords = last - index;
        int spaces = maxWidth - count;
        
        // If it's the last line or only one word in the line, left justify
        if (last == wordsSize || numWords == 1) {
            for (int i = index; i < last; ++i) {
                if (!line.empty()) line += ' ';
                line += words[i];
            }
            line.append(maxWidth - line.length(), ' ');
        } else {
            // Distribute spaces evenly
            int spaceBetweenWords = spaces / (numWords - 1);
            int extraSpaces = spaces % (numWords - 1);
            for (int i = index; i < last; ++i) {
                if (i > index) {
                    line.append(spaceBetweenWords + (i - index <= extraSpaces ? 1 : 0), ' ');
                }
                line += words[i];
            }
        }
        
        result[resultSize++] = line;
        index = last;
    }
}

int main() {
    // Example input
    string words[] = {"This", "is", "an", "example", "of", "text", "justification."};
    int wordsSize = sizeof(words) / sizeof(words[0]);
    int maxWidth = 16;
    string result[100];
    int resultSize;
    
    justifyText(words, wordsSize, maxWidth, result, resultSize);
    
    // Print the result
    for (int i = 0; i < resultSize; ++i) {
        cout << '"' << result[i] << '"' << endl;
    }
    
    return 0;
}
