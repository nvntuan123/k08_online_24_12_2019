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
			iMatrix[i][j] = rand() % 100 + 1;
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

// Sap xep mang 2 chieu tang dan tu tren xuong duoi va tu trai qua phai.
void SapXepTheoYeuCau(int iMatrix[][MAX], int iRows, int iCols)
{
	// Cach 1: Dung mang phu.
	//// B1: Chuyen mang 2 chieu ve mang 1 chieu.
	//int iArr[MAX * MAX];
	//int iLengthArr = 0;
	//for (int i = 0; i < iRows; ++i)
	//	for (int j = 0; j < iCols; ++j)
	//		iArr[iLengthArr++] = iMatrix[i][j];

	//// B2: Sap xep mang tang dan tren mang 1 chieu vua chuyen ve.
	//for (int i = 0; i < (iLengthArr - 1); ++i)
	//	for (int j = i + 1; j < iLengthArr; ++j)
	//	{
	//		if (iArr[i] > iArr[j])
	//			swap(iArr[i], iArr[j]);
	//	}

	//// B3: Chuyen mang 1 chieu ve lai mang 2 chieu.
	//iLengthArr = 0; // Reset lai bien n cua mang 1 chieu.
	//for (int i = 0; i < iRows; ++i)
	//	for (int j = 0; j < iCols; ++j)
	//		iMatrix[i][j] = iArr[iLengthArr++];

	// Cach 2: Khong dung mang phu.
	for (int i = 0; i < (iRows * iCols); ++i)
		for (int j = i + 1; j < (iRows * iCols); ++j)
		{
			if (iMatrix[i / iCols][i % iCols] > iMatrix[j / iCols][j % iCols])
				swap(iMatrix[i / iCols][i % iCols], iMatrix[j / iCols][j % iCols]);
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

	cout << "Ma tran sau khi sap xep theo yeu cau la:" << endl;
	SapXepTheoYeuCau(iMatrix, iRows, iCols);
	XuatMaTran(iMatrix, iRows, iCols);

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

