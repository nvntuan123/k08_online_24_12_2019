#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

typedef vector<vector<int>> VTI_M;
typedef const short CS_I;
typedef unsigned short US_I;

void matrixInput(VTI_M& iMatrix, CS_I Rows, CS_I Cols)
{
	US_I i, j;
	for (i = 0; i < Rows; ++i)
		for (j = 0; j < Cols; ++j)
		{
			cout << "Nhap a[" << i << ", " << j << "] = ";
			//cin >> iMatrix[i][j];
			cin >> iMatrix.at(i).at(j);
		}
}

void matrixOutput(const VTI_M& iMatrix)
{
	US_I Rows, Cols;
	Rows = iMatrix.size();
	Cols = iMatrix[0].size();

	US_I i, j;
	for (i = 0; i < Rows; ++i)
	{
		for (j = 0; j < Cols; ++j)
			cout << setw(7) << iMatrix[i][j];
		cout << endl;
	}
}

int main()
{
	short sRows, sCols;
	sRows = 2;
	sCols = 3;

	VTI_M iMatrix;
	// Cap phat bo nho cho mang 2 chieu.
	iMatrix.resize(sRows);
	for (US_I i = 0; i < sRows; ++i)
		iMatrix[i].resize(sCols);

	matrixInput(iMatrix, sRows, sCols);
	cout << "Ma tran vua nhap vao la: " << endl;
	matrixOutput(iMatrix);

	cout << endl;
	system("pause");
	return 0;
}

