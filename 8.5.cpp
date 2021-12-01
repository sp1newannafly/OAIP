#include <iostream>
using namespace std;

int main() {
    setlocale(0, "ru");
    int mt[29], aa = -1;
    cout << "Все числа: ";
    while (aa < 29) {
        aa = aa + 1;
        mt[aa] = aa + 1;
        cout << mt[aa] << " ";
    }
    cout << endl;
    cout << "Числа, кратные 3: ";
    aa = -1;
    while (aa < 29) {
        aa = aa + 1; mt[aa] = aa + 1;
        if (mt[aa] % 3 == 0)
            cout << mt[aa] << " ";
    }
    cout << endl;
    cout << "Числа, кратные 2: ";
    aa = -1;
    while (aa < 29) {
        aa = aa + 1; mt[aa] = aa + 1;
        if (mt[aa] % 2 == 0)
            cout << mt[aa] << " ";
    }
    cout << endl;
    return 0;
}
