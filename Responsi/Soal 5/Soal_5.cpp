#include <iostream>
#include <string>
using namespace std;

int main() {
    int n, num, digit, rev = 0;
    
    string bil[1] = {"12321"};
    string cek[1] = {"Bilangan palindrom."};
    
    bil[0] = num;
    while (num != 0) {
        digit = num % 10;
        rev = rev * 10 + digit;
        num = num / 10;
    }
    
    if (cek[0] == bil[0]) {
        cout << "Test passed!" << endl;
    }
    else {
        cout << "Test failed!" << endl;
    }
    
    return 0;
}
