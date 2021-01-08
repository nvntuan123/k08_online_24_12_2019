#include <iostream>
#include <ctime>

using namespace std;

void MatrixRandomElement(int** iMatrix, int iRows, int iCols)
{
	srand((unsigned int)time(0)); // Reset time.
	for (int i = 0; i < iRows; ++i)
		for (int j = 0; j < iCols; ++j)
		{
			//cout << "Nhap a[" << i << ", " << j << "]: ";
			//cin >> iMatrix[i][j]; // Nhap theo kieu truyen thong.
			//cin >> *(*(iMatrix + i) + j);
			*(*(iMatrix + i) + j) = rand() % 100;
		}
}

void MatrixOutput(int** iMatrix, int iRows, int iCols)
{
	for (int i = 0; i < iRows; ++i)
	{
		for (int j = 0; j < iCols; ++j)
			//cout << iMatrix[i][j] << " "; // Truyen thong.
			cout << *(*(iMatrix + i) + j) << " ";
		cout << endl;
	}
}

int main()
{
	// Cap phat bo nho dong cho ma tran.
	int iRows, iCols;
	iRows = 4, iCols = 5;

	int** iMatrix = new int* [iRows];
	for (int i = 0; i < iRows; ++i)
		iMatrix[i] = new int[iCols];

	if (iMatrix == nullptr)
	{
		cout << "Cap phat bo nho that bai!";
	}
	else
	{
		MatrixRandomElement(iMatrix, iRows, iCols);
		cout << "Ma tran vua tao ngau nhien la:" << endl;
		MatrixOutput(iMatrix, iRows, iCols);

		// Co 3 cach truy xuat phan tu trong ma tran dong.
		cout << "================== 3 cach truy xuat phan tu ==================" << endl;
		cout << "C1: a[1][3] = " << iMatrix[1][3] << endl; // Cach 1.
		cout << "C2: a[1][3] = " << *(iMatrix[1] + 3) << endl; // Cach 2.
		cout << "C3: a[1][3] = " << *(*(iMatrix + 1) + 3) << endl; // Cach 3.
		cout << "==============================================================" << endl;
		cout << "================ Gia tri, dia chi, vung nho ================" << endl;
		cout << "Gia tri cua iMatrix = " << **iMatrix << endl;
		cout << "Dia chi cua iMatrix = " << &iMatrix << endl;
		cout << "Vung nho 1 cua iMatrix = " << iMatrix << endl;
		cout << "Vung nho 2 cua iMatrix = " << *iMatrix << endl;
		cout << "Dia chi cua iMatrix[0] = " << &iMatrix[0] << endl; // &iMatrix[0] = iMatrix
		cout << "Dia chi cua iMatrix[0][0] = " << &iMatrix[0][0] << endl; // *iMatrix
		cout << "==============================================================" << endl;

		// Giai phong bo nho cho ma tran.
		for (int i = 0; i < iRows; ++i)
			delete[] iMatrix[i];
		delete[] iMatrix;
	}
	//MatrixOutput(iMatrix, iRows, iCols);

	cout << endl;
	system("pause");
	return 0;
}

/*
Bai tap ve nha:
1. Them/xoa 1 dong.
2. Them/xoa 1 cot.
Luu y: su dung mang 2 chieu dong nha. Dua nao su dung mang 1 chieu, dua do la con to.
*/
