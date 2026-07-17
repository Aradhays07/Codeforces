#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int matrix[5][5];
void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

void mat(int rows, int cols){
    int counter = 0;
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            if(matrix[i][j] == 1){
                counter = abs(i - 2) + abs(j - 2);
                swap(matrix[i][j], matrix[2][2]);
                cout << counter << endl;

                return;
            }
        }
    }
}

int main(){
    int rows = 5, cols = 5;
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            cin >> matrix[i][j];
        }
    }
    mat(rows, cols);
    return 0;
}