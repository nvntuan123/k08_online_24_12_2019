#include <iostream>

#define SLPT 100

using namespace std;

int main()
{
	// Khai bao tuong minh.
	int a[100];

	// Khai bao khong tuong minh.
	typedef int Mang1Chieu[100];
	Mang1Chieu a1, a2, a3;

	int na = 10;
	//int a[na]; // Khai bao kieu nay la khong hop le.

	const int nb = 10;
	int b[nb]; // Su dung duoc, nhung k nen su dung kieu nay.

	int c[SLPT]; // Nen khai kieu nay va kieu thuong duoc su dung.

	int iArr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	int iArr1[3] = { 0 };

	int iArr2[5] = { 1, 2, 3, 4, 5 };

	int iArr3[5] = { 1, 2, 3 };

	system("pause");
	return 0;
}

