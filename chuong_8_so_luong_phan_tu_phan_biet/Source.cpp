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
			cout << "Nhap a[" << i << ", " << j << "] = ";
			cin >> iMatrix[i][j];
			//iMatrix[i][j] = rand() % 100;
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

int Count1(int iMatrix[][SLPTn], int iRows, int iCols)
{
	int i, j, iCount = 0;
	for (i = 0; i < (iRows * iCols); ++i) // Chieu thuan
	{
		bool bCheck = false;
		for (j = i - 1; j > -1; --j) // Quay lui. Chieu nghich.
		{
			if (iMatrix[i / iCols][i % iCols] == iMatrix[j / iCols][j % iCols])
			{
				bCheck = true; // Trung.
				break;
			}
		}
		if (!bCheck) // Trung.
			++iCount;
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

	cout << "So luong phan tu phan biet trong ma tran la: " << Count1(iMatrix, iRows, iCols);

	//Count1(iMatrix, iRows, iCols);

	cout << endl;
	system("pause");
	return 0;
}

