#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "Russian");
	int s[10], n;
	cout << "Введите n = ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "s[" << i << "] = ";
		cin >> s[i];
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)
		{
			if (s[i] == s[j])
				cout << "Есть";
			else
				cout << "Нету";
			return 1;
		}
	}
	return 0;
}
