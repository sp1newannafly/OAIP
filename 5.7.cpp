#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main()
{
	setlocale(0, "Russian");
	const int m = 20, n = 15;
	int i, j, proz;
	int a[m][n];
	proz = 1;
	srand(time(NULL));
	for (i = 1; i <= n; i++)
	{
		for (j = 1; i <= n; i++)
		{
			a[i][j] = static_cast <double> (rand()) / (RAND_MAX + 1) * (5 + 5) - 5;
			cout << "a[" << i << "] = ";
			cout << a[i][j];
			cout << endl;
		}
		cout << endl;
	}
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
		{
			if (a[i][j] % 2)
			{
				proz = proz * a[i][j];
			}
		}
	}
	cout << "Произведение всех нечетных чисел =  " << proz;
	return 0;
}
