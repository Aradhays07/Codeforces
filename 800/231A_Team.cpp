#include <iostream>

using namespace std;

int counter = 0;
void solution(int total_opinions){
    if (total_opinions > 1){
        counter++;
    }
    
}
int main(){
    int number;
    int opinion1;
    int opinion2;
    int opinion3;
    cin >> number;
    for (int i = 0; i < number; i++){
        cin >> opinion1 >> opinion2 >> opinion3;
        int total_opinions = opinion1 + opinion2 + opinion3;
        solution(total_opinions);
    }
    cout << counter << endl;
}