#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main()
{
	setlocale(0, "Russian");
	int s[100];
	int n;
	cout << "Введите n: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 1; i <= n; i++)
	{
		cout << "s[" << i << "] = ";
		s[i] = static_cast <double> (rand()) / (RAND_MAX + 1) * (25 + 7) - 7;
		cout << s[i] << endl;
	}
	return 0;
}
