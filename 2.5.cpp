#include <iostream>
using namespace std;
int main()
{
    setlocale(0, "Russian");
    int day, time;
    double c;
    cout << "Введите стоимоть\n";
    cin >> c;
    cout << "Введите продолжительность\n";
    cin >> time;
    cout << "Введите день\n";
    cin >> day;
    
    if (day > 8) {
        cout << "Другой день введи умник" << endl;
        return 0;
    }
        
    
    c *= time;

    if (day == 6 || day == 7)
        c -= c * 0.2;
    cout << "Стоимость разговора: " << c  <<" руб. " << endl;
     
    return 0;
}