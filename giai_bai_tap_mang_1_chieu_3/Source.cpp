// Bài 158 trang 61 sách 1000 bài tập lập trình C.
#include <iostream>
#include <cmath>

using namespace std;

int _TimX(int _IArr[], int _IN)
{
	if (_IArr != nullptr)
	{
		int _IIndexMax = 0;
		int _IMax = _IArr[_IIndexMax];
		if (_IMax < 0)
			_IMax *= -1;

		for (int i = 1; i < _IN; i++)
		{
			int _ITemp = _IArr[i];
			if (_ITemp < 0)
				_ITemp *= -1;
			if (_IMax < _ITemp)
			{
				_IMax = _ITemp;
				_IIndexMax = i;
			}
		}
		return _IIndexMax;
	}
	return -1;
}

int main()
{
	int _IArr[] = { 9, 30, 8, 2, 28, 27 };

	int _IIndexMax = _TimX(_IArr, sizeof(_IArr) / sizeof(int));

	cout << "Gia tri x = " << _IArr[_IIndexMax] << " co doan [" << (_IArr[_IIndexMax] > 0 ? -_IArr[_IIndexMax] : _IArr[_IIndexMax]) << ", " << (_IArr[_IIndexMax] < 0 ? -_IArr[_IIndexMax] : _IArr[_IIndexMax]) << "] chua tat ca cac gia tri trong mang." << endl;

	system("pause");
	return 0;
}

