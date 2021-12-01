#include <iostream>
#include <string>
using namespace std;

int main() {
    setlocale(0, "ru");
    int X[100], n = 0, m;
    string txt = "Ощихитео*Ощихитео*Великий*Господин";
    cout << txt << endl;
    cout << "Введите длину N символов: ";
    cin >> m;
    for (int i = 0; i <= txt.length(); i++)
        if (txt[i] == '*') {
            X[n] = i; n++;
        }
    for (int i = n; i >= 0; i--)
        if ((X[i] - X[i - 1] - 1) == m)
            txt.replace(X[i - 1], X[i] - X[i - 1], "");

    cout << txt << endl;
    return 0;
}
