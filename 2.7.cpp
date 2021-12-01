#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "Russian");
	int a, b, c;
	cout << endl << "Введите а ";
	cin >> a;
	cout << endl << "Введите b ";
	cin >> b;
	cout << endl << "Введите c ";
	cin >> c;
	if (a > 0 && b > 0 && c > 0)

	{
		if (a + b > c && a + c > b && b + c > a)
		{
			cout << "Такой треугольник существует";
		if (a == b && b == c && a == c)
		{
			cout << "Это треугольник равносторонний" << endl;
		}
		else if (a == b || b == c || a == c)
		{
			cout << "Это треугольник равнобедренный" << endl;
		}
		else if (a * a + b * b == c * c || c * c + b * b == a * a + c * c == b * b)
		{
			cout << "Этот треугольник прямоугольный" << endl;
		}
			return 0;
		}
		else
		{
			cout << "шиз?" << endl;
			return 0;
		}
	}
	
}

