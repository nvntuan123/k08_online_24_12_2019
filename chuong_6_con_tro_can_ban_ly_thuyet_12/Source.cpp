#include <iostream>

#define MAX 100

using namespace std;

// Am vo cuc-----------------------------0]--------------------------------------Duong vo cuc.

void NhapN(int* iN)
{
	do
	{
		cout << "Nhap vao so luong phan tu n = ";
		cin >> (*iN);

		if ((*iN) <= 0)
		{
			system("cls");
			cout << "Nhap sai, vui long nhap lai(n > 0)!" << endl;
		}
	} while ((*iN) <= 0);
}

// Nhap mang.
void NhapMang(int* iArr, int* iN)
{
	for (int i = 0; i < (*iN); ++i)
	{
		cout << "Nhap a[" << i << "] = ";
		cin >> *(iArr + i);
	}
}

// Xuat mang.
void XuatMang(int* iArr, int* iN)
{
	for (int i = 0; i < (*iN); ++i)
	{
		cout << " " << *(iArr + i);
	}
	cout << endl;
}

int main()
{
	int* ptr; // Khai bao con nhung chua cap phat vung nho cho no.
	int* ptr1 = new int; // Yeu cau he dieu hanh cap phat cho 1 cai dia chi.

	delete ptr1; // Tra lai he dieu hanh dia chi ma no da cap phat cho bien con tro *ptr1.

	// Cau lenh khai bao mang tinh.
	int iArrStatic[MAX];

	//// Khai bao va nhap vao so luong phan tu cua mang 1 chieu dong.
	//int *iN = new int; // Cap phat vung nho dong cho bien n - tuc la so luong phan tu cua mang 1 chieu dong.
	//NhapN(iN);

	//// Khai bao mang dong hay con goi la cap phat vung nho cho mang 1 chieu dong.
	//int *iArr = new int[(*iN)]; // Cap phat vung nho dong cho mang 1 chieu.

	//NhapMang(iArr, iN);
	//cout << endl << "Mang moi nhap vao la:";
	//XuatMang(iArr, iN);

	//delete[] iArr; // Giai phong mang 1 chieu dong.

	//delete iN; // Giai phong bien con iN.

	//int *iArr = new int[5]; // Neu nhu chua co C++11.
	//iArr[0] = 1;
	//iArr[1] = 2;
	//iArr[2] = 3;
	//iArr[3] = 4;
	//iArr[4] = 5;

	//int *iArr = new int[] {1, 2, 3}; // Error. cai nay bi loi nha.
	//int *iArr1 = new int[5]{ 1, 2, 3, 4 }; // C++11.
	//cout << "iArr[0] = " << iArr1[0] << endl;
	//cout << "iArr[1] = " << iArr1[1] << endl;
	//cout << "iArr[2] = " << iArr1[2] << endl;
	//cout << "iArr[3] = " << iArr1[3] << endl;
	//cout << "iArr[4] = " << &iArr1[4] << endl;

	cout << endl;
	system("pause");
	return 0;
}

