#include <iostream>
using namespace std;
int main() {

	setlocale(0, "ru");
	char str[12] = { 'В','Е','Л','И','К','О','Л','Е','П','Н','Ы','Й' };

	cout << endl << str[0] << str[1] << str[2] << str[3] << str[4];
	cout << endl << str[4] << str[5] << str[6];
	cout << endl << str[2] << str[3] << str[4];
	cout << endl << str[2] << str[1] << str[0];
	cout << endl << str[0] << str[1] << str[4];
	return 0;
}
