#include <iostream>

using namespace std;

int main() {

	setlocale(0, "Russian");
	float dollar, funt, frank, germark, yen;
	
	cout << "\nВведите количество в Долларах:";
	cin >> dollar;
	funt = dollar * 1.487;
	frank = dollar * 0.172;
	germark = dollar * 0.584;
	yen = dollar * 0.00955;

		cout << "Эквалетная сумма в фунтах: " << funt << endl;
		cout << "Эквалетная сумма в франках: " << frank << endl;
		cout << "Эквалетная сумма в нем.марках: " << germark << endl;
		cout << "Эквалетная сумма в енах: " << yen << endl;

	return 0;

}