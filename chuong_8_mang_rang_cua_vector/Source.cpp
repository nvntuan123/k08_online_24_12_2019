// Nhap mang rang cua su dung vector.

#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

typedef vector<vector<int>> VTI_M; // Kieu du lieu vector Matrix.
typedef vector<int> VTI_Arr; // Kieu du lieu vector Array.
typedef const short CS_I;
typedef unsigned short US_I;

// Ham nhap mang rang su dung vector.
void Matrix_Input(VTI_M& Matrix, CS_I Rows, VTI_Arr& Cols)
{
	US_I i, j;
	for (i = 0; i < Rows; ++i)
	{
		// Nhap so luong phan tu cho dong thu i.
		cout << "Nhap vao so luong phan tu cho dong " << i << ": ";
		cin >> Cols[i];

		// Cap phat bo nho cho dong de luu gia tri cua moi cot.
		Matrix[i].resize(Cols[i]);
		for (j = 0; j < Cols[i]; ++j)
		{
			cout << "Nhap a[" << i << ", " << j << "] = ";
			cin >> Matrix[i][j];
		}
	}
}

// Ham xuat mang rang cua su dung vector.
//void Matrix_Output(const VTI_M Matrix, CS_I Rows, const VTI_Arr Cols)
//{
//	US_I i, j;
//	for (i = 0; i < Rows; ++i)
//	{
//		for (j = 0; j < Cols[i]; ++j)
//			cout << setw(7) << Matrix[i][j];
//		cout << endl;
//	}
//}

void Matrix_Output(const VTI_M Matrix)
{
	short Rows = Matrix.size();
	US_I i, j;
	for (i = 0; i < Rows; ++i)
	{
		short Cols = Matrix[i].size();
		for (j = 0; j < Cols; ++j)
			cout << setw(7) << Matrix[i][j];
		cout << endl;
	}
}

int main()
{
	// Khai bao Rows, Cols.
	short sRows;
	sRows = 3;
	VTI_Arr Cols;
	Cols.resize(sRows); // Cap phat bo nho cho cot kieu arr.

	VTI_M Matrix;
	Matrix.resize(sRows);

	Matrix_Input(Matrix, sRows, Cols);
	cout << "Mang rang cua vua nhap vao la." << endl;
	//Matrix_Output(Matrix, sRows, Cols);
	Matrix_Output(Matrix);

	system("pause");
	return 0;
}

