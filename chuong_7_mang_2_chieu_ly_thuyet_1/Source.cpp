#include <iostream>

#define MAX 100

using namespace std;

void InputMatrix(int iMatrix[][MAX], int iRows, int iCols)
{

}

int main()
{
	int iArr[MAX]; // Mang 1 chieu tinh.

	// Mang 1 chieu dong.
	int* iArrPtr = new int[MAX];

	delete[] iArrPtr;

	// Mang 2 chieu tinh.
	int iMatrix[MAX][MAX]; // Khai bao.

	//int iMatrix1[3][4] = { 1, 2, 3, 4, 5 }; // Khoi tao day du.
	int iMatrix1[][4] = { {1, 2, 3, 4}, {5, 6, 7, 8} }; // Khoi tao nhu vay moi dung nek.
	int iMatrix2[][3] = { 1, 2, 3, 4, 5 }; // Khoi tao thieu dong.

	// Duyet ma tran.
	for (int i = 0; i < 3; ++i) // Row.
	{
		for (int j = 0; j < 4; ++j) // Col.
			cout << iMatrix1[i][j] << " ";
		cout << endl;
	}

	//InputMatrix(iMatrix1, 3, 4);

	cout << endl;
	system("pause");
	return 0;
}

