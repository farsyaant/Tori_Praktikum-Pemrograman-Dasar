#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
#include <sstream>
using namespace std;

double sum(int arr[], int n) {
    if (n <= 0) {
        return 0;
    } else {
        return arr[n - 1] + sum(arr, n - 1);
    }
}

double average(int arr[], int n) {
    double total = sum(arr, n);
    return total / n;
}

string Soal_2(int n, int arr[]) {
    double avg = average(arr, n);

    // Menggunakan ostringstream untuk menyesuaikan format desimal
    ostringstream oss;
    if (avg == static_cast<int>(avg)) {
        // Jika rata-rata adalah bilangan bulat, tampilkan tanpa desimal
        oss << fixed << setprecision(0) << avg;
    } else if (avg * 10 == static_cast<int>(avg * 10)) {
        // Jika rata-rata memiliki satu angka desimal, tampilkan satu tempat desimal
        oss << fixed << setprecision(1) << avg;
    } else {
        // Jika rata-rata memiliki lebih dari satu angka desimal, tampilkan dua tempat desimal
        oss << fixed << setprecision(2) << avg;
    }
    return "Rata-rata: " + oss.str() + "\n";
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
        int arr[50]; // Array untuk menyimpan elemen-elemen input
        for (int i = 0; i < n; i++) {
            testFile >> arr[i];
        }

        testFile.ignore();
        string expected_output_line;
        getline(testFile, expected_output_line);

        string output = Soal_2(n, arr);
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
