#include <iostream>
#include <ctime>

using namespace std;

#define SLPTm 50
#define SLPTn 100

void InputMatrix(int iMatrix[][SLPTn], int iRows, int iCols)
{
	srand((unsigned int)time(0));
	for (int i = 0; i < iRows; i++)
	{
		for (int j = 0; j < iCols; j++)
		{
			//cout << "Nhap a[" << i << ", " << j << "] = ";
			//cin >> iMatrix[i][j];
			iMatrix[i][j] = rand() % 100;
		}
	}
}

void OutputMatrix(int iMatrix[][SLPTn], int iRows, int iCols)
{
	for (int i = 0; i < iRows; i++)
	{
		for (int j = 0; j < iCols; j++)
		{
			cout << iMatrix[i][j] << " ";
		}
		cout << endl;
	}
}

int Enumerate_maximum(int iMatrix[][SLPTn], int iRows, int iCols)
{
	unsigned int iCount = 0; // So luong phan tu cuc tri.
	int i, j, k;
	for (i = 0; i < iRows; i++)
	{
		for (j = 0; j < iCols; j++)
		{
			int iMax, iMin;
			iMax = INT_MIN;
			iMin = INT_MAX;
			/*
			Luu y:
			Bien tren: i != -1 => i >= 0 thi moi xet.
			Bien duoi: i != iRows => i < iRows thi moi xet.
			Bien trai: j != -1 => j >= 0 thi moi xet.
			Bien phai: j != iCols => j < iCols thi moi xet.
			*/
			// Xet tren: iMatrix[i - 1][j].
			if (i - 1 >= 0)
			{
				for (k = j - 1; k <= j + 1; ++k)
				{
					if (k >= 0 && k < iCols)
					{
						if (iMatrix[i - 1][k] > iMax)
							iMax = iMatrix[i - 1][k];

						if (iMatrix[i - 1][k] < iMin)
							iMin = iMatrix[i - 1][k];
					}
				}
			}

			// Xet duoi: iMatrix[i + 1][j].
			if (i + 1 < iRows)
			{
				for (k = j - 1; k <= j + 1; ++k)
				{
					if (k >= 0 && k < iCols)
					{
						if (iMatrix[i + 1][k] > iMax)
							iMax = iMatrix[i + 1][k];

						if (iMatrix[i + 1][k] < iMin)
							iMin = iMatrix[i + 1][k];
					}
				}
			}

			// Xet trai: iMatrix[i][j - 1].
			if (j - 1 >= 0)
			{
				if (iMatrix[i][j - 1] > iMax)
					iMax = iMatrix[i][j - 1];

				if (iMatrix[i][j - 1] < iMin)
					iMin = iMatrix[i][j - 1];
			}

			// Xet phai: iMatrix[i][j + 1].
			if (j + 1 < iCols)
			{
				if (iMatrix[i][j + 1] > iMax)
					iMax = iMatrix[i][j + 1];

				if (iMatrix[i][j + 1] < iMin)
					iMin = iMatrix[i][j + 1];
			}

			if (iMatrix[i][j] > iMax || iMatrix[i][j] < iMin)
				++iCount;
		}
	}
	return iCount;
}

int main()
{
	int iRows, iCols;

	do
	{
		cout << "Nhap so dong: ";
		cin >> iRows;

		if (iRows < 1 || iRows > SLPTm)
		{
			printf("Nhap sai, nhap lai! Co it nhat 1 dong va toi da 50 dong!\n");
		}
	} while (iRows < 1 || iRows > SLPTm);

	do
	{
		cout << "Nhap so cot: ";
		cin >> iCols;

		if (iCols < 1 || iCols > SLPTn)
		{
			printf("Nhap sai, nhap lai! Co it nhat 1 cot va toi da 100 cot!\n");
		}
	} while (iCols < 1 || iCols > SLPTn);

	int iMatrix[SLPTm][SLPTn];
	InputMatrix(iMatrix, iRows, iCols);
	cout << "Ma tran vua moi nhap vao la: " << endl;
	OutputMatrix(iMatrix, iRows, iCols);

	cout << endl;
	cout << "So luong phan tu cuc tri trong ma la: " << Enumerate_maximum(iMatrix, iRows, iCols);

	cout << endl;
	system("pause");
	return 0;
}

