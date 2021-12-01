#include <iostream>
#include <math.h>
using namespace std;
int main() {
    setlocale(LC_ALL, "Ru");
    const int MaxIter = 100;
    double x, eps;
    double Cn, y;
    int n;
    cout << "Введите х и точность:";
    cin >> x >> eps;
    y = Cn = 1;
    n = 0;
    do
    {
        Cn *= x / (n + 1);
        y += Cn;
        n++;
        if (n > MaxIter)
        {
            cout << "Ряд расходится.";
            break;
        }
    } while (fabs(Cn) > eps);
    if (fabs(Cn) <= eps)
    {
        cout << "e^x=: " << y << endl;
        cout << "Для проверки:";
        cout << pow(2.71, x) << endl;
    }
    return 0;
}