#include <iostream>
#include <string>
using namespace std;
int main() {
    setlocale(0, "ru");
    int n = 0;
    string txt = "hubabuba(kashamalasha)hababana";
    char O[100];
    for (int i = 0; i < txt.length(); i++) {
        if (txt[i] == '(') {
            O[n] = i;
            n++;
        }
        if (txt[i] == ')') {
            O[n] = i;
            n++;
        }
    }
    cout << txt.replace(O[0], O[1] - O[0] + 1, "") << endl;
    return 0;
}
