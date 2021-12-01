#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "Russian");
	int n, i = 1, s[10];
	cout << "Введите n: ";
	cin >> n;
	for (i; i <= n; i++)
	{
		cout << "s[" << i << "] = ";
		cin >> s[i];
		if (s[i] % 2 == 0)
		{
			cout << "= " << s[i] * 2 << endl;
		}
		else
		{
			cout << "= " << s[i] * 3 << endl;
		}
	}
}

