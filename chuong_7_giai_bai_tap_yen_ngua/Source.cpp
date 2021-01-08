#include <iostream>
#include <ctime> // C++
//#include <time.h> // C

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

bool KiemTraYenNgua(int iMatrix[][MAX], int iRows, int iCols, int iRowIndex, int iColIndex)
{
	// B1: Kiem xem co lon nhat tren dong hay khong.
	for (int j = 0; j < iCols; ++j)
	{
		if (iMatrix[iRowIndex][iColIndex] < iMatrix[iRowIndex][j])
			return false;
	}

	// B2: Kiem xem co nho nhat tren cot hay khong.
	for (int i = 0; i < iRows; ++i)
	{
		if (iMatrix[iRowIndex][iColIndex] > iMatrix[i][iColIndex])
			return false;
	}

	return true;
}

void LietKeYenNgua(int iMatrix[][MAX], int iRows, int iCols)
{
	int iMangYenNgua[MAX];
	int iNMYN = 0;
	//bool bCheck = false; // Mac dinh khong co gia tri yen ngua trong ma tran.
	for (int i = 0; i < iRows; ++i)
	{
		for (int j = 0; j < iCols; ++j)
		{
			if (KiemTraYenNgua(iMatrix, iRows, iCols, i, j))
			{
				//cout << iMatrix[i][j] << " ";
				//bCheck = true; // Co gia tri yen ngua trong ma tran.
				iMangYenNgua[iNMYN++] = iMatrix[i][j];
			}
		}
	}

	if (!iNMYN)
		cout << "Ma tran khong co gia tri yen ngua.";
	else
	{
		cout << "Nhung gia tri yen ngua trong ma tran: ";
		for (int i = 0; i < iNMYN; ++i)
			cout << iMangYenNgua[i] << " ";
	}
}

int main()
{
	int iRows = 3, iCols = 4;
	int iMatrix[MAX][MAX];

	//NhapMaTran(iMatrix, iRows, iCols);
	TaoMaTranNgauNhien(iMatrix, iRows, iCols);
	cout << "Ma tran sau khi tao ngau nhien:" << endl;
	XuatMaTran(iMatrix, iRows, iCols);

	LietKeYenNgua(iMatrix, iRows, iCols);

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
