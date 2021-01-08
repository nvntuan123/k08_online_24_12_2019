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
	for (int i = 0; i < iRows; ++i)
	{
		for (int j = 0; j < iCols; ++j)
		{
			cout << "Nhap a[" << i << ", " << j << "]: ";
			cin >> iMatrix[i][j];
		}
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
	// Duyet ma tran.
	Var vSum = 0;
	for (int i = 0; i < iRows; ++i)
	{
		for (int j = 0; j < iCols; ++j)
		{
			vSum += vMatrix[i][j];
		}
	}
	return vSum;
}

template <class Var> // Khuon mau ham.
void ElementSwap(Var& vElement1, Var& vElement2)
{
	Var vTemp = vElement1;
	vElement1 = vElement2;
	vElement2 = vTemp;
}

template <class Var> // Khuon mau ham.
void RowSwap(Var vMatrix[][MAX], int iCols, int iRow1, int iRow2)
{
	for (int j = 0; j < iCols; ++j)
	{
		ElementSwap(vMatrix[iRow1][j], vMatrix[iRow2][j]);
	}
}

template <class Var> // Khuon mau ham.
void DeleteRow(Var vMatrix, int& iRows, int iCols, int DeleteIndex)
{
	for (int i = DeleteIndex; i < iRows - 1; ++i)
	{
		RowSwap(vMatrix, iCols, i, i + 1);
	}
	--iRows;
}

// Them 4 so 69 vao ma tran co 3 dong 4 cot vao vi tri 1.
template <class Var> // Khuon mau ham.
void AddRow(Var vMatrix[][MAX], int& iRows, int iCols, Var iRowAdd[], int iAddIndex)
{
	++iRows; // Row = 3 => 0, 1, 2. Luc sau tang len 1 don vi Row = 4 => 0, 1, 2, 3. vMatrix[Row - 1] <=> vMatrix[4 - 1] <=> vMatrix[3]
	for (int j = 0; j < iCols; ++j)
	{
		vMatrix[iRows - 1][j] = iRowAdd[j];
	}

	for (int i = iRows - 1; i > iAddIndex; --i)
	{
		RowSwap(vMatrix, iCols, i, i - 1);
	}
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

	/*RowSwap(Matrix, iCols, 0, 1);
	cout << "Ma tran sau khi hoan vi dong 0 va 1 la:" << endl;
	OutputMatrix(Matrix, iRows, iCols);*/

	/*DeleteRow(Matrix, iRows, iCols, 1);
	cout << "Ma tran sau khi xoa dong 1 la:" << endl;
	OutputMatrix(Matrix, iRows, iCols);*/

	// Them 4 so 69 vao ma tran co 3 dong 4 cot vao vi tri 1.
	int iArr[] = { 69, 69, 69, 69 };

	AddRow(Matrix, iRows, iCols, iArr, 1);
	cout << "Ma tran sau khi them 4 so 69 vao vi tri 1 la:" << endl;
	OutputMatrix(Matrix, iRows, iCols);

	cout << endl;
	system("pause");
	return 0;
}

//char* ReturnRow()
//{
//	return "dong";
//}

/*
Bai tap ve nha la
Bai 1: Lam them/xoa 1 cot tai vi tri bat ky nam trong ma tran.
Bai 2: Liet ke cac gia tri yen ngua. Phan tu duoc goi la yen ngua khi no lon nhat tren dong va nho nhat tren cot.
*/

