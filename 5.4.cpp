#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;
int main()
{
	setlocale(0, "Russian");
	int RandomDigits[50];
	float sum = 0;
	srand(time(NULL));
	for (int i = 1; i <= 50; i++)
	{
		cout << "s[" << i << "] = ";
		RandomDigits[i] = static_cast <double> (rand()) / (RAND_MAX + 1) * (5 + 5) - 5;
		cout << RandomDigits[i] << endl;
		if (RandomDigits[i] < 0)
		{
			sum++;
		}
	}
	cout << "Количество отрицательных чисел = " << sum << endl;
	return 0;
}
