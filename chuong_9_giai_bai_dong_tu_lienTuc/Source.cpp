/*
5. Xuất ra các từ trên các dòng liên tiếp.
*/

#include <iostream>
#include <cstring>
#include <windows.h>

using namespace std;

/*
Input: "Nguyen    Nhat    Tuan"
*/

void _xuatTuLienTiep(const char* _Str)
{
	int _ILength = strlen(_Str);

	int _IStart = -1, _IEnd = -2;
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
		//cout << ", i = " << i << "S: " << _IStart << "E: " << _IEnd;
		// In ra từ vừa tìm được.
		if (_IEnd - _IStart + 1 > 0)
		{
			for (int k = _IStart; k <= _IEnd; k++)
			{
				cout << _Str[k];
			}
			cout << ", Do dai: " << _IEnd - _IStart + 1;
			cout << endl;
		}
		// Reset _IStart and _IEnd.
		_IStart = -1, _IEnd = -2;
	}
}

int main()
{
	char _StrName[100] = "      Nguyen     Nhat      Tuan      ";
	_xuatTuLienTiep(_StrName);
	//cout << _StrName[strlen(_StrName) - 1] << endl;
	//cout << strlen(_StrName) << endl;

	system("pause");
	return 0;
}

