/*
6. Viết hàm tìm từ có chiều dài lớn nhất và xuất ra màn hình từ đó và độ dài
tương ứng.
*/

#include <iostream>
#include <cstring>
#include <windows.h>

using namespace std;

/*
Input: "Nguyen    Nhat    Tuan"
*/

void _xuatTuMax(const char* _Str)
{
	int _ILength = strlen(_Str);

	int _IStart = -1, _IEnd = -2;
	int _IStartMax = -1, _IEndMax = -2;
	int i = 0;

	if (_Str[0] != ' ')
		_IStart = 0;

	while (i < _ILength - 1)
	{
		// Tìm vị trí bắt đầu và của 1 từ.
		if ((_Str[i] == ' ' && _Str[i + 1] != ' ') || _IStart == 0)
		{
			_IStart = i + 1;
			if (_IStart == 1) // Chơi chiêu nek.
				_IStart = 0;

			// Tìm vị trí kết thúc của 1 từ.
			bool bCheckEnd = true;
			for (int j = i + 2; j < _ILength; j++)
			{
				if (_Str[j] != ' ' && _Str[j + 1] == ' ')
				{
					_IEnd = j;
					i = j; // Cập nhật biến i để tăng tốc độ chạy.
					bCheckEnd = false;
					break;
				}
			}
			if (_Str[_ILength - 1] != ' ' && bCheckEnd)
			{
				_IEnd = _ILength - 1;
				i = _IEnd; // Cập nhật biến i để tăng tốc độ chạy.
			}
		}

		i++; // Điều kiện dừng.

		// In ra từ vừa tìm được.
		int _ILengthStartEnd = _IEnd - _IStart + 1;
		int _ILengthStartEndMax = _IEndMax - _IStartMax + 1;
		if (_ILengthStartEnd > 0)
		{
			if (_ILengthStartEnd > _ILengthStartEndMax)
			{
				_IStartMax = _IStart;
				_IEndMax = _IEnd;
			}
		}
		// Reset _IStart and _IEnd.
		_IStart = -1, _IEnd = -2;
	}

	for (int k = _IStartMax; k <= _IEndMax; k++)
	{
		cout << _Str[k];
	}
	cout << endl << "Do dai: " << _IEndMax - _IStartMax + 1 << endl;
}

int main()
{
	char _StrName[100] = "Nguyen Nhat Tuan";
	_xuatTuMax(_StrName);

	system("pause");
	return 0;
}

