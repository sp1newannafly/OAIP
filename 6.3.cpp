#include <iostream>
#include <string>
using namespace std;

int f(int n[], int x)
{
    int max = 0;
    for (int i = 0; i < x; i++)
    {
        if (n[i] > max)
            max = n[i];
    }
    return max;
}
int cot(string _B, int m[]) {
    int n = 0, y;
    cout << "Введите размер массива " << _B << ":" << endl;
    cin >> n;
    cout << "Введите элементы массива " << _B << ":" << endl;
    for (int i = 0; i < n; i++)
        cin >> m[i];
    y = f(m, n);
    cout << "Макимальный элемент массива " << _B << ": " << y << endl;
    return y;
}

int main()
{
    setlocale(0, "ru");
    int r = 0, A, B, C;
    int a[100], b[100], c[100];
    A = cot("A", a);
    B = cot("B", b);
    C = cot("C", c);
    if (C != 0) {
        r = (A * B) / C;
        cout << "R = " << r << endl;
    }
    else {
        cout << "Данное выражение не имеет значения" << endl;
    }
    system("pause");
    return 0;
}
