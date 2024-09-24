#include <iostream>
using namespace std;
int main()
{
	int n;
	cout << "Input: ";
	cin >> n;
	
	int jumlah = 0;
	for (int i=1; i <= n; ++i ){
		jumlah += i ;
	}

	cout << "Output: " << jumlah;

	return 0;
}
