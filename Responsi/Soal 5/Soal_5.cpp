#include <iostream>
#include <string>
using namespace std;

int main() {
    int digit, rev = 0;
    
    int num = 12321;
    string hasil = "Bilangan palindrom.";
    
    while (num != 0) {
        digit = num % 10;
        rev = rev * 10 + digit;
        num = num / 10;
    }
    
    bool cek = false;
    if (rev == num) {
        cek = true;
    }
    
    if (rev) {
        cout << "Test passed!" << endl;
    }
    else {
        cout << "Test failed!" << endl;
    }
    
    return 0;
}
