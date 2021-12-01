#include <iostream>
int K(int y)
{
	if (y == 0)
		return 0;
	if (y == 1)
		return 1;
	return K(y - 1) + K(y - 2);
}
int main()
{
	for (int x = 0; x < 30; x++)
		std::cout << K(x) << " ";
	return 0;
}
