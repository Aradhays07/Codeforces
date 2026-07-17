#include <iostream>

using namespace std;

void even_odd(int n) {
    if (n % 2 == 0 && n > 2) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}

int main() {
    int number;
    cin >> number;
    even_odd(number);
    return 0;
}