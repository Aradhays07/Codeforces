    #include <iostream>
    using namespace std;

    int min_score;
    int max_score;

    void amazing_count(int arr[], int size) {
        min_score = arr[0];
        max_score = arr[0];
        int i;
        int counter = 0;
        for(i = 1; i < size; i++) {
            if(arr[i] < min_score) {
                min_score = arr[i];
                counter++;
            }
            if(arr[i] > max_score) {
                max_score = arr[i];
                counter++;
            }
        }
        cout << counter << endl;
     }


int main() {
    int n;
    if (cin >> n) {
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        amazing_count(arr, n);
    }
    
    return 0;
}
