#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "Russian");
	int a, b;
	a = 0;
	for (int i = 2; i < 57; i++)
	{
		b = i % 5;
		if (b == 0)
		{
			a = a + i;
			cout << a << "\n";
		}
	}
	return(0);
}
