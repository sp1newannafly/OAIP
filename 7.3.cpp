#include <iostream>
using namespace std;
int main()
{
    setlocale(0, "Russian");
    int i, j, k;
    const int n = 5;
    float A[100][100], U[100][100], B[100], x[100], y[100], q, d, temp;
    for (i = 0; i < n; i++)
        for (k = 0; k < n; k++)
            A[i][k] = 0;
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            U[i][j] = 0;
    cout << "Введите Q: "; cin >> q;
    cout << "Введите D: "; cin >> d;
    A[0][0] = A[4][4] = q;
    A[1][1] = A[2][2] = A[3][3] = -2;
    for (i = 0; i < 4; i++)
    {
        k = i + 1;
        A[i][k] = A[k][i] = 1;
    }
    cout << "Матрица A равна:" << endl;
    for (i = 0; i < n; i++)
    {
        for (k = 0; k < 5; k++)
            cout << A[k][i] << "\t ";
        cout << endl;
    }
    B[0] = B[4] = 0;
    for (i = 1; i <= 3; i++)
        B[i] = d;
    cout << "Матрица B равна: " << endl;
    for (i = 0; i < n; i++)
        cout << B[i] << endl;
    for (int i = 0; i < n; i++)
    {
        temp = 0;
        for (int k = 0; k < i; k++) {
            temp = temp + U[k][i] * U[k][i];
            U[i][i] = sqrt(fabs(A[i][i]) - temp);
            for (j = i + 1; j < n; j++)
            {
                temp = 0;
                for (k = 0; k < i; k++) {
                    temp = temp + U[k][i] * U[k][j];
                    U[i][j] = (fabs(A[i][j]) - temp) / U[i][i];
                }
            }
        }
    }
    for (i = 0; i < n; i++)
    {
        temp = 0;
        for (int k = 0; k < i; k++) {
            temp = temp + U[k][i] * y[k];
            y[i] = (fabs(B[i]) - temp) / U[i][i];
        }
    }
    for (i = n - 1; i > 0; i--)
    {
        temp = 0;
        for (int k = i + 1; k < n; k++) {
            temp = temp + U[i][k] * x[k];
            x[i] = (y[i] - temp) / U[i][i];
        }
    }
    for (i = 0; i < n; i++)
        cout << "x" << i << "= " << x[i] << endl;
    system("pause");
    return 0;
}
