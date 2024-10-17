#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct Barang {
        string kode;
        string nama;
        int jumlah;
        double harga;
};

  string Soal_1(int n, Barang brg[]) {
        int totalBarang = 0;
        double totalHarga = 0, rerataHarga = 0;
        
        for (int i = 0; i < n; i++) {
        totalBarang += brg[i].jumlah;
        totalHarga += brg[i].jumlah * brg[i].harga;
        }

        rerataHarga = totalHarga/totalBarang;
        string result = "Jumlah barang = " + to_string(totalBarang) + "\n"; 
          result += "Harga rata-rata barang = Rp" + to_string(static_cast<int>(rerataHarga)) + "\n"; 
          return result;
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
        Barang input[50];
        for (int i = 0; i < n; i++) {
            testFile >> input[i].kode >> input[i].nama >> input[i].jumlah >> input[i].harga;
        }

        testFile.ignore();  
        string expected_output_line1, expected_output_line2;
        getline(testFile, expected_output_line1);
        getline(testFile, expected_output_line2);

        string expected_output = expected_output_line1 + "\n" + expected_output_line2 + "\n";

        string output = Soal_1(n, input); 
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


