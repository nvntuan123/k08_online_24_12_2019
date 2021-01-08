#include <iostream>

#define MAX 100

using namespace std;

// Nhap mang.
void NhapMang(int iArr[], int iN)
{
	for (int i = 0; i < iN; ++i)
	{
		cout << "Nhap a[" << i << "] = ";
		cin >> iArr[i];
	}
}

// Xuat mang.
void XuatMang(int iArr[], int iN)
{
	for (int i = 0; i < iN; ++i)
	{
		cout << " " << iArr[i];
	}
	cout << endl;
}

void XoaPhanTu(int iArr[], int& iN, int iViTriXoa)
{
	for (int i = iViTriXoa + 1; i < iN; ++i)
	{
		iArr[i - 1] = iArr[i];
		// 1 2 3 4 5
		// 0 1 2 3 4 => a[2] = a[3], a[3] = a[4]
		// 0 1 3 4.
	}
	//--iN; // Giam bien iN tuc so luong phan tu chi con n - 1.
}

int main()
{
	int iArr[MAX]{ 1, 2, 3, 4, 5 };
	int iN = 5;
	cout << "Mang ban dau la:";
	XuatMang(iArr, iN);

	XoaPhanTu(iArr, iN, 2);
	cout << "Mang sau khi xoa phan tai vi tri 2 la:";
	XuatMang(iArr, iN);

	cout << endl;
	system("pause");
	return 0;
}

