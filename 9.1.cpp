#include <iostream>
using namespace std;

int xxx(int A[][5]) {
    cout << "Упорядоченная матрица: ";
    for (int i = 0; i < 4; ++i) {
        cout << endl;
        for (int x = 0; x < 5; ++x)
            cout << A[i][x] << ' ';
    }
    cout << endl;
    return 0;
}
int ff(int y[][5]) {
    for (int i = 0; i < 4; ++i)
        for (int x = 0; x < 5 - 1; ++x)
            for (int l = x + 1; l < 5; ++l)
                if (y[i][x] > y[i][l]) {
                    int n = y[i][x];
                    y[i][x] = y[i][l];
                    y[i][l] = n;
                }
    xxx(y);
    return 0;
}
int main() {
    setlocale(0, "ru");
    int v[4][5] = {
        {9,0,4,1,8},
        {0,4,8,3,5},
        {4,9,5,10,1},
        {11,1,6,2,14}
    };
    ff(v);
    return 0;
}
