#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "Russian");
	int y, selfzp, zp, p;
	cout << "Ваша заработная плата: ";
	cin >> selfzp;
	cout << "Ваш стаж работы: ";
	cin >> y;
	if (y < 5) {
		cout << "У вас нет надбавки" << endl;
		return 0;
	}
	
	if (y >= 5 && y < 11)
	{
		p = 10;
		zp = p * (selfzp / 100);
	}
	if (y >= 11 && y < 16);
	{
		p = 15;
		zp = p * (selfzp / 100);
	}
	if (y >= 16);
	{
		p = 20;
		zp = p * (selfzp / 100);
	}
	cout << "Ваша надбавки к зп составляет: " << zp;
}
