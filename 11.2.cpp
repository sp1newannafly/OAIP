#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <iomanip>
using namespace std;

int main()
{
    ofstream word("spisok.txt");
    ifstream ford("spisok.txt");
    setlocale(0, "Russian");
    int a;
    string xx, zz, yy, dd, ff;
    string line;
    char fia[300], pol[300], voz[300], mes[300], diagn[300], f[300], n[300], q[500];
    int ui = 0;
    do {
        cout << "\t\t__________________________________________________________________________\n";
        cout << "\t\t1. добавить запись \n";
        cout << "\t\t2. вывести на экран данные массива \n";
        cout << "\t\t3. вывести на экран результат выполнения массива\n";
        cout << "\t\t4. End \n";
        cout << "\t\t__________________________________________________________________________\n";
        cin >> a;
        switch (a) {
        case 1:
            cout << "ФИО клиента: "; // ввод данных происходит через нижнее подчеркивание.
            cin >> fia;
            cout << "Пол: ";
            cin >> pol;
            cout << "Возраст пациента: ";
            cin >> voz;
            cout << "Место жительства: ";
            cin >> mes;
            cout << "Диагноз: ";
            cin >> diagn;
            word << fia << ' ' << pol << ' ' << voz << ' ' << mes << ' ' << diagn;
            word << endl;
            break;
        case 2:
            cout << "ФИО клиента" << setw(20) << "Пол" << setw(20) << "Возраст пациента" << setw(20) << "Место жительства" << setw(20) << "Диагноз";
            cout << endl;
            while (!ford.eof())
            {
                ford >> fia >> pol >> voz >> mes >> diagn;
                cout << fia << setw(20) << pol << setw(20) << voz << setw(20) << mes << setw(20) << diagn << endl;
            }
            break;

        case 3:

            while (getline(ford, line))
            {
                istringstream aaa(line);
                aaa >> xx >> zz >> yy >> dd >> ff;

                if ("Moscow" != xx)
                {
                    cout << "  " << xx;


                }

            }
            break;
        case 4:
            word.close();
            ford.close();
            exit(0);
            break;
        }
    } while (true);
    return 0;
    system("pause");
}
