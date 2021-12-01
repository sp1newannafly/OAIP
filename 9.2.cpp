#include <iostream>
#include <ctime>
#include <time.h>
using namespace std;

int main() {
    srand(time(0));
    int x[25], t = 0, o = 25, cup = 0;
    for (int i = 0; i < 25; i++) {
        x[i] = rand() % 100;
        cout << x[i] << " ";
    }
    cout << endl;
    for (int u = 1; u < 25; u++) {
        cup = u - 1;
        t = x[u];
        for (o = cup; o >= 0 && x[o] % 2 == 0; o--)
            x[o + 1] = x[o];
        x[o + 1] = t;
    }
    for (int i = 0; i < 25; i++)
        cout << x[i] << " ";
    cout << endl;
    return 0;
}
