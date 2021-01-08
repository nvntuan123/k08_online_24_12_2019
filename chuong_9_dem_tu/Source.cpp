/*
4. Đếm số từ trong chuỗi.
VD: INPUT: "Nguyen Nhat Tuan"
=> Có 3 từ trong chuỗi.
*/

// strtok

#include <iostream>

using namespace std;

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

int _demSoTu(const char* _Str)
{
	// Tạo bản sao.
	char* _StrCopy = _strdup(_Str);

	// Xóa khoảng trắng thừa.
	_xoaKhoangTrangThua(_StrCopy);
	int _ICount = 0;
	int _ILength = strlen(_StrCopy);
	for (int i = 0; i < _ILength; i++)
	{
		if (_StrCopy[i] == ' ')
			_ICount++;
	}

	return _ICount + 1;
}

int main()
{
	char _Str[100] = "   Hung    BeDe   Ahihi";
	cout << "So tu co trong chuoi la: " << _demSoTu(_Str) << endl;

	cout << endl;
	system("pause");
	return 0;
}

