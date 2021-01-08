#include <iostream>

using namespace std;

int n = 10; // Bien toan cuc. Data segment.

int TinhTong(int a, int b)
{
	int iSum = 0;
	iSum = a + b;
	return iSum;
}

int main()
{
	int a = 2, b = 3; // Bien cuc bo. Stack segment.

	system("pause");
	return 0;
}

