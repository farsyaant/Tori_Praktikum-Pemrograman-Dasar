#include <iostream>
#include <vector>
#include <string>
#include <fstream>
using namespace std;

vector<int> reversed_input(const vector<int>& input) {
    vector<int> reversed(input.size()); 
 
    for (size_t i = 0; i < input.size(); i++) {
        reversed[i] = input[input.size() - 1 - i]; 
    }
    return reversed; 
}

string Soal_2(int n, const vector<int>& input) {
        vector<int> output = reversed_input(input);

       string output_str = "";
            for (size_t i = 0; i < output.size(); i++) {
            output_str += to_string(output[i]);
                if (i < output.size() - 1) {
                output_str += " "; 
                }
            }
        return output_str;

    }

int main() {
    ifstream testFile("Test.txt");
    int n;

    if (!testFile) {
        cerr << "Error: Could not open Test.txt" << endl;
        return 1;
    }

    int test_num = 1;
    while (testFile >> n) { 
        vector<int> input(n);
        for (int i = 0; i < n; i++) {
            testFile >> input[i];  
        }

        string expected_output;
        testFile.ignore();  
        getline(testFile, expected_output);

        string output = Soal_2(n, input); 
        if (output == expected_output) {
            cout << "Test " << test_num << " passed!" << endl;
        } else {
            cout << "Test " << test_num << " failed. Expected: \"" 
                 << expected_output << "\", Got: \"" << output << "\"" << endl;
        }
        test_num++;
    }

    testFile.close();
    return 0;
}
