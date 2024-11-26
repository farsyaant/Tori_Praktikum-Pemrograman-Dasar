#include <iostream>
using namespace std;

int main() {
    int angka[5] = {34, 67, 12, 5, 261};
    int cek[1] = {261};
    
    int max = angka[0];
    for (int i = 0; i < 5; i++) {
        if (max < angka[i]) {
            max = angka[i];
        }
    }
    
    for (int i = 0; i < 5; i++) {
        cout << angka[i] << " ";
    }
    cout << endl;
    cout << "Nilai maksimum dalam daftar: " << max << endl;
    if (cek[0] == max) {
        cout << "Test passed!" << endl;
    }
    else {
        cout << "Test failed!" << endl;
    }
    return 0;
}
