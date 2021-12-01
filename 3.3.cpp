#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "Russian");
	int a, b, n1, n2;
	cout << "n1 =: "; cin >> n1;
	cout << "n2 =: "; cin >> n2;
	a = 1;
	for (int i = n1; i < n2; i++)
	{
		if (b = i % 2 == 1)
		{
			a = a * i;
			cout << a << "\n";
		}
	}
	return(0);
}
