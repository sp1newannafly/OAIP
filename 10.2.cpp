#include<iostream>
using namespace std;
struct date
{
    int Monat;
    int Tag;
    int Jahr;
};
int main()
{
    setlocale(LC_ALL, "Rus");
    date sp1, sp2, sp3;
    char dummy;
    cout << "ввести день, месяц и год в формате 31/12/2002 ";
    cin >> sp1.Tag >> dummy >> sp2.Monat >> dummy >> sp3.Jahr;
    cout << sp1.Tag << dummy << sp2.Monat << dummy << sp3.Jahr;
    return 0;
}