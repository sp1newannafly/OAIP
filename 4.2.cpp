#include <iostream>
using namespace std;
int main()
{
    int n;
    int sum = 0;
    cout << "n: ";
    cin >> n;

    for (int i = 5; i < n; i += 5)
        sum += i;

    cout << " Sum = " << sum << endl;
}
