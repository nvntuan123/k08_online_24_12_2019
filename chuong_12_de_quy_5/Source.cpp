// Đệ quy - mảng 2 chiều: nhập/xuất.

#include <iostream>

using namespace std;

void _matrixInput(int** _IMatrix, int _IRows, int _ICols, int _II = 0);
void _matrixOutput(int** _IMatrix, int _IRows, int _ICols, int _II = 0);
int _matrixSumElement(int**, int, int, int = 0, int = 0);

int main()
{
	int _IRows = 2;
	int _ICols = 3;

	int** _IMatrix = new int* [_IRows];
	for (size_t i = 0; i < _IRows; i++)
	{
		_IMatrix[i] = new int[_ICols];
	}
	_matrixInput(_IMatrix, _IRows, _ICols);
	_matrixOutput(_IMatrix, _IRows, _ICols);

	cout << "Sum element of matrix: " << _matrixSumElement(_IMatrix, _IRows, _ICols) << endl;

	for (size_t i = 0; i < _IRows; i++)
	{
		delete[] _IMatrix[i];
	}
	delete[] _IMatrix;

	system("pause");
	return 0;
}

void _matrixInput(int** _IMatrix, int _IRows, int _ICols, int _II)
{
	// Điều kiện dừng.
	if (_II == (_IRows * _ICols))
		return;

	// Bước lặp: công thức đệ quy.
	cout << "Nhap a[" << _II / _ICols << ", " << _II % _ICols << "] = ";
	cin >> _IMatrix[_II / _ICols][_II % _ICols];
	_matrixInput(_IMatrix, _IRows, _ICols, _II + 1);
}

void _matrixOutput(int** _IMatrix, int _IRows, int _ICols, int _II)
{
	// Điều kiện dừng.
	if (_II == (_IRows * _ICols))
		return;

	// Bước lặp: công thức đệ quy.
	cout << _IMatrix[_II / _ICols][_II % _ICols] << " ";
	if (!((_II + 1) % _ICols))
	{
		cout << endl;
	}
	_matrixOutput(_IMatrix, _IRows, _ICols, _II + 1);
}

int _matrixSumElement(int** _IMatrix, int _IRows, int _ICols, int _II, int _ISum)
{
	// Điều kiện dừng.
	if (_II == (_IRows * _ICols))
		return _ISum;

	// Bước lặp: công thức đệ quy.
	_matrixSumElement(_IMatrix, _IRows, _ICols, _II + 1, _ISum + _IMatrix[_II / _ICols][_II % _ICols]);
}

