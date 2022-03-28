#include<iostream>
using namespace std;
int main() {
	setlocale(0, "ru");
	int a = 5, b = 5;
	int* pa = &a, * pb = &b;

	int* a1 = new int[*pa]{ 1, 2, 3, 4, 5 };
	for (int i = 0; i < *pa; i++) {
		printf("%3d", a1[i]);
	}
	cout << endl << endl;

	int* b1 = new int[*pb]{ 6, 7, 8, 9, 10 };
	for (int* q = b1; q != b1 + *pa; q++) {
		printf("%3d", *q);
	}

	delete[] a1, b1;
}