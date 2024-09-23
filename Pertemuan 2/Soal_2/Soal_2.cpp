#include <iostream> // menyertakan perpustakaan iostream untuk fungsi output dan input
using namespace std; // mengaktifkan rentang nama fungsi std::cout dan std::cin

int main () // kepala fungsi
{ int a, b, c, diskriminan, x1, x2, x; // mendeklarasikan variabel a, b, c, diskriminan, x1, x2, x

// fungsi yang meminta input dari pengguna
    cout << "Input nilai untuk a: "; cin >> a;
    cout << "Input nilai untuk b: "; cin >> b;
    cout << "Input nilai untuk c: "; cin >> c;

// kalkulasi perhitungan diskriminan
    diskriminan = pow(b,2) - 4*a*c;
    
// pemberi jarak antara input dengan output
    cout << " " << endl;
    
    cout << "Diskriminan = " << diskriminan << endl; // fungsi yang menampilkan output diskriminan
    if (diskriminan > 0) // percabangan yang memuat ekspresi 
        {   // kalkulasi yang dilakukan jika ekspresi bernilai benar
            x1 = ((-b)+sqrt(diskriminan))/(2*a);
            x2 = ((-b)-sqrt(diskriminan))/(2*a);
            // teks yang muncul setelah kalkulasi dilakukan
            cout << "Terdapat dua akar real yang berbeda: " << endl;
            cout << "x1 = " << x1 << endl;
            cout << "x2 = " << x2 << endl;  }
        else // cabang lain jika ekspresi bernilai salah
            if (diskriminan == 0) 
            {   x = (-b)/(2*a);
                cout << "x = " << x << endl;}
            else // teks yang diinput jika ekspresi masih bernilai salah
            cout << "Tidak terdapat akar-akar real." << endl;
    return 0; // akhir program
}
