#include <iostream>
using namespace std;
int min(int a, int b)
{
	if (a > b)
	{
		return b;
	}
	else
		return a;
}
int main()
{
	setlocale(0, "Russian");
	int a, b, x, y;
	cout << "Введите 4 числа: ";
	cin >> a >> b >> x >> y;
	int z = min(min(min(x, y), b), a);
	cout << "Минимальное число  = " << z << endl;
	return 0;
}


