#include <iostream>
#include <fstream>
#include <string>
using namespace std;


int fibonacci(int n) {
    if (n <= 1) {
        return n;
    } else {
        return fibonacci(n - 2) + fibonacci(n - 1);
    }
}

string Soal_1(int n) {
    int fib = fibonacci(n);
    return "Bilangan Fibonacci ke-" + to_string(n) + " adalah: " + to_string(fib) + "\n";
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
        // Baca baris output yang diharapkan dari file
        testFile.ignore();
        string expected_output_line;
        getline(testFile, expected_output_line);

        string output = Soal_1(n);
        if (output == expected_output_line + "\n") {
            cout << "Test " << test_num << " passed!" << endl;
        } else {
            cout << "Test " << test_num << " failed. Expected: \"" 
                 << expected_output_line << "\", Got: \"" << output << "\"" << endl;
        }
        test_num++;
    }

    testFile.close();
    return 0;
}
