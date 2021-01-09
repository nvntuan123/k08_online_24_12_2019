// Đệ quy - mảng 1 chiều: nhập/xuất.

#include <iostream>

using namespace std;

void _arrayInputKhuDeQuy(int* _IArr, int _IN);
void _arrayOutputKhuDeQuy(int* _IArr, int _IN);

void _arrayInputDeQuy(int* _IArr, int _IN, int _II = 0);
void _arrayOutputDeQuy(int* _IArr, int _IN, int _II = 0);
void _arrayInputDeQuy1(int* _IArr, int _IN);
void _arrayOutputDeQuy1(int* _IArr, int _IN);
int _arraySumElement(int* _IArr, int _IN, int _ISum = 0);

int main()
{
	int _IArr[100];
	int _IN = 5;
	//_arrayInputKhuDeQuy(_IArr, _IN);
	//_arrayOutputKhuDeQuy(_IArr, _IN);

	_arrayInputDeQuy1(_IArr, _IN);
	_arrayOutputDeQuy1(_IArr, _IN);

	cout << "\nTong element array: " << _arraySumElement(_IArr, _IN) << endl;

	system("pause");
	return 0;
}

void _arrayInputKhuDeQuy(int* _IArr, int _IN)
{
	for (size_t i = 0; i < _IN; i++)
	{
		cout << "Nhap a[" << i << "] = ";
		cin >> _IArr[i];
	}
}

void _arrayOutputKhuDeQuy(int* _IArr, int _IN)
{
	for (size_t i = 0; i < _IN; i++)
	{
		cout << _IArr[i] << " ";
	}
}

void _arrayInputDeQuy(int* _IArr, int _IN, int _II)
{
	// Điều kiện dừng.
	if (_II == _IN)
		return;

	// Bước lặp: công thức đệ quy.
	cout << "Nhap a[" << _II << "] = ";
	cin >> _IArr[_II];
	_arrayInputDeQuy(_IArr, _IN, _II + 1);
}

void _arrayOutputDeQuy(int* _IArr, int _IN, int _II)
{
	// Điều kiện dừng.
	if (_II == _IN)
		return;

	// Bước lặp: công thức đệ quy.
	cout << _IArr[_II] << " ";
	_arrayOutputDeQuy(_IArr, _IN, _II + 1);
}

void _arrayInputDeQuy1(int* _IArr, int _IN)
{
	// Điều kiện dừng.
	if (_IN == 0)
		return;

	// Bước lặp: công thức đệ quy.
	_arrayInputDeQuy(_IArr, _IN - 1);
	cout << "Nhap a[" << _IN - 1 << "] = ";
	cin >> _IArr[_IN - 1];
}

void _arrayOutputDeQuy1(int* _IArr, int _IN)
{
	// Điều kiện dừng.
	if (_IN == 0)
		return;

	// Bước lặp: công thức đệ quy.
	_arrayOutputDeQuy(_IArr, _IN - 1);
	cout << _IArr[_IN - 1] << " ";
}

int _arraySumElement(int* _IArr, int _IN, int _ISum)
{
	// Điều kiện dừng.
	if (_IN == 0)
		return _ISum;

	// Bước lặp: công thức đệ quy.
	return _arraySumElement(_IArr, _IN - 1, _IArr[_IN - 1] + _ISum);
}

