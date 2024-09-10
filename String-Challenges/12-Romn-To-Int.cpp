#include <iostream>
#include <string>

using namespace std;

int romanToInt(const string& roman) {
    const string strarray[13] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    const int intarray[13] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    
    int result = 0;
    int index = 0;
    
    for (int i = 0; i < 13; ++i) {
        while (roman.substr(index, strarray[i].length()) == strarray[i]) {
            result += intarray[i];
            index += strarray[i].length();
        }
    }
    
    return result;
}

int main() {
    cout << "Please Enter Roman Numeral: ";
    string roman;
    cin >> roman;
    
    int number = romanToInt(roman);
    cout << number << endl;
    
    return 0;
}
