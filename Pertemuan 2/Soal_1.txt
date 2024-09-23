#include <iostream> // menyertakan perpustakaan iostream untuk fungsi output dan input
#include <string> // menyertakan perpustakaan string untuk mendeklarasikan tipe data string
using namespace std; // mengaktifkan rentang nama fungsi std::cout dan std::cin

int main () // kepala fungsi
{ string nama; long gaji_kotor, pajak, cicilan, asuransi, gaji_bersih; // mendeklarasikan variabel nama, gaji kotor. pajak, cicilan, asuransi, dan gaji bersih

// fungsi yang meminta input dari pengguna
    cout << "Nama: "; cin >> nama;
    cout << "Gaji Kotor: Rp "; cin >> gaji_kotor; 

// kalkulasi perhitungan pajak, cicilan, asuransi, dan gaji bersih
    pajak = 0.20*gaji_kotor;
    cicilan = 0.015*gaji_kotor;
    asuransi = 0.01*gaji_kotor;
    gaji_bersih = gaji_kotor-pajak-cicilan-asuransi;
    
// pemberi jarak antara input dengan output
    cout << " " << endl;
    
// fungsi yang menampilkan output
    cout << "Slip Gaji untuk Karyawan: " << endl;
    cout << "-------------------------" << endl;
    cout << "Nama: " << nama << endl;
    cout << "Gaji Kotor: Rp " << gaji_kotor << endl;
    cout << "Pajak (20%): Rp " << pajak << endl;
    cout << "Cicilan: Rp " << cicilan << endl;
    cout << "Asuransi: Rp " << asuransi << endl;
    cout << "Gaji Bersih: Rp " << gaji_bersih << endl;
    
    return 0; // akhir program
}
