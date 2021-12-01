#include <iostream>
using namespace std;
unsigned long f(unsigned long n);
unsigned long k(unsigned long m);
unsigned long g(unsigned long d);
int main()
{
	setlocale(0, "Russian");
	float n, m, x, y, d, h;
	float u;
	cout << "Введите целое число: ";
	cin >> n;
	x = f(n);
	cout << "Факториал числа " << n << " равен: " << x << endl;
	cout << "Введите целое число: ";
	cin >> m;
	y = k(m);
	cout << "Факториал числа " << m << " равен: " << y << endl;
	d = n - m;
	h = g(d);
	cout << "Факториал разности равен: " << h << endl;
	u = x / (y * h);
	cout << "Факториал числа u = " << u << endl;
	return 0;
}
unsigned long f(unsigned long n)
{
	if (n > 1)
		return n * f(n - 1);
	else return 1;
}
unsigned long k(unsigned long m)
{
	if (m > 1)
		return m * k(m - 1);
	else return 1;
}
unsigned long g(unsigned long d)
{
	if (d > 1)
		return d * g(d - 1);
	else return 1;
}