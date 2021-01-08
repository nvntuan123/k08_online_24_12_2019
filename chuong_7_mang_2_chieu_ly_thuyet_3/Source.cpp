#include <iostream>

#define MAX 100

using namespace std;

//char* ReturnRow(); // Khuon mau ham.

char* ReturnRow()
{
	return const_cast<char*>("dong");
}

char* ReturnCol()
{
	return const_cast<char*>("cot");
}

void InputRowCol(int& iRowCol, char* (*cPtrRowCol)())//char cKyTu)
{
	do
	{
		/*if (cKyTu == 'r' || cKyTu == 'R')
		{
		cout << "Nhap vao so dong: ";
		}
		if (cKyTu == 'c' || cKyTu == 'C')
		{
		cout << "Nhap vao so cot: ";
		}*/
		cout << "Nhap vao so " << cPtrRowCol() << ": ";
		cin >> iRowCol;

		if (iRowCol <= 0 || iRowCol > 100)
		{
			system("pause");
			cout << "Nhap sai, vui long nhap lai!(Dong, cot nam trong khoang[1, 100])" << endl;
		}
	} while (iRowCol <= 0 || iRowCol > 100);
}

template <class Var> // Khuon mau ham.
void InputMatrix(Var iMatrix[][MAX], int iRows, int iCols)
{
	// Duyet ma tran voi 2 vong lap for.
	/*for (int i = 0; i < iRows; ++i)
	{
		for (int j = 0; j < iCols; ++j)
		{
			cout << "Nhap a[" << i << ", " << j << "]: ";
			cin >> iMatrix[i][j];
		}
	}*/

	// Duyet ma tran voi 1 vong lap for.
	for (int i = 0; i < iRows * iCols; ++i)
	{
		cout << "Nhap a[" << i / iCols << ", " << i % iCols << "]: ";
		cin >> iMatrix[i / iCols][i % iCols];
	}
}

template <class Var> // Khuon mau ham.
void OutputMatrix(Var iMatrix[][MAX], int iRows, int iCols)
{
	for (int i = 0; i < iRows; ++i)
	{
		cout << "Dong " << i << ": ";
		for (int j = 0; j < iCols; ++j)
		{
			cout << iMatrix[i][j] << " ";
		}
		cout << endl;
	}
}

// Sum element matrix
template <class Var> // Khuon mau ham.
Var MatrixSum(Var vMatrix[][MAX], int iRows, int iCols)
{
	Var vSum = 0;
	// Duyet ma tran voi 2 vong lap for.
	/*for (int i = 0; i < iRows; ++i)
	{
		for (int j = 0; j < iCols; ++j)
		{
			vSum += vMatrix[i][j];
		}
	}*/

	// Duyet ma tran voi 1 vong lap for.
	for (int i = 0; i < iRows * iCols; ++i)
	{
		vSum += vMatrix[i / iCols][i % iCols];
	}
	return vSum;
}

template <class Var> // Khuon mau ham.
void MatrixDeleteCol(Var vMatrix[][MAX], int iRows, int& iCols, int DeleteIndex)
{
	for (int i = 0; i < iRows; ++i)
	{
		for (int j = DeleteIndex + 1; j < iCols; ++j)
			vMatrix[i][j - 1] = vMatrix[i][j];
	}
	--iCols;
}

template <class Var> // Khuon mau ham.
void MatrixAddCol(Var vMatrix[][MAX], int iRows, int& iCols, int AddIndex, int iColsAdd[])
{
	for (int i = 0; i < iRows; ++i)
	{
		for (int j = iCols - 1; j >= AddIndex; --j)
			vMatrix[i][j + 1] = vMatrix[i][j];
	}

	for (int i = 0; i < iRows; ++i)
		vMatrix[i][AddIndex] = iColsAdd[i];
	++iCols;
}

int main()
{
	int iRows, iCols;
	InputRowCol(iRows, ReturnRow);
	InputRowCol(iCols, ReturnCol);

	int Matrix[MAX][MAX];
	InputMatrix(Matrix, iRows, iCols);
	cout << "Ma tran sau khi nhap vao la:" << endl;
	OutputMatrix(Matrix, iRows, iCols);

	cout << "Tong cac gia tri trong ma tran la: " << MatrixSum(Matrix, iRows, iCols) << endl;

	/*MatrixDeleteCol(Matrix, iRows, iCols, 1);
	cout << "\nMa tran sau khi xoa cot 1 la:" << endl;
	OutputMatrix(Matrix, iRows, iCols);*/

	int iArrCols[] = { 69, 69, 69 };
	MatrixAddCol(Matrix, iRows, iCols, 1, iArrCols);
	cout << "\nMa tran sau khi them so 69 vao cot 1 la:" << endl;
	OutputMatrix(Matrix, iRows, iCols);

	cout << endl;
	system("pause");
	return 0;
}

/*
Bai tap ve nha: la lam cach 2 ve them cot va xot. Tuc la lam cai cach giong them dong va xoa chu khong lam cach tu y tuong them xoa mang 1 chieu nua.
Luu y: hoanvicot => quan trong.
*/

