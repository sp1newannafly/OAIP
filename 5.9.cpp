#include <iostream>
#include <cstdlib>
#include <iostream>
#include <ctime>
#include <iomanip>
using namespace std;

int main()
{
    setlocale(0, "");
    srand(time(NULL));
    int n;
    cin >> n;
    int mas[100][100];
    int i = 0, j = 0;
    int max_glav = mas[100][110];
    cout << setw(20) << "матрица" << endl;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            mas[i][j] = static_cast <double> (rand()) / (RAND_MAX + 1) * (5 - 1) + 1;
            cout << mas[i][j] << "  ";
        }
        cout << endl;
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (i == j & mas[i][j] > max_glav)
            {
                max_glav = mas[i][j];
            }
        }
    }
    cout << " Максимальный элемент главной диагонали ";
    cout << max_glav << endl;
    return 0;
}
