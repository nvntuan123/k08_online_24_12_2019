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

void HoanVi(int& a, int& b)
{
	int iTemp = a;
	a = b;
	b = iTemp;
}

/* Cach lam nay la luc moi sinh ra doi. Hay con goi la kiem mu~*/
// Sap xep mang tang dan.
void SapXepTangDan(int* iArr, int* iN) // Chon truc tiep.
{
	for (int i = 0; i < (*iN) - 1; ++i)
	{
		int iMinIndex = i; // Gan vi tri nho nha cho lan lap i.
		for (int j = i + 1; j < (*iN); ++j)
		{
			if (*(iArr + iMinIndex) > *(iArr + j))
				iMinIndex = j; // Cap nhat lai vi tri nho nhat.
		}
		HoanVi(*(iArr + iMinIndex), *(iArr + i));

		// In ra mang sau moi lan doi cho khi tim vi tri min.
		cout << endl << "i = " << i << ": ";
		XuatMang(iArr, iN);
	}
}

// Sap xep mang giam dan.
void SapXepGiamDan(int* iArr, int* iN) // Chon truc tiep.
{
	for (int i = 0; i < (*iN) - 1; ++i)
	{
		int iMinIndex = i; // Gan vi tri nho nha cho lan lap i.
		for (int j = i + 1; j < (*iN); ++j)
		{
			if (*(iArr + iMinIndex) < *(iArr + j))
				iMinIndex = j; // Cap nhat lai vi tri nho nhat.
		}
		HoanVi(*(iArr + iMinIndex), *(iArr + i));

		// In ra mang sau moi lan doi cho khi tim vi tri min.
		cout << endl << "i = " << i << ": ";
		XuatMang(iArr, iN);
	}
}
/* Cach lam nay la luc moi sinh ra doi. Hay con goi la kiem mu~*/

/* Cach nay da day thi. Hay con goi la kiem go~*/
//void SapXepTangGiamDan(int *iArr, int *iN, char cKyTu) // Chon truc tiep.
//{
//	for (int i = 0; i < (*iN) - 1; ++i)
//	{
//		int iMinIndex = i; // Gan vi tri nho nha cho lan lap i.
//		for (int j = i + 1; j < (*iN); ++j)
//		{
//			if (cKyTu == 't' || cKyTu == 'T')
//				if (*(iArr + iMinIndex) > *(iArr + j))
//					iMinIndex = j; // Cap nhat lai vi tri nho nhat.
//			if (cKyTu == 'g' || cKyTu == 'G')
//				if (*(iArr + iMinIndex) < *(iArr + j))
//					iMinIndex = j; // Cap nhat lai vi tri nho nhat.
//		}
//		HoanVi(*(iArr + iMinIndex), *(iArr + i));
//
//		// In ra mang sau moi lan doi cho khi tim vi tri min.
//		cout << endl << "i = " << i << ": ";
//		XuatMang(iArr, iN);
//	}
//}
/* Cach nay da day thi. Hay con goi la kiem go~*/

bool SoSanhLon(int iVar1, int iVar2)
{
	// Cach nay cua em be lam do nha. Kiem mu~.
	/*if (iVar1 > iVar2)
		return true;
	else
		return false;*/

		// Cach nay la sau khi day thi thanh cong. Kiem go~.
		/*if (iVar1 > iVar2)
			return true;
		return false;*/

		// Cach nay la luc da truong thanh. Kiem sat.
	return (iVar1 > iVar2);
}

bool SoSanhNho(int iVar1, int iVar2)
{
	// Cach nay cua em be lam do nha. Kiem mu~.
	/*if (iVar1 < iVar2)
	return true;
	else
	return false;*/

	// Cach nay la sau khi day thi thanh cong. Kiem go~.
	/*if (iVar1 < iVar2)
	return true;
	return false;*/

	// Cach nay la luc da truong thanh. Kiem sat.
	return (iVar1 < iVar2);
}

/* Cach nay da truong thanh. Hay con goi la kiem sat~*/
void SapXepTangGiamDan(int* iArr, int* iN, char cKyTu) // Chon truc tiep.
{
	for (int i = 0; i < (*iN) - 1; ++i)
	{
		int iMinIndex = i; // Gan vi tri nho nha cho lan lap i.
		for (int j = i + 1; j < (*iN); ++j)
		{
			if (cKyTu == 't' || cKyTu == 'T')
				if (SoSanhLon(*(iArr + iMinIndex), *(iArr + j)))
					iMinIndex = j; // Cap nhat lai vi tri nho nhat.
			if (cKyTu == 'g' || cKyTu == 'G')
				if (SoSanhNho(*(iArr + iMinIndex), *(iArr + j)))
					iMinIndex = j; // Cap nhat lai vi tri nho nhat.
		}
		HoanVi(*(iArr + iMinIndex), *(iArr + i));

		// In ra mang sau moi lan doi cho khi tim vi tri min.
		cout << endl << "i = " << i << ": ";
		XuatMang(iArr, iN);
	}
}
/* Cach nay da truong thanh. Hay con goi la kiem sat~*/

int main()
{
	int* iN = new int; // Cap phat vung nho dong cho bien n - tuc la so luong phan tu cua mang 1 chieu dong.
	NhapN(iN);

	// Khai bao mang dong hay con goi la cap phat vung nho cho mang 1 chieu dong.
	int* iArr = new int[(*iN)]; // Cap phat vung nho dong cho mang 1 chieu.

	NhapMang(iArr, iN); // Truyen con tro vao ham.
	cout << endl << "Mang moi nhap vao la:";
	XuatMang(iArr, iN);

	/* Cach lam nay la luc moi sinh ra doi. Hay con goi la kiem mu~*/
	/*SapXepTangDan(iArr, iN);
	cout << endl << "Mang sau khi sap xep tang dan la:";
	XuatMang(iArr, iN);

	SapXepGiamDan(iArr, iN);
	cout << endl << "Mang sau khi sap xep giam dan la:";
	XuatMang(iArr, iN);*/
	/* Cach lam nay la luc moi sinh ra doi. Hay con goi la kiem mu~*/

	/* Cach nay da day thi. Hay con goi la kiem go~*/
	SapXepTangGiamDan(iArr, iN, 't');
	cout << endl << "Mang sau khi sap xep tang dan la:";
	XuatMang(iArr, iN);

	SapXepTangGiamDan(iArr, iN, 'g');
	cout << endl << "Mang sau khi sap xep giam dan la:";
	XuatMang(iArr, iN);
	/* Cach nay da day thi. Hay con goi la kiem go~*/

	delete[] iArr; // Giai phong mang 1 chieu dong.
	delete iN; // Giai phong bien con iN.

	cout << endl;
	system("pause");
	return 0;
}

