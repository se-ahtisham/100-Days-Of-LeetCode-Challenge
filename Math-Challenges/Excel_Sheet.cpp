#include <iostream>
#include <string>

using namespace std;

string convertToTitle(int columnNumber) {
    string result;
    
    while (columnNumber > 0) {
        int remainder = (columnNumber - 1) % 26;
        result = char('A' + remainder) + result;
        columnNumber = (columnNumber - 1) / 26;
    }
    
    return result;
}

int main() {
    int columnNumber = 701; // Example input
    string columnTitle = convertToTitle(columnNumber);
    cout << "Column Title: " << columnTitle << endl;
    return 0;
}
