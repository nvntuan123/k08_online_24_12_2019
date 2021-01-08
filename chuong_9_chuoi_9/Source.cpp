/*1. Trả về chuỗi tương ứng các ký tự đầu tiên mỗi từ thành ký tự hoa.*/
#include <iostream>

using namespace std;

/*
Ý tưởng: mỗi từ cách nhau bởi khoảng trắng.=> Ta duyệt vòng lặp nếu gặp ký tự khoảng trắng và ký tự khác khoảng thì ta biến thành ký tự hoa.
VD: Input: "nguyen nhat Tuan"
*/

bool _ktKyTu(char _CKyTu)
{
	return ((_CKyTu >= 'a') && (_CKyTu <= 'z'));
}

void _kyTuDauThanhHoa(char* _Str)
{
	if (_Str == NULL)
		return;
	else
	{
		int _ILength = strlen(_Str);
		if (!_ILength)
			return;
		else
		{
			int i = 0;
			if (_Str[0] != ' ')
				if (_ktKyTu(_Str[0]))
				{
					_Str[0] -= 32;
					i = 1;
				}

			while (i < _ILength - 1)
			{
				if (_Str[i] == ' ' && _Str[i + 1] != ' ')
				{
					if (_ktKyTu(_Str[i + 1]))
					{
						_Str[i + 1] -= 32;
						i++; // Loại bỏ vị trí ta vừa biến thành ký tự hoa.
					}
				}
				i++;
			}
		}
	}
}

int main()
{
	char _StrName[100] = "   nguyen    nhat    Tuan   ";

	cout << "After Name: " << _StrName << endl;
	_kyTuDauThanhHoa(_StrName);
	cout << "Before Name: " << _StrName << endl;

	system("pause");
	return 0;
}

