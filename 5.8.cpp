#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main()
{
	setlocale(0, "Russian");
	int n = 4;
	int i, j, sum;
	int a[5][5];
	sum = 0;
	srand(time(NULL));
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
		{
			a[i][j] = static_cast <double> (rand()) / (RAND_MAX + 1) * (5 + 5) - 5;
			cout << "a[" << i << "]" << "[" << j << "]" << " = ";
			cout << a[i][j];
			cout << endl;
			if (i > j)
			{
				cout << a[i][j];
				cout << endl;
				sum += a[i][j];
			}
		}
	}
	cout << "Сумма элементов ниже главной диагонали = " << sum;
	return 0;
}
