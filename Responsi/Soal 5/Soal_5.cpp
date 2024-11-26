#include <iostream>
#include <string>
using namespace std;

int main() {
    int num, digit, rev = 0;
    
    int n = 12321;
    string cek = "Bilangan palindrom.";
    
    n = num;
    while (num != 0) {
        digit = num % 10;
        rev = rev * 10 + digit;
        num = num / 10;
    }
    
    if (rev == num) {
        bool rev = true;
    }
    else {
        bool rev = false;
    }
    
    if (rev) {
        cout << "Test passed!" << endl;
    }
    else {
        cout << "Test failed!" << endl;
    }
    
    return 0;
}
