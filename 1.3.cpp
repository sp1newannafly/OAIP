#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	setlocale(0, "Russian");
	double a, b, s;
	cout << "Введите любое число: a ";
	cin >> a;
	cout << "Введите любое число: b ";
	cin >> b;
	(a + b) / 2;
	s = (a * b);
	sqrt(s);
	cout << "Среднее арифметическое модулей числа a и b: " << (a + b) / 2 << endl;
	cout << "Среднее геометрическое модулей числа a и b: " << (sqrt(s)) << endl;
	return 0;
}