#include <iostream>
#include <string>
using namespace std;

int main() {
    setlocale(0, "ru");
    string aaa = "shadowfien";
    cout << aaa << endl;
    for (int i = 0; i < aaa.length(); i++) {
        for (int j = 0; j < aaa.length(); j++) {
            if (aaa[j] > aaa[i]) {
                char t = aaa[i];
                aaa[i] = aaa[j];
                aaa[j] = t;
            }
        }
    }
    cout << aaa << endl;
}

