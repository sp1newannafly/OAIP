#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "Russian");
	int a, b;
	a = 0;
	for (int i = 1; i < 101; i++)
	{
		b = i % 2;
		if (b == 1)
		{
			a = a + i;
			cout << a << "\n";
		}
	}
	return(0);
}

