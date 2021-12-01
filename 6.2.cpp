#include <iostream>
using namespace std;

int x(int i, double n)
{
    int Max;
    if (i > n)
    {
        Max = i;
    }
    else
    {
        Max = n;
    }
    return Max;
}
int main()
{
    int k, f, z;
    setlocale(0, "ru");
    cout << "Введите число k: ";
    cin >> k;
    cout << "Введите число f: ";
    cin >> f;
    cout << "Максимальным числом является число " << x(k, f) << endl;
    z = x(k, 2 * k * f) + x(5 * k + 3 * f, f);
    cout << "z = " << z;
    return 0;
}


