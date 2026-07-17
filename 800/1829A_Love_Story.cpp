#include <iostream>
#include <string>

using namespace std;

int counter = 0;

void compare(string s, string p = "codeforces"){
    for(int i = 0; i < s.length(); i++){
        if(s[i] != p[i]){
            counter++;
        }
    }
    cout << counter << endl;
    counter = 0; 
}

int main(){
    int number;
    cin >> number;
    string p = "codeforces";
    for(int i = 0; i < number; i++){
        string s;
        cin >> s;
        compare(s, p);
    }
}
