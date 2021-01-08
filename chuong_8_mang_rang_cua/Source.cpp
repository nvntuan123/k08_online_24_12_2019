#include <iostream>
#include <ctime>

using namespace std;

void SerratedArrayRandomElement(int** iMatrix, int iRows, int* iCols)
{
	srand((unsigned int)time(0)); // Reset time.
	for (int i = 0; i < iRows; ++i)
		for (int j = 0; j < (*(iCols + i)); ++j)
		{
			//cout << "Nhap a[" << i << ", " << j << "]: ";
			//cin >> iMatrix[i][j]; // Nhap theo kieu truyen thong.
			//cin >> *(*(iMatrix + i) + j);
			*(*(iMatrix + i) + j) = rand() % 100;
		}
}

void SerratedArrayOutput(int** iMatrix, int iRows, int* iCols)
{
	for (int i = 0; i < iRows; ++i)
	{
		for (int j = 0; j < (*(iCols + i)); ++j)
			//cout << iMatrix[i][j] << " "; // Truyen thong.
			cout << *(*(iMatrix + i) + j) << " ";
		cout << endl;
	}
}

int main()
{
	// Cap bo nho cho mang rang cua.
	int iRows = 10;
	int* iCols = new int[iRows]; // Mang 1 chieu luu cac so luong phan tu cua cot.

	int** iMatrix = new int* [iRows];
	for (int i = 0; i < iRows; ++i)
	{
		cout << "Nhap vao so luong phan cua dong " << i << ": ";
		cin >> *(iCols + i);
		iMatrix[i] = new int[*(iCols + i)];
	}

	SerratedArrayRandomElement(iMatrix, iRows, iCols);
	cout << "Mang rang cua vua tao ngau nhien la: " << endl;
	SerratedArrayOutput(iMatrix, iRows, iCols);

	for (int i = 0; i < iRows; ++i)
		delete[] iMatrix[i];
	delete[] iMatrix;
	delete[] iCols;
	int iCols1 = 5;

	cout << endl;
	system("pause");
	return 0;
}

