#include <iostream>
using namespace std;
int main() {
	setlocale(0, "ru");
	int n = 5, * pn = &n;

	int* mas = new int[*pn]{ 8, -5, -4, 10, 1 };
	cout << "1 массив: ";
	for (int i = 0; i < *pn; i++) {
		printf("%3d", mas[i]);
	}
	cout << endl;

	int kol = 0, proizv = 1;
	cout << "2 массив: ";
	for (int i = 0; i < *pn; i++) {
		kol++;
		printf("%3d", i);
		if (mas[i] < 1) {
			proizv *= mas[i];
		}
	}
	cout << endl << endl << "количество: " << kol << endl << endl;
	cout << "произведение: " << proizv << endl << endl;

	delete[] mas;
}
ф