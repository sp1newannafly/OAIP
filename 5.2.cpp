#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "Russian");
	int n, s[10], i = 1;
	cout << "Введите n: ";
	cin >> n;
	for (i; i <= n; i++)
	{
		cout << "s[" << i << "] = ";
		cin >> s[i];
		if (i % 2 == 0)
		{
			cout << "= " << s[i] * s[i] << endl;
		}
	}
}
