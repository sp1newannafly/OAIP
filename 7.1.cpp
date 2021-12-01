#include <fstream>	
#include <iostream> 
#include <iomanip> 
using namespace std;
int main()
{
	ofstream outfile("Bloknot.txt");
	setlocale(0, "Russian");
	int s[100][100], n, m;
	cout << "Введите кол-во строк: " << endl;
	cin >> n;
	cout << "Введите кол-во столбцов: " << endl;
	cin >> m;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)

		{

			cout << "Введите S[" << i << "][" << j << "]: ";
			cin >> s[i][j];
		}

	for (int i = 0; i < n; i++)

	{

		for (int j = 0; j < m; j++) {
			cout << setw(9) << s[i][j] << " ";
			outfile << setw(9) << s[i][j] << " ";

		}

		cout << endl;
		outfile << endl;

	}

	cout << "Сумма элементов по каждому столбцу" << endl;
	outfile << "Сумма элементов по каждому столбцу" << endl;
	int sum = 0;
	for (int j = 0; j < m; j++) {
		for (int i = 0; i < n; i++)
			sum += s[i][j];
		cout << setw(10) << sum;
		outfile << setw(10) << sum;
		sum = 0;

	}

	cout << endl;
	system("pause");
	return 0;

}
