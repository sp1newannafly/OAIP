#include <iostream>

using namespace std;

int main()

{
	setlocale(0, "Russian");
	int R;
	cout << ("Введите радиус R ");
	cin >> R;
	float pi, L, S;
		pi = 3.14;
		L = 2 * pi * R;
		S = pi * R;
	cout << "Длина окружности равна:" << L << endl;
	cout << "Площадь круга равна:" << S << endl;
	return 0;

}