#include <iostream>
#include <cstdlib>
#include <ctime> 
using namespace std;
void shellsort(int x[], int n)
{
	int i, j, k, с, t;
	int aa = 0, bb = 0; с = n / 2;
	while (с > 0)
	{
		for (i = 0; i < с; i++)
		{
			for (j = 0; j < n; j += с)
			{
				t = x[j];
				for (k = j - с; k >= 0 && t < x[k]; k -= с)
				{
					bb++;
					aa++;
					x[k + с] = x[k];
				}
				x[k + с] = t;
				aa++;
			}
		}
		bb++;
		if (с / 2 != 0)
			с = с / 2;
		else if (с == 1)
			с = 0;
		else
			с = 1;
	}
}

int main()
{
	int j;
	j = 0;
	setlocale(0, "ru");
	int a[100]{};
	int n;
	int b[50]{};
	srand(time(NULL));
	for (int i = 0; i < 10; i++)
	{
		a[i] = rand() % 50;
	}
	for (int i = 0; i < 10; i++)
	{
		if (a[i] % 2 == 0)
			b[j++] = a[i];
		else if (i % 2 != 0)
			b[j++] = a[i];
	}
	cout << "Массив c числами oт 0 до 1000: ";
	for (int i = 0; i < 10; i++)
	{
		cout << a[i] << "  ";
	}
	cout << "\nМассив заполненный четными элементами:  ";
	for (int i = 0; i < j; i++) {

		cout << b[i] << " ";
	}
	cout << endl;
	shellsort(b, j);
	for (int i = 0; i < j; i++) {

		cout << b[i] << " ";
	}
	return 0;
}
