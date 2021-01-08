#include <iostream>

#define SLPT 100

using namespace std;

void NhapN(int& iN)
{
	do
	{
		cout << "Nhap vao so luong phan tu n: ";
		cin >> iN;

		// --------------]0--------------------------100(--------------------
		if (iN <= 0 || iN > 100)
		{
			system("cls");
			cout << "Nhap sai, vui long nhap lai(n > 0 va n <= 100)" << endl;
		}
	} while (iN <= 0 || iN > 100);
}

void NhapMang(int iN, int a[])
{
	for (int i = 0; i < iN; i++)
	{
		cout << "a[" << i << "] = ";
		cin >> a[i];
	}
}

void XuatMang(int iN, int a[])
{
	for (int i = 0; i < iN; i++)
	{
		cout << a[i] << " ";
	}
}

// Ky thuat duyet mang. Cai nay con goi la ky thuat dac linh canh la bai tap 134 trang 58 sach 1000 bai tap lap trinh C.
int TimMax(int iN, int a[])
{
	int iMax = a[0]; // Ban dau gan gia max cho a[0] va dong thoi loai a[0] ra.
	for (int i = 1; i < iN; i++)
	{
		if (iMax < a[i])
			iMax = a[i];
	}
	return iMax;
}

// Ky thuat tim kiem. Tim kiem gia tri 2(la gia tri) co trong mang hay khong.
int TimKiem(int iN, int a[])
{
	//int ViTri = -1;
	for (int i = 0; i < iN; i++)
	{
		if (a[i] == 2)
			return i;
	}
	//return ViTri;
	return -1;
}

void HoanVi(int& a, int& b)
{
	int Temp = a;
	a = b;
	b = Temp;
}

// Ky thuat sap xep. Sap xep cac gia tri trong mang tang dan. Bai 255/74/1000
void SapXepTangGiamDan(int iN, int a[], char cKyTuPhanBiet)
{
	for (int i = 0; i < iN - 1; i++)
	{
		for (int j = i + 1; j < iN; j++)
		{
			if (cKyTuPhanBiet == 't' || cKyTuPhanBiet == 'T')
			{
				if (a[i] > a[j])
					HoanVi(a[i], a[j]);
			}

			if (cKyTuPhanBiet == 'g' || cKyTuPhanBiet == 'G')
			{
				if (a[i] < a[j])
					HoanVi(a[i], a[j]);
			}
		}
	}
}

// Ky thuat them mang.
void Them(int& iN, int a[], int ViTriThem, int PhanTuThem)
{
	for (int i = iN - 1; i >= ViTriThem; i--)
	{
		a[i + 1] = a[i];
	}
	a[ViTriThem] = PhanTuThem;
	iN++; // 5 tang len 1 don vi = 6.
}

// Ky thuat xoa mang.
void Xoa(int& iN, int a[], int ViTriXoa)
{
	for (int i = ViTriXoa + 1; i < iN; i++)
	{
		a[i - 1] = a[i];
	}
	iN--; // Cap nhat lai so luong phan tu.
}

// Ky thuat tinh tong. Bai 200/67/1000 bai tap lap trinh C.
int Tong(int iN, int a[])
{
	int iTong = 0;
	for (int i = 0; i < iN; i++)
	{
		iTong += a[i];
	}
	return iTong;
}

// Ky thuat dem. Bai 216/69/1000.
int DemGiaTriChan(int iN, int a[])
{
	int iDem = 0;
	for (int i = 0; i < iN; i++)
	{
		if (!(a[i] % 2))
		{
			iDem++;
		}
	}
	return iDem;
}

// Ky thuat dat co hieu. Bai 240/72/1000
bool KiemTraGiaTriKhong(int iN, int a[])
{
	//bool bCheck = false; // Co hieu, ban dau mac dinh la co gia tri khong.
	for (int i = 0; i < iN; i++)
	{
		if (a[i] == 0)
			return true;
	}
	return false;
}

int main()
{
	int iN;
	int a[SLPT];
	int b[SLPT];

	/*a[0] = b[0]; // Hop le.
	a = b; // Khong hop le.
	b = a; // Khong hop le. */

	NhapN(iN);
	NhapMang(iN, a);
	cout << endl << "Mang truoc khi sap xep" << endl;
	XuatMang(iN, a);

	cout << "\nMax = " << TimMax(iN, a);

	int ViTriGiaTriX = TimKiem(iN, a);
	if (ViTriGiaTriX == -1)
		cout << endl << "Khong tim thay gia tri 2 trng mang";
	else
		cout << endl << "Tim thay gia tri 2 trong mang tai vi tri " << ViTriGiaTriX;

	cout << endl << "Mang sau khi sap xep tang dan" << endl;
	//SapXepTangDan(iN, a);
	SapXepTangGiamDan(iN, a, 't');
	XuatMang(iN, a);

	cout << endl << "Mang sau khi them 69 vao vi tri 2 la" << endl;
	Them(iN, a, 2, 69);
	XuatMang(iN, a);

	cout << endl << "Mang sau khi xoa 69 tai vi tri 2 la" << endl;
	Xoa(iN, a, 2);
	XuatMang(iN, a);

	cout << endl << "Tong cac phan trong mang la: " << Tong(iN, a);

	cout << endl << "Tong cac phan trong mang la: " << DemGiaTriChan(iN, a);

	bool bCheck = KiemTraGiaTriKhong(iN, a);
	if (bCheck)
		cout << endl << "Co gia tri 0 trong mang.";
	else
		cout << endl << "Khong co gia tri 0 trong mang.";

	cout << endl;
	system("pause");
	return 0;
}

