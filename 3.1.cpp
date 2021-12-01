#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int n = 15;
	int sum = 0;
	int i = 0;
	while (i < n)
	{
		i++;
		sum += i;
	}
	cout << sum;
	return 0;
}
