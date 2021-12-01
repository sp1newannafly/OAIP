#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    srand((int)time(0));
    const int n = 10;
    double a[n];

    cout << "Matrix:\n";
    for (int i = 0; i < n; i++)
    {
        a[i] = rand() % 19 - 9;
        cout << a[i] << " ";
    }

    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - i - 1; j++)
            if (a[j] > a[j + 1])
                swap(a[j], a[j + 1]);

    cout << "\nSorted matrix:\n";
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;

    system("pause");
    return 0;
}