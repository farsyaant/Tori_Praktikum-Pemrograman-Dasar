
#include <iostream>
#include <fstream>
using namespace std;

struct Barang {
        string kode;
        string nama;
        int jumlah;
        double harga;
};
  string Soal_1(int n) {
        int totalBarang = 0;
        double totalHarga = 0, rerataHarga = 0;
        
        Barang brg[50];
        for (int i = 0; i < n; i++) {
        cout << "Barang ke-" << i+1 << ":" << endl;
        cout << "Kode barang: "; cin >> brg[i].kode;
        cout << "Nama barang: "; cin >> brg[i].nama;
        cout << "Jumlah barang: "; cin >> brg[i].jumlah;
        cout << "Harga barang: Rp"; cin >> brg[i].harga;
        cout << endl;
        
        totalBarang += brg[i].jumlah;
        totalHarga += brg[i].jumlah * brg[i].harga;
        rerataHarga = totalHarga/totalBarang;
        }

        string result = "Jumlah barang = " + to_string(totalBarang) + endl;
          result += "Harga rata-rata barang = Rp" + to_string(static_cast<int>(rerataHarga)) + endl;
        }
        
        else {
            cout << "Banyak jenis barang harus di antara 1--50" << endl;
        }
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
        vector<int> input(n);
        for (int i = 0; i < n; i++) {
            testFile >> input[i];  
        }

        string expected_output;
        testFile.ignore();  
        getline(testFile, expected_output);

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

        
     
