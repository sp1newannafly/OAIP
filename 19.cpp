#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    double a, b;
    cout << "enter a:\n";
    cin >> a;
    cout << "enter b:\n";
    cin >> b;

    double* aPtr = &a;
    double* bPtr = &b;
    {
        *aPtr *= 3;
        *bPtr *= 3;
    }
    cout << "Результат А увелечения на 3 : " << a << endl;
    cout << "Результат B увелечения на 3: " << b << endl;
    swap(a, b);
    cout << "aw: " << a << endl;
    cout << "b: " << b << endl;
    return 0;
}