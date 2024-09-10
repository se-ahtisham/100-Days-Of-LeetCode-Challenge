#include <iostream>
#include <string>

using namespace std;

bool isValid(const string& s) {
    int roundBrackets = 0;
    int curlyBrackets = 0;
    int squareBrackets = 0;
    
    for (char c : s) {
        if (c == '(') {
            ++roundBrackets;
        } else if (c == ')') {
            if (roundBrackets == 0) return false;
            --roundBrackets;
        } else if (c == '{') {
            ++curlyBrackets;
        } else if (c == '}') {
            if (curlyBrackets == 0) return false;
            --curlyBrackets;
        } else if (c == '[') {
            ++squareBrackets;
        } else if (c == ']') {
            if (squareBrackets == 0) return false;
            --squareBrackets;
        }
    }
    
    return roundBrackets == 0 && curlyBrackets == 0 && squareBrackets == 0;
}

int main() {
    string test = "{[()]}";
    cout << (isValid(test) ? "Valid" : "Invalid") << endl;
    return 0;
}
