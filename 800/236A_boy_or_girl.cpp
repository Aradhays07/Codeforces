#include <iostream> 
#include <unordered_map>

using namespace std; 

int main(){
    string s; 
    cin >> s;
    unordered_map<char, int> distinct;

    int counter = 0;
    for(int i = 0; i < s.length(); i++) {
    char letter = s[i];
    if (distinct.find(letter) == distinct.end()) {
        counter++;
    }
    distinct[letter]++;
    }
    if(counter % 2 == 0) {
        cout << "CHAT WITH HER!" << endl;
    } else {
        cout << "IGNORE HIM!" << endl;
    }

}