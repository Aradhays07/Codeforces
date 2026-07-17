#include <iostream>
#include <string>

using namespace std;

int x = 0;

void operation(string value){
    if(value[1] == '+'){
        x++;
    }else{
        x--;
    }
}


int main(){
    int number; 
    cin >> number;
    string value; 
    for(int i = 0; i < number; i++){
    cin >> value;
    operation(value);
    }
    cout << x << endl;
}