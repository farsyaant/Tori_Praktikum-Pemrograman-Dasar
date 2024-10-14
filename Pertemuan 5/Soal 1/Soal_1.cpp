#include <iostream>
#include <vector>
#include <string>
#include <fstream>
using namespace std;

string Soal_1(int n) {
    vector<string> result(n);
    for (int i = 1; i <= n; i++) {
        if (i % 3 == 0 && i % 5 == 0) {
            result[i-1] = "FizzBuzz";
        }
        else if (i % 3 == 0) {
            result[i-1] = "Fizz";
        }
        else if (i % 5 == 0) {
            result[i-1] = "Buzz";
        }
        else {
            result[i-1] = to_string(i);
        }
    }
    
    string output;
    for (const string& s: result) {
        output += s + " ";
    }
    return output;
}

    int main() {
        ifstream testFile("Test.txt");
 	int input;
    	string expected_output;

    if (!testFile) {
        cerr << "Error: Could not open test.txt" << endl;
        return 1;
    }

    int test_num = 1;
    while (testFile >> input && std::getline(testFile >> ws, expected_output)) {
        string output = Soal_1(input);
        if (output == expected_output) {
            cout << "Test " << test_num << " passed!" << endl;
        } else {
            std::cout << "Test " << test_num << " failed. Expected: \"" 
                      << expected_output << "\", Got: \"" << output << "\"" << endl;
        }
        test_num++;
    }

    testFile.close();
    return 0;
    }	
