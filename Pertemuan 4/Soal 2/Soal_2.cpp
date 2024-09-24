#include <iostream>
using namespace std;

void tabelPerkalian(int n){
    for (int i = 1; i <= 10; i++) {
        cout << n << " x " << i << " = " << n * i << endl;
    }
}

int main() {
    int n;
    cout << "Input: ";
    cin >> n;
    tabelPerkalian(n);
    return 0;
}
