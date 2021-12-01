#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "Rus");
	int n;
	cout << "N:";
	cin >> n;
	int k = 0;
	while (n >= 2) {
		++k;
		n /= 2;
	}
	cout << k;
	return 0;
}