#include <iostream>
#include <ctime>

#define MAX 100

using namespace std;

void NhapDongCot(int& iDongCot)//char cKyTu)
{
	do
	{
		cout << "Nhap vao so dong va cot: ";
		cin >> iDongCot;

		if (iDongCot <= 0 || iDongCot > 100)
		{
			system("pause");
			cout << "Nhap sai, vui long nhap lai!(Dong, cot nam trong khoang[1, 100])" << endl;
		}
	} while (iDongCot <= 0 || iDongCot > 100);
}

void TaoMaTranNgauNhien(int iMaTran[][MAX], int iDongCot)
{
	srand(time(0)); // Reset time.
	for (int i = 0; i < (iDongCot * iDongCot); ++i)
		iMaTran[i / iDongCot][i % iDongCot] = rand() % 100 + 1;;
}

// Ham nhap ma tran vuong.
void NhapMaTranVuong(int iMaTran[MAX][MAX], int iDongCot)
{
	// Cach 1: duyet 2 vong lap
	/*for (int i = 0; i < iDongCot; ++i)
	{
		for (int j = 0; j < iDongCot; ++j)
		{
			cout << "Nhap a[" << i << ", " << j << "]: ";
			cin >> iMaTran[i][j];
		}
	}*/

	for (int i = 0; i < (iDongCot * iDongCot); ++i)
	{
		cout << "Nhap a[" << i / iDongCot << ", " << i % iDongCot << "]: ";
		cin >> iMaTran[i / iDongCot][i % iDongCot];
	}
}

// Ham xuat ma tran vuong.
void XuatMaTranVuong(int iMaTran[MAX][MAX], int iDongCot)
{
	// Cach 1: duyet 2 vong lap
	/*for (int i = 0; i < iDongCot; ++i)
	{
		for (int j = 0; j < iDongCot; ++j)
		{
			cout << iMaTran[i][j] << " ";
		}
		cout << endl;
	}*/
	for (int i = 0; i < (iDongCot * iDongCot); ++i)
	{
		cout << iMaTran[i / iDongCot][i % iDongCot] << " ";
		/*
		1   2   3
		4   5   6
		7   8   9
		*/
		if (!((i + 1) % iDongCot))
			cout << endl;
	}
}

void LienKePhanTuCheoChinh(int iMaTran[][MAX], int iDongCot)
{
	cout << "Cac phan tu tren duong cheo chinh la: ";
	for (int i = 0; i < iDongCot; ++i)
	{
		cout << iMaTran[i][i] << " ";
	}
}

void LienKePhanTuCheoPhu(int iMaTran[][MAX], int iDongCot)
{
	cout << "Cac phan tu tren duong cheo phu la: ";
	for (int i = 0; i < iDongCot; ++i)
	{
		cout << iMaTran[i][iDongCot - 1 - i] << " ";
	}
}

void LietKeTamGiacTrenCheoChinh(int iMaTran[][MAX], int iDongCot)
{
	cout << "Tam giac tren duong cheo chinh la:" << endl;
	for (int i = 0; i < (iDongCot - 1); ++i)
	{
		for (int j = i + 1; j < iDongCot; ++j)
			cout << iMaTran[i][j] << " ";
		cout << endl;
	}
}

void LietKeTamGiacDuoiCheoChinh(int iMaTran[][MAX], int iDongCot)
{
	cout << "Tam giac duoi duong cheo chinh la:";
	for (int i = 0; i < iDongCot; ++i)
	{
		for (int j = 0; j < i; ++j)
			cout << iMaTran[i][j] << " ";
		cout << endl;
	}
}

int main()
{
	int iDongCot;
	NhapDongCot(iDongCot);

	int iMaTran[MAX][MAX];
	TaoMaTranNgauNhien(iMaTran, iDongCot);
	cout << "Ma tran vuong vua nhap vao la: " << endl;
	XuatMaTranVuong(iMaTran, iDongCot);

	LienKePhanTuCheoChinh(iMaTran, iDongCot);
	cout << endl;
	LienKePhanTuCheoPhu(iMaTran, iDongCot);
	cout << endl;
	LietKeTamGiacTrenCheoChinh(iMaTran, iDongCot);
	LietKeTamGiacDuoiCheoChinh(iMaTran, iDongCot);

	cout << endl;
	system("pause");
	return 0;
}

/*
Bai tap ve nha: liet ke cac phan tu cua tam giac tren, duoi theo duong cheo phu(khong tinh duong cheo phu).
*/
