#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int Soal_1(int n) {
	int result;
	
	for (int i=1; i <= n; ++i ){
		result += i ;
	}

	return result;
}

int main()
{	ifstream testFile("Test.txt");
 	int input;
    	string expected_output;

    if (!testFile) {
        cerr << "Error: Could not open test.txt" << endl;
        return 1;
    }

    int test_num = 1;
    while (testFile >> input && std::getline(testFile >> ws, expected_output)) {
        int output = Soal_1(input);
        string output_str = to_string(output);
        if (output_str == expected_output) {
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
