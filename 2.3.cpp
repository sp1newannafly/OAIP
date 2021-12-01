#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
int main()
{
	setlocale(0, "Russian");
	double x, y;
	cout << "Введите число: ";
	cin >> x;
	if (x > 3){
		y = x * x + 5;
		cout << " y = " << y;
	}

	else (x <= 3);
	y = x - 8;
	cout << " y = " <<y;
}
