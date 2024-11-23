#include <iostream>
#include <string>
#include <fstream>
using namespace std;

struct Data {
    string nisn;
    string nama;
    int nilai;
};

void bubbleSort(Data siswa[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (siswa[j].nilai > siswa[j + 1].nilai) {
                Data temp = siswa[j];
                siswa[j] = siswa[j + 1];
                siswa[j + 1] = temp;
            }
        }
    }
}

int main() {
    // Data siswa
    Data siswa[] = {
        {"9960312699", "Handi Ramadhan", 90},
        {"9963959682", "Rio Alfandra", 55},
        {"9950310962", "Ronaldo Valentino Uneputty", 80},
        {"9970272750", "Achmad Yaumil Fadjri R.", 60},
        {"9970293945", "Alivia Rahma Pramesti", 70},
        {"9952382180", "Ari Lutfianto", 65},
        {"9965653989", "Arief Budiman", 60},
    };

    int n = sizeof(siswa) / sizeof(siswa[0]);

    // Mengurutkan data menggunakan bubbleSort
    bubbleSort(siswa, n);

    // Menampilkan data yang sudah diurutkan
    cout << "Data siswa setelah diurutkan berdasarkan nilai:\n";
    for (int i = 0; i < n; i++) {
        cout << siswa[i].nisn << ", " << siswa[i].nama << ", " << siswa[i].nilai << endl;
    }

    // Validasi dengan file Test.txt
    ifstream testFile("Test.txt");
    if (!testFile) {
        cerr << "Error: Could not open Test.txt" << endl;
        return 1;
    }

    string expected_line;
    int test_num = 1;

    while (getline(testFile, expected_line)) {
        // Membuat output aktual dari data yang sudah diurutkan
        string actual_line = siswa[test_num - 1].nisn + ", " + siswa[test_num - 1].nama + ", " + to_string(siswa[test_num - 1].nilai);

        if (actual_line == expected_line) {
            cout << "Test " << test_num << " passed!" << endl;
        } else {
            cout << "Test " << test_num << " failed. Expected: \"" 
                 << expected_line << "\", Got: \"" << actual_line << "\"" << endl;
        }

        test_num++;
    }

    testFile.close();
    return 0;
}
