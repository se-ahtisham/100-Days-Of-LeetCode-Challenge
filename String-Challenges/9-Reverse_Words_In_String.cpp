#include <iostream>
#include <string>
using namespace std;

string reverseWords(string s) {
    string result = "", word = "";
    for (int i = 0; i < s.length(); i++) {
        if (s[i] != ' ') word += s[i];
        else if (!word.empty()) {
            result = word + (result.empty() ? "" : " " + result);
            word = "";
        }
    }
    if (!word.empty()) result = word + (result.empty() ? "" : " " + result);
    return result;
}

int main() {
    string s = "  hello world  ";
    cout << reverseWords(s) << endl;
    return 0;
}
