#include <iostream>

using namespace std;

struct employee {
    int num;
    float salary;
};

int main(int argc, char* argv[])

{
    setlocale(0, "Russian");
    employee arr[3];
    for (int i = 0; i < 3; ++i) {
        cout << "Введите данные " << i + 1 << " сотрудника : ";
        cin >> arr[i].salary;
        arr[i].num = i + 1;
    }
    cout << "\n Данные сотрудников : \n";
    for (int i = 0; i < 3; ++i) {
        cout << arr[i].num << ") " << arr[i].salary << "\n";
    }

    cout << endl;
    return 0;
}