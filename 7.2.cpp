#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	setlocale(0, "Russian");
	int n, a[100][100], Max = a[1][0];
	ifstream input("input.txt");
	cout << "Введите N строк и столбцов:" << endl;
	cin >> n;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			input >> a[i][j];
	for (int i = 0; i < n; i++)
	{

		for (int j = 0; j < n; j++)
			cout << a[i][j] << " ";
		cout << endl;
	}
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			if (i > j)
			{
				if (a[i][j] > Max)
					Max = a[i][j];
			}
	cout << endl;
	cout << Max << endl;
	ofstream output("output.txt");
	output << Max;
	system("pause");
	return 0;
}

