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
            if (siswa[j].nisn > siswa[j + 1].nisn) {
                Data temp = siswa[j];
                siswa[j] = siswa[j + 1];
                siswa[j + 1] = temp;
            }
        }
    }
}

int searchByNISN(Data siswa[], int n, string targetNISN) {
    int low = 0;
    int high = n - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (siswa[mid].nisn == targetNISN) {
            return mid;  // Data ditemukan
        } else if (siswa[mid].nisn < targetNISN) {
            low = mid + 1;  // Pencarian di sisi kanan
        } else {
            high = mid - 1;  // Pencarian di sisi kiri
        }
    }

    return -1;  // Data tidak ditemukan
}

int main() {
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

    // Mengurutkan data siswa berdasarkan NISN
    bubbleSort(siswa, n);

    // Mencari data berdasarkan NISN
    string targetNISN = "9950310962";
    int index = searchByNISN(siswa, n, targetNISN);

    if (index != -1) {
        cout << "NISN: " << siswa[index].nisn << ", Nama: " << siswa[index].nama << ", Nilai: " << siswa[index].nilai << endl;
    } else {
        cout << "Data dengan NISN " << targetNISN << " tidak ditemukan." << endl;
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
        string actual_line = "NISN: " + siswa[test_num - 1].nisn + ", Nama: " + siswa[test_num - 1].nama + ", Nilai: " + to_string(siswa[test_num - 1].nilai);

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
