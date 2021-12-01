#include <iostream>

#include <iomanip>

using namespace std;

int main()

{
	setlocale(0, "Russian");

	cout << setiosflags(ios::left) << setw(20) << "Фамилия" << setw(20) << "Имя" << setw(20) << "Адрес" << setw(20) << "город" << endl;
	cout << setw(75) << setfill('-') << "-" << endl;
	cout << setfill(' ') << setiosflags(ios::left) << setw(20) << "Петров" << setw(20) << "Василий" << setw(20) << "Кленовая 16" << setw(15) << "Санкт-Петербург" << endl;
	cout << setiosflags(ios::left) << setw(20) << "Иванов" << setw(20) << "Сергей" << setw(20) << "Осиновая 3" << setw(20) << "Находка" << endl;
	cout << setiosflags(ios::left) << setw(20) << "Сидоров" << setw(20) << "Иван" << setw(20) << "Березовая 21" << setw(20) << "Калининград" << endl;

	return 0;

}