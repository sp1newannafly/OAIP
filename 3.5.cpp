#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "Russian");
	int a, b, c, e;
	cout << "Введите четырехзначное число: ";
	cin >> a;
	if (a >= 999 && a <= 10000)
	{
		b = a / 1000;
		a = a % 1000;
		c = a / 100;
		a = a % 100;
		e = a / 10;
		a = a % 10;
		if (b == a && c == e)
		{
			cout << "Это число палиндром";
		}
		else
		{
			cout << "Это число не палиндром";
		}
	}
	else
		cout << "Вы ввели не четырехзначное число";
	return 0;
}
