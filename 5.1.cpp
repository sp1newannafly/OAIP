#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "Russian");
	int sum = 0, n, i = 1;
	int s[10];
	cout << "Введите n: ";
	cin >> n;
	for (i; i <= n; i++)
	{
		cout << "s[" << i << "] = ";
		cin >> s[i];
		if (s[i] % 5 == 0)
		{
			sum += s[i];
		}
	}
	cout << "Сумма = " << sum;
}
