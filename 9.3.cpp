#include <iostream>
using namespace std;

int main() {
    setlocale(0, "ru");
    int B[100][100], t = 0, x = 0;
    cout << "Введите кол-во столбцов:  ";
    cin >> t;
    cout << "Введите кол-во строк: ";
    cin >> x;
    for (int i = 0; i < x; ++i)
        for (int j = 0; j < t; ++j) {
            cout << "B[" << i << "][" << j << "] = ";
            cin >> B[i][j];
        }

    for (int i = 0; i < x; ++i) {
        cout << endl;
        for (int j = 0; j < t; ++j)
            cout << B[i][j] << ' ';
    }

    for (int i = 0; i < 2; ++i)
        for (int j = 0; j < t; ++j) {
            int m = B[i][j];
            B[i][j] = B[1][j];
            B[1][j] = m;
        }
    cout << endl;

    for (int i = 0; i < x; ++i) {
        cout << endl;
        for (int j = 0; j < t; ++j)
            cout << B[i][j] << ' ';
    }
    cout << endl;
}

