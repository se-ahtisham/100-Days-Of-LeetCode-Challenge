#include <iostream>
#include <string>

using namespace std;

string intToRoman(int number) {
    string strarray[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    int intarray[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    
    string answer = "";
    int length = sizeof(intarray) / sizeof(intarray[0]);
    
    for (int i = 0; i < length; ++i) {
        while (number >= intarray[i]) {
            answer += strarray[i];
            number -= intarray[i];
        }
    }
    
    return answer;
}

int main() {
    cout << "Please Enter: ";
    int number;
    cin >> number;
    
    string roman = intToRoman(number);
    cout << roman << endl;
    
    return 0;
}
