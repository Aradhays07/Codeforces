    #include <iostream>

    using namespace std;

    
    void three(int value){
        int counter = 0;
        int current_number = 1;
        while(counter <value){
        if(current_number % 3 == 0 || current_number % 10 == 3){
        }
        else{
            counter++;
        }
        current_number++;
    }
            cout << current_number -1 << endl;
        }

    int main() {
        int inputs; 
        cin >> inputs;
        int value; 
        for(int i = 0; i<inputs; i++){
            cin >> value; 
            three(value);
        }
    }