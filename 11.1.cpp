#include<fstream> 
#include <iostream> 
using namespace std;
int main() {
	setlocale(0, "Russian");
	ofstream outfile("имя.txt");
	char a[100], b[100], c[100], d[100];
	char x = 1; do
	{
		cout << "Введите свою Фамилию : " << endl; cin >> a;
		cout << "Введите свое Имя :" << endl; cin >> b;
		cout << "Введите свое Отчетсво :" << endl; cin >> c;
		cout << "Введите ваш рабочий номер :" << endl; cin >> d;
		cout << a << "\n" << b << "\n" << c << "\n" << d << endl; cout << "Желаете отрекдактировать? 1-да или 0-нет!" << endl; cin >> x;
	} while (x == '1');
	outfile << a << "\n" << b << "\n" << c << "\n" << d << endl; ifstream input("имя.txt");
	cout << "Фамилия:" << a << "\n" << endl; cout << "Имя:" << b << "\n" << endl;
	cout << "Отчество:" << c << "\n" << endl;

	cout << "Номер работника: " << d << "\n" << endl;
	return 0;
}
