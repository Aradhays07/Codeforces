#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>

using namespace std;

void compare(string str1, string str2) {
    if (str1 < str2) {
        cout << "-1";
    } else if (str1 > str2) {
        cout << "1";
    } else {
        cout << "0";
    }
}

int main() {
    string str1 , str2;
    cin >> str1 >> str2;
    transform(str1.begin(), str1.end(), str1.begin(), [](unsigned char c) { 
        return tolower(c); 
    });
    transform(str2.begin(), str2.end(), str2.begin(), [](unsigned char c) { 
        return tolower(c); });
    compare(str1, str2);
}