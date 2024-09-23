#include <iostream> // menyertakan perpustakaan iostream untuk fungsi cin dan cout
#include <algorithm> // menyertakan perpustakaan algorithm untuk fungsi max
using namespace std; // mengaktifkan rentang nama fungsi std::cout dan std::cin

// mendeklarasikan fungsi max dari tiga bilangan yang akan diinput
int max(int a, int b, int c)
{
    return max (a, max (b, c)); // fungsi yang akan lebih dulu dijalankan adalah max(b,c), lalu nilai dari fungsi tersebut (?) dimasukkan dengan fungsi (max, ?)
}

int main() // kepala fungsi
{   int a, b, c; // mendeklarasikan variabel a, b, dan c
    // meminta input dari pengguna
    cout << "Input nilai untuk a: "; cin >> a;
    cout << "Input nilai untuk b: "; cin >> b;
    cout << "Input nilai untuk c: "; cin >> c;
    
    // fungsi yang menampilkan output dengan menggunakan nilai dari fungsi max
    cout << "Bilangan terbesar yang diinput adalah " << max(a, max (b, c)) << "." << endl;
    
    // akhir program
    return 0;
    
} 

