#include <iostream>
using namespace std;
int main() {
	setlocale(0, "Russian");
	int sum, i;
	sum = 0;
	i = 0;
	do {
		if (i % 2 != 0)
		{
			sum += i;
		}
			i++;
		} 
	while (i <= 100);


	cout << "сумма нечетных чисел от 0 до 100: " << sum;
}
