#include <iostream> 
using namespace std;
int main()
{
    setlocale(0, "Russian");
    int number;

    cout << "Введите число " << endl;
    cin >> number;

    if (number = 0)
        cout << "Ни нечётное и ни четное " << endl;
    if (number % 2 == 0)
        cout << "Чётное " <<endl;
    else
        cout << "Нечётное " << endl;
    
}
