

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    cout << fixed;
    cout.precision(4);
    setlocale(LC_ALL, "rus");
    cout << "Введите n" << endl;
    int n;
    double sum = 1.0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        sum +=  1 / pow(2, i);
    }
    cout << sum << endl;
}