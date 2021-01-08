#include <iostream>
#include <ctime> // C++

#define MAX 100

using namespace std;

void NhapMaTran(int iMatrix[][MAX], int iRows, int iCols)
{
	for (int i = 0; i < iRows; ++i)
	{
		for (int j = 0; j < iCols; ++j)
		{
			cout << "Nhap a[ " << i << ", " << j << "] = ";
			cin >> iMatrix[i][j];
		}
	}
}

void TaoMaTranNgauNhien(int iMatrix[][MAX], int iRows, int iCols)
{
	// Random.
	/*
	Muon sinh so ngau nhien trong doan [A, B] tu 1 -> 100.
	=> CT random: rand() % (B + 1 - A) + A <=> A + rand() % (B + 1 - A)
	VD: random tu 1 -> 100 => rand() % (100 + 1 - 1) + 1 = rand() % 101
	random tu 5 -> 99 => rand() % (99 + 1 - 5) + 5 = rand() % 100
	*/
	srand(time(0)); // Reset time.
	for (int i = 0; i < iRows; ++i)
	{
		for (int j = 0; j < iCols; ++j)
		{
			/*cout << "Nhap a[ " << i << ", " << j << "] = ";
			cin >> iMatrix[i][j];*/
			iMatrix[i][j] = rand() % 101;
		}
	}
}

void XuatMaTran(int iMatrix[][MAX], int iRows, int iCols)
{
	for (int i = 0; i < iRows; ++i)
	{
		for (int j = 0; j < iCols; ++j)
		{
			cout << iMatrix[i][j] << " ";
		}
		cout << endl;
	}
}

// Ky thuat dat linh canh. Ham tim gia tri lon nhat trong ma tran so nguyen.
int GiaLonNhatMaTran(int iMatrix[][MAX], int iRows, int iCols)
{
	int iMax = iMatrix[0][0]; // Linh canh nek.
	for (int i = 0; i < iRows; ++i)
	{
		for (int j = 0; j < iCols; ++j)
		{
			if (iMax < iMatrix[i][j])
				iMax = iMatrix[i][j];
		}
	}
	return iMax;
}

// Ky thuat dat co hieu. Ham tim gia tri chan va nho hon 2020 trong ma tran.
bool KiemTraTheoYeuCau(int iMatrix[][MAX], int iRows, int iCols)
{
	//bool bFlag = false; // Co hieu nek. Ban dau mac dinh no la khong co gia tri chan va nho hon 2020.
	for (int i = 0; i < iRows; ++i)
	{
		for (int j = 0; j < iCols; ++j)
		{
			if (!(iMatrix[i][j] % 2) && (iMatrix[i][j] < 2020))
			{
				//bFlag = true; // Bat co hieu len thanh true.
				//break;
				return true;
			}
		}
	}
	return false;
	//return bFlag;
}

int main()
{
	int iRows = 3, iCols = 4;
	int iMatrix[MAX][MAX];

	//NhapMaTran(iMatrix, iRows, iCols);
	TaoMaTranNgauNhien(iMatrix, iRows, iCols);
	cout << "Ma tran sau khi tao ngau nhien:" << endl;
	XuatMaTran(iMatrix, iRows, iCols);

	cout << "Gia tri lon nhat trong ma tran la: " << GiaLonNhatMaTran(iMatrix, iRows, iCols) << endl;

	if (KiemTraTheoYeuCau(iMatrix, iRows, iCols))
		cout << "Co ";
	else
		cout << "Khong co ";

	cout << "gia tri chan va nho hon 2020 trong ma tran";

	cout << endl;
	system("pause");
	return 0;
}

/*
4 xi kiu quan trong can phai nho:
1. Ky thuat duyet mang.
2. Ky thuat them/xoa/sua dong hoac cot trong ma tran.
3. Ky thuat tim kiem.
4. Ky thuat sap xep.
*/

