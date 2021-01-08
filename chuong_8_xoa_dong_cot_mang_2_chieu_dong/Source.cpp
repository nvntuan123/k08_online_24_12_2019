#include <iostream>
#include <ctime>

using namespace std;

typedef const short CONS;
typedef unsigned short UNS;

void matrixRandom(short** sMatrix, CONS Rows, CONS Cols)
{
	srand(time(NULL));
	UNS i, j;
	for (i = 0; i < Rows; ++i)
		for (j = 0; j < Cols; ++j)
			sMatrix[i][j] = rand() % 8 + 1;
}

void matrixOutput(short** sMatrix, CONS Rows, CONS Cols)
{
	UNS i, j;
	for (i = 0; i < Rows; ++i)
	{
		for (j = 0; j < Cols; ++j)
			cout << sMatrix[i][j] << " ";
		cout << endl;
	}
}

void matrixAllocation(short**& sMatrix, CONS Rows, CONS Cols)
{
	sMatrix = new short* [Rows];
	for (UNS i = 0; i < Rows; ++i)
		sMatrix[i] = new short[Cols];
}

void matrixFree(short**& sMatrix, CONS Rows, CONS Cols)
{
	for (UNS i = 0; i < Rows; ++i)
		delete[] sMatrix[i];
	delete[] sMatrix;
}

void matrixCopyData(short** sMatrixSource, short** sMatrixDest, CONS Rows, CONS Cols)
{
	//UNS i, j;
	for (int i = 0; i < Rows; ++i)
		for (int j = 0; j < Cols; ++j)
			sMatrixDest[i][j] = sMatrixSource[i][j];
}

// Thay doi kich thuoc ma tran.
void matrixREADLOC(short**& sMatrix, CONS OldSizeRows, CONS OldSizeCols, CONS NewSize, bool bCheck = false) // bCheck if false => Cols.
{
	// B1: Tao mang tam va do du lieu tu mang chinh sang mang tam.
	short** _sMatrixTemp;
	matrixAllocation(_sMatrixTemp, OldSizeRows, OldSizeCols);
	matrixCopyData(sMatrix, _sMatrixTemp, OldSizeRows, OldSizeCols);

	// B2: Giai phong vung nho cua ma tran va cap phat vung nho moi cho ma tran.
	matrixFree(sMatrix, OldSizeRows, OldSizeCols); // Giai phong
	// Cap phat vung nho moi.
	if (bCheck) // Row
		matrixAllocation(sMatrix, NewSize, OldSizeCols);
	else
		matrixAllocation(sMatrix, OldSizeRows, NewSize);

	// Cap phat vung nho moi.

	// B3: Do du lieu tu mang tam sang ma tran.
	/*
	Co 2 truong hop o buoc 3.
	TH1: Thao tac voi row => tim min cua row thoi khong can tim min size cua col.
	TH2: Thao tac voi col => tim min cua col thoi khong can tim min size cua row.
	*/
	// Cach 1:
	//UNS iMinSizeRows, iMinSizeCol;
	//iMinSizeRows = (NewSize < OldSizeRows ? NewSize : OldSizeRows);
	//iMinSizeCol = (NewSize < OldSizeCols ? NewSize : OldSizeCols);
	//matrixCopyData(_sMatrixTemp, sMatrix, iMinSizeRows, iMinSizeCol);

	// Cach 2:
	matrixCopyData(_sMatrixTemp, // Ma tran tam.
		sMatrix, // Ma tran chinh.
		(bCheck ? (NewSize < OldSizeRows ? NewSize : OldSizeRows) : OldSizeRows), // => minsize cua row.
		(bCheck ? OldSizeCols : (NewSize < OldSizeCols ? NewSize : OldSizeCols)) // => minsize cua col.
	);

	// B4: Giai phong mang tam.
	matrixFree(_sMatrixTemp, OldSizeRows, OldSizeCols);
}

void matrixRowAdd(short**& sMatrix, short& sRows, CONS Cols, CONS RowInsertIndex, short* ArrRowAdd)
{
	matrixREADLOC(sMatrix, sRows, Cols, sRows + 1, true);
	UNS i, j;
	for (i = sRows - 1; i >= RowInsertIndex; --i)
		for (j = 0; j < Cols; ++j)
			sMatrix[i + 1][j] = sMatrix[i][j];

	for (j = 0; j < Cols; ++j)
		sMatrix[RowInsertIndex][j] = ArrRowAdd[j];

	++sRows;
}

void matrixRowDelete(short**& sMatrix, short& sRows, CONS Cols, CONS RowDeleteIndex)
{
	UNS i, j;
	for (i = RowDeleteIndex + 1; i < sRows; ++i)
		for (j = 0; j < Cols; ++j)
			sMatrix[i - 1][j] = sMatrix[i][j];

	matrixREADLOC(sMatrix, sRows, Cols, sRows--, true);
}

void matrixColAdd(short**& sMatrix, CONS Rows, short& sCols, CONS ColInsertIndex, short* ArrColAdd)
{
	matrixREADLOC(sMatrix, Rows, sCols, sCols + 1, false);
	UNS i, j;
	for (j = sCols - 1; j >= ColInsertIndex; --j)
		for (i = 0; i < Rows; ++i)
			sMatrix[i][j + 1] = sMatrix[i][j];

	for (i = 0; i < Rows; ++i)
		sMatrix[i][ColInsertIndex] = ArrColAdd[i];

	++sCols;
}

void matrixColDelete(short**& sMatrix, CONS Rows, short& sCols, CONS ColDeleteIndex)
{
	UNS i, j;
	for (j = ColDeleteIndex + 1; j < sCols; ++j)
		for (i = 0; i < Rows; ++i)
			sMatrix[i][j - 1] = sMatrix[i][j];

	matrixREADLOC(sMatrix, Rows, sCols, sCols--, false);
}

void ArrayRandom(short* iArr, CONS iN)
{
	srand(time(NULL));
	for (UNS i = 0; i < iN; ++i)
		iArr[i] = rand() % 14 + 5;
}

int main()
{
	/*
	1.Input.
	2.Xu ly.
	3.Output.
	*/
	/*int iLengthArr = 5;
	int *iArr = new int[iLengthArr];
	delete[] iArr;*/

	short sRows, sCols;
	sRows = 3, sCols = 5;
	short** sMatrix;
	matrixAllocation(sMatrix, sRows, sCols);

	matrixRandom(sMatrix, sRows, sCols);
	cout << "Ma tran vua tao ngau la: " << endl;
	matrixOutput(sMatrix, sRows, sCols);

	// Them 1 dong vao vi tri 1.
	short* sRowAdd = new short[sCols];
	ArrayRandom(sRowAdd, sCols);
	matrixRowAdd(sMatrix, sRows, sCols, 1, sRowAdd);
	cout << "Ma tran vua them 1 dong vao vi tri 1 la: " << endl;
	matrixOutput(sMatrix, sRows, sCols);
	delete[] sRowAdd;

	//// Xoa dong 1.
	matrixRowDelete(sMatrix, sRows, sCols, 2);
	cout << "Ma tran vua xoa dong tai vi tri 1 la: " << endl;
	matrixOutput(sMatrix, sRows, sCols);

	// Them 1 dong vao vi tri 1.
	//short *sColAdd = new short[sCols];
	//short sColAdd[] = { 69, 69, 69, 69 };
	//ArrayRandom(sColAdd, sCols);
	/*matrixColAdd(sMatrix, sRows, sCols, 1, sColAdd);
	cout << "Ma tran vua them 1 cot vao vi tri 1 la: " << endl;
	matrixOutput(sMatrix, sRows, sCols);*/
	//delete[] sColAdd;

	// Xoa dong 1.
	/*matrixColDelete(sMatrix, sRows, sCols, 2);
	cout << "Ma tran vua xoa cot tai vi tri 1 la: " << endl;
	matrixOutput(sMatrix, sRows, sCols);*/

	matrixFree(sMatrix, sRows, sCols); // Giai phong.

	cout << endl;
	system("pause");
	return 0;
}

