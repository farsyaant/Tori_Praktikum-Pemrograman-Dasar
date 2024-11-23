#include <iostream>
#include <string>
#include <fstream>
using namespace std;

// Struktur data siswa
struct Data {
    string nisn;
    string nama;
    int nilai;
};

// Fungsi untuk mencari siswa berdasarkan nilai tertentu (sequential search)
void sequentialSearch(Data siswa[], int n, int targetNilai) {
    for (int i = 0; i < n; i++) {
        if (siswa[i].nilai == targetNilai) {
            siswa[i].nama = "Joko";  // Mengganti nama jika nilai cocok
            break;
        }
    }
}

// Fungsi untuk memvalidasi output dengan file Test.txt
void validateWithFile(Data siswa[], int n, const string& fileName) {
    ifstream testFile(fileName);

    if (!testFile) {
        cerr << "Error: Could not open " << fileName << endl;
        return;
    }

    string expected_line;
    int test_num = 0;

    while (getline(testFile, expected_line)) {
        if (test_num >= n) {
            cerr << "Test file contains more data than expected." << endl;
            break;
        }

        // Format tanpa label
        string actual_line = siswa[test_num].nisn + ", " + siswa[test_num].nama + ", " + to_string(siswa[test_num].nilai);

        if (actual_line == expected_line) {
            cout << "Test " << (test_num + 1) << " passed!" << endl;
        } else {
            cout << "Test " << (test_num + 1) << " failed. Expected: \"" 
                 << expected_line << "\", Got: \"" << actual_line << "\"" << endl;
        }

        test_num++;
    }

    testFile.close();
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

    // Mencari siswa dengan nilai tertentu dan mengganti nama
    sequentialSearch(siswa, n, 60);

    for (int i = 0; i < n; i++) {
        cout << siswa[i].nisn << ", " << siswa[i].nama << ", " << siswa[i].nilai << endl;
    }

    // Validasi dengan file Test.txt
    validateWithFile(siswa, n, "Test.txt");

    return 0;
}
