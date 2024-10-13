#include <iostream>
#include <vector>
using namespace std;

vector<int> reversed_input(const vector<int>& input) {
    vector<int> reversed(input.size()); 
 
    for (int i = 0; i < input.size(); i++) {
        reversed[i] = input[input.size() - 1 - i]; 
    }
    return reversed; 
}

    int main() {
        int n;
        cout << "Banyak angka: "; cin >> n;
        
        cout << "Input angka (dengan spasi): ";
        vector<int> input(n);
            for (int i = 0; i < n; i++) {
            cin >> input[i];
            }
            
        vector<int> output = reversed_input(input);

        cout << "Angka (reverse): ";
            for (int i = 0; i < output.size(); i++) {
            cout << output[i];
                if (i < output.size() - 1) {
                cout << " "; 
                }
            }
        return 0;
    }    
            
            
            
    
    
    
