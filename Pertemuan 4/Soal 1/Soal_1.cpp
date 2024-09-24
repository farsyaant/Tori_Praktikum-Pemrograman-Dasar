#include <iostream>
#include <fstream>
#include <string>
using namespace std;

string Soal_1(int n) {
	string result;
	int n;
	
	for (int i=1; i <= n; ++i ){
		result += " " ;
	}

	return result;
}


int main()
{	ifstream testFile("Test.txt);
 	int input;
    	string expected_output;

    if (!testFile) {
        std::cerr << "Error: Could not open test.txt" << std::endl;
        return 1;
    }

    int test_num = 1;
    while (testFile >> input && std::getline(testFile >> std::ws, expected_output)) {
        std::string output = Soal_1(input);
        if (output == expected_output) {
            std::cout << "Test " << test_num << " passed!" << std::endl;
        } else {
            std::cout << "Test " << test_num << " failed. Expected: \"" 
                      << expected_output << "\", Got: \"" << output << "\"" << std::endl;
        }
        test_num++;
    }

    testFile.close();
    return 0;
}
