/*2. Trả về chuỗi tương ứng xóa khoảng trắng thừa.*/
#include <iostream>

using namespace std;

/*
Ý tưởng:
Input: "   nguyen    nhat    Tuan   "
i = 9 = ' ' va i + 1 = 10 = ' '
*/

void _xoaKyTu(char* _Str, int& _IN, int _ViTriXoa)
{
	for (int i = _ViTriXoa + 1; i < _IN; i++)
	{
		_Str[i - 1] = _Str[i];
	}
	_Str[--_IN] = '\0';
}

void _xoaKhoangTrangThua(char* _Str)
{
	if (_Str != NULL)
	{
		int _ILength = strlen(_Str);
		for (int i = 0; i < _ILength; i++)
		{
			if (_Str[i] == ' ' && _Str[i + 1] == ' ')
			{
				_xoaKyTu(_Str, _ILength, i + 1);
				i--; // Reset i.
			}
		}

		if (_Str[0] == ' ') // Xoa vi tri dau.
			_xoaKyTu(_Str, _ILength, 0);

		if (_Str[_ILength - 1] == ' ') // Xoa vi tri cuoi.
			_xoaKyTu(_Str, _ILength, _ILength - 1);
	}
	return;
}

int main()
{
	char _StrName[100] = "   nguyen     nhat       Tuan   ";

	cout << "After: " << _StrName << endl << strlen(_StrName) << endl;
	_xoaKhoangTrangThua(_StrName);
	cout << "Before: " << _StrName << endl << strlen(_StrName) << endl;

	system("pause");
	return 0;
}

