#include <iostream>
using namespace std;
int b(int x, int y)
{
	int a = 0;
	if (x == 1)

		a = y;
	else if (y == 1)

		a = x;
	else if (x == 0 || y == 0)

		a = 0;
	else

		a = x + b(x, --y);

	return a;
}
int main()
{
	setlocale(0, "Russian");
	cout << "Введите два числа: \n";
	int x, y;
	cin >> x >> y;
	cout << "\nРезультат: " << b(x, y);
	return 0;
}
