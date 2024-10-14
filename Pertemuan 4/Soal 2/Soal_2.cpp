#include <iostream>
#include <fstream>
#include <string>
using namespace std;

string Soal_2(int n) {
    string result; 
    
    for (int i = 1; i <= 10; i++) {
        result += to_string(n) + " * " + to_string(i) + " = " + to_string(n * i) + "\n"; 
    }
    return result; 
}

int main() {
    ifstream testFile("Test.txt");
    int input;
    string expected_output;

    if (!testFile) {
        cerr << "Error: Could not open Test.txt" << endl;
        return 1;
    }

    int test_num = 1;
    while (testFile >> input) {
        testFile.ignore(); // Ignore the newline after input
       
        string expected_output = "";
        string line;
        while (getline(testFile, line) && !line.empty()) {
            expected_output += line + "\n";
        }

        string output = Soal_2(input); 

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
