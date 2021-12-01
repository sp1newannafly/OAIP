#include <iostream>
using namespace std;
int main()
{
    setlocale(0, "Russian");
    int ch1, zn1, ch2, zn2, ch3, zn3;
    char c = 0;
    do
    {
        cout << "Введите числитель первой дроби: " << endl;
        cin >> ch1;
        cout << "Введите знаменатель первой дроби: " << endl;
        cin >> zn1;
        cout << "Введите числитель второй дроби: " << endl;
        cin >> ch2;
        cout << "Введите знаменатель первой дроби: " << endl;
        cin >> zn2;
        cout << "Введите желаемую операцию(+, -, *, /): " << endl;
        cin >> c;
        switch (c)
        {
        case '+':
        {
            cout << ch1 * zn2 + ch2 * zn1 << "/" << zn1 * zn2 << endl;
            break;
        }
        case '-':
        {
            cout << ch1 * zn2 - ch2 * zn1 << "/" << zn1 * zn2 << endl;
            break;
        }
        case '*':
        {
            cout << ch1 * ch2 << "/" << zn1 * zn2 << endl;
            break;
        }
        case '/':
        {
            cout << ch1 * zn2 << "/" << zn1 * ch2 << endl;
            break;
        }
        default:
        {
            cout << "Вы не ввели существующую операцию!";
        }
        }
        cout << "\nЖелаете выполнить еще одну операцию? (y/n) ";
        cin >> c;
    } while (c == 'y');
    return 0;
}