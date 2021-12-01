#include <iostream>
#include <string>
using namespace std;

int main() {
    setlocale(0, "russian");
    int X[100], n;
    string x, txt = "oshiete oshiete yo sono shikumi.";
    n = 0;
    cout << txt << endl;
    cout << "Введите слово: ";
    cin >> x;
    for (int i = 0; i < txt.length(); i++)
        if (txt[i] == ' ') {
            X[n] = i; n++;
        }
    cout << txt.replace(X[0] + 1, X[1] - 1 - X[0], x) << endl;
    return 0;
}
