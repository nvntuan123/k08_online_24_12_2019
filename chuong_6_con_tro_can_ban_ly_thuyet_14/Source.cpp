#include <iostream>

using namespace std;

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

// Ham thay doi kich thuoc mang dong.
void ThayDoiKichThuoc(int*& iArr, int iOldSize, int iNewSize)
{
	// B1: Cap phat dong mot mang tam va do du lieu tu mang cu sang mang tam.
	int* iTemp = new int[iOldSize]; // Cap phat dong mot mang tam de luu gia tri cua mang cu.

	// Do du lieu tu mang cu iArr sang mang tam.
	for (int i = 0; i < iOldSize; ++i)
	{
		iTemp[i] = iArr[i];
	}

	// B2: Giai phong mang cu va cap phat dong voi size moi.
	delete[] iArr; // Giai phong mang cu.
	iArr = new int[iNewSize]; // Cap phat dong voi size moi.

	// B3: Do du lieu tu mang tam sang mang moi.
	/* VD: Tang kich thuoc mang dong len 1.
	iOldSize = 5, iNewSize = 6;
	Giam kich thuoc mang dong xuong 1.
	iOldSize = 5, iNewSize = 4;
	*/
	int iMinSize = iOldSize < iNewSize ? iOldSize : iNewSize;
	for (int i = 0; i < iMinSize; ++i)
	{
		// Do du lieu tu mang tam sang mang moi voi size moi.
		iArr[i] = iTemp[i];
	}
	delete[] iTemp; // Giai phong mang tam.
}

void XoaPhanTu(int*& iArr, int*& iN, int iViTriXoa)
{
	for (int i = iViTriXoa + 1; i < (*iN); ++i)
	{
		iArr[i - 1] = iArr[i];
		// 1 2 3 4 5
		// 0 1 2 3 4 => a[2] = a[3], a[3] = a[4]
		// 0 1 3 4.
	}
	ThayDoiKichThuoc(iArr, (*iN), ((*iN)--));
}

void ThemPhanTu(int*& iArr, int*& iN, int iViTriThem, int iPhanTuThem)
{
	ThayDoiKichThuoc(iArr, (*iN), ((*iN) + 1));
	for (int i = (*iN) - 1; i >= iViTriThem; --i)

	{
		iArr[i + 1] = iArr[i];
	}
	iArr[iViTriThem] = iPhanTuThem;
	++(*iN); // Tang bien iN tuc so luong phan tu tang len n + 1.
}

//void HoanVi(int &a, int &b)
//{
//	int iTemp = a;
//	a = b;
//	b = iTemp;
//}

void HoanVi(int* a, int* b)
{
	int iTemp = *a;
	*a = *b;
	*b = iTemp;
}

int main()
{
	// Khai bao va nhap vao so luong phan tu cua mang 1 chieu dong.
	int* iN = new int; // Cap phat vung nho dong cho bien n - tuc la so luong phan tu cua mang 1 chieu dong.
	NhapN(iN);

	// Khai bao mang dong hay con goi la cap phat vung nho cho mang 1 chieu dong.
	int* iArr = new int[(*iN)]; // Cap phat vung nho dong cho mang 1 chieu.

	NhapMang(iArr, iN); // Truyen con tro vao ham.
	cout << endl << "Mang moi nhap vao la:";
	XuatMang(iArr, iN);

	ThemPhanTu(iArr, iN, 2, 69);
	cout << endl << "Mang sau khi them so 69 vao vi tri 2 la:";
	XuatMang(iArr, iN);

	XoaPhanTu(iArr, iN, 2);
	cout << endl << "Mang sau khi xoa phan tu tai vi tri 2 la:";
	XuatMang(iArr, iN);

	delete[] iArr; // Giai phong mang 1 chieu dong.

	delete iN; // Giai phong bien con iN.

	/*int a = 2, b = 3;
	cout << "Truoc khi hoan vi a = " << a << ", b = " << b << endl;
	HoanVi(&a, &b); // Truyen dia chi cua bien a va b.
	cout << "Sau khi hoan vi a = " << a << ", b = " << b << endl;*/

	/*
	Ky thuat sap xep tren mang 1 chieu dong.
	Va ky con tro ham ap dung vao mang 1 chieu dong voi ky thuat sap xep.
	Mang 2 chieu tinh~.
	Bai tap ve nha:
	1. Sap xep mang so nguyen tang dan.
	2. Sap xep mang so nguyen giam dan.
	3. Sap xep so chan tang dan, va so le cung tang dan, va nhung~ so chan dung truoc so le.
	VD: 1 4 2 3 9 7 5 8 6
	Mang sau khi sap xep theo yeu cau cua bai 3 la: 2 4 6 8 1 3 5 7 9
											Index:  0 1 2 3 4 5 6 7 8
	*/

	cout << endl;
	system("pause");
	return 0;
}

