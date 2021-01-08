#include <iostream>

using namespace std;

/*
Xây dựng hàm strcat.
*/

int _STRLEN(const char* _Str)
{
	int _ICount = 0;
	if (_Str != NULL)
	{
		while (_Str[_ICount++] != '\0');
	}
	return _ICount - 1;
}

char* _STRCAT_S(char* _StrDest, size_t _SizeT, const char* _StrSource)
{
	if (_StrSource != NULL)
	{
		int _ILength_StrSource = _STRLEN(_StrSource);
		int _ILength_StrDest = _STRLEN(_StrDest);
		for (int i = 0; i < _ILength_StrSource; i++)
		{
			_StrDest[_ILength_StrDest++] = _StrSource[i];
			//_ILength_StrDest++;
		}
		_StrDest[_ILength_StrDest] = '\0';
		return _StrDest;
	}
	return NULL;
}

char* _STRCPY(char* _StrDest, const char* _StrSource)
{
	if (_StrSource != NULL)
	{
		int _ILength = _STRLEN(_StrSource);
		for (int i = 0; i < _ILength; i++)
		{
			_StrDest[i] = _StrSource[i];
		}
		_StrDest[_ILength] = '\0';
	}
	return _StrDest;
}

char* _STRDUP(const char* _StrSource)
{
	int _ILength = _STRLEN(_StrSource);
	char* _Str = new char[_ILength];
	_STRCPY(_Str, _StrSource);
	return _Str;
}

char* _STRLWR(char* _StrSource)
{
	if (_StrSource != NULL)
	{
		int _ILength = _STRLEN(_StrSource);
		for (int i = 0; i < _ILength; i++)
		{
			if (_StrSource[i] >= 'A' && _StrSource[i] <= 'Z')
				_StrSource[i] += 32;
		}
		return _StrSource;
	}
	return NULL;
}

char* _STRREV(char* _StrSource)
{
	if (_StrSource != NULL)
	{
		int _ILength = _STRLEN(_StrSource);
		for (int i = 0; i < _ILength / 2; i++)
		{
			swap(_StrSource[i], _StrSource[_ILength - 1 - i]);
		}
		return _StrSource;
	}
	return NULL;
}

char* _STRUPR(char* _StrSource)
{
	if (_StrSource != NULL)
	{
		int _ILength = _STRLEN(_StrSource);
		for (int i = 0; i < _ILength; i++)
		{
			if (_StrSource[i] >= 'a' && _StrSource[i] <= 'z')
				_StrSource[i] -= 32;
		}
		return _StrSource;
	}
	return NULL;
}

char* _STRSTR(const char* _StrSource, char* _StrFind)
{
	if (_StrSource != NULL && _StrFind != NULL)
	{
		int _ILength_StrSource = _STRLEN(_StrSource);
		int _ILength_StrFind = _STRLEN(_StrFind);
		int _IFind = -1;
		int _ITemp = -1;
		for (int i = 0; i < _ILength_StrSource; i++) // Vòng lặp cha xét những phần trong chuỗi cha.
		{
			bool _BCheckIndex = true; // Mặc định là tìm thấy.
			_ITemp = i;
			for (int j = 0; j < _ILength_StrFind; j++)
			{
				if (_StrFind[j] != _StrSource[_ITemp++])
				{
					_BCheckIndex = false; // Không trùng với ký tự trong chuỗi cha => dừng ngay và xét duyệt đến phần tử tiếp theo.
					break;
				}
			}

			if (_BCheckIndex)
			{
				_IFind = i;
				break;
			}
		}

		if (_IFind != -1)
		{
			char* _StrCopy = new char[_ILength_StrSource - _IFind + 1];
			_ITemp = 0;
			for (int k = _IFind; k < _ILength_StrSource; k++)
			{
				_StrCopy[_ITemp++] = _StrSource[k];
			}
			_StrCopy[_ITemp] = '\0';
			return _StrCopy;
		}
		return NULL;
	}
	return NULL;
}

/*
- Trả về:	< 0 nếu _Str1 < _Str2.
			= 0 nếu _Str1 = _Str2.
			> 0 nếu _Str1 > _Str2.
*/
int _STRCMP(const char* _Str1, const char* _Str2) // Phân biệt hoa thường.
{
	int _ILengthStr1 = strlen(_Str1);
	int _ILengthStr2 = strlen(_Str2);
	int _IMinLength = _ILengthStr1 < _ILengthStr2 ? _ILengthStr1 : _ILengthStr2;
	for (int i = 0; i < _IMinLength; i++)
	{
		if (_Str1[i] < _Str2[i])
			return -1;
		if (_Str1[i] > _Str2[i])
			return 1;
	}

	if (_ILengthStr1 < _ILengthStr2)
		return -1;
	if (_ILengthStr1 > _ILengthStr2)
		return 1;
	return 0;
}

/*
- Trả về: < 0 nếu	_Str1 < _Str2.
					= 0 nếu _Str1 = _Str2.
					> 0 nếu _Str1 > _Str2.
*/
int _STRICMP(const char* _Str1, const char* _Str2) // Không phân biệt hoa thường.
{
	// B1: Tạo ra bản sao của 2 và thao tác trên 2 bản sao. Chuyển tất cả các ký trong 2 chuỗi của bản sao về ký tự thường.
	// Tạo bản sao.
	char* _StrCopy1 = _strdup(_Str1);
	char* _StrCopy2 = _strdup(_Str2);
	_strlwr(_StrCopy1);
	_strlwr(_StrCopy2);

	int _ILengthStr1 = strlen(_StrCopy1);
	int _ILengthStr2 = strlen(_StrCopy2);
	int _IMinLength = _ILengthStr1 < _ILengthStr2 ? _ILengthStr1 : _ILengthStr2;
	for (int i = 0; i < _IMinLength; i++)
	{
		if (_StrCopy1[i] < _StrCopy2[i])
			return (_StrCopy1[i] - _StrCopy2[i]);
		if (_StrCopy1[i] > _StrCopy2[i])
			return (_StrCopy1[i] - _StrCopy2[i]);
	}

	if (_ILengthStr1 < _ILengthStr2)
		return -32;
	if (_ILengthStr1 > _ILengthStr2)
		return 32;
	return 0;
}

/*
VD: 123 = 1 * 10^2 + 2 * 10^1 + 3 * 10^0 = 1 * 100 + 2 * 10 + 3 * 1
										= 100 + 20 + 3 = 123
Ý tưởng: lấy số từ phải qua trái. Lấy ra chữ số cuối chuyển nó thành ký tự bằng cách + 48 rồi bỏ vào chuỗi. Cuối cùng ta chỉ cần đảo chuỗi là xong.
VD: Number = 123 =>	123 % 10 => 3 + 48 rồi bỏ vào chuỗi thành ký tự '3'.
					123 / 10 => Number = 12 loại bỏ chữ số cuối vừa lấy ra được.
					12 % 10 => 2 + 48 rồi bỏ vào chuỗi thành ký tự '2'.
					12 / 10 => Number = 1 loại bỏ chữ số cuối vừa lấy ra được.
					1 % 10 => 1 + 48 rồi bỏ vào chuỗi thành ký tự '1'.
					1 / 10 => Number = 0 loại bỏ chữ số cuối vừa lấy ra được.
				=> _Str = "321"; => Ta đảo chỗi thành "123" => Kết quả.
Đổi số 250 ra các hệ.
Hệ 2:
250 / 2 = 125 dư 0.
125 / 2 = 62 dư 1.
62 / 2 = 31 dư 0.
31 / 2 = 15 dư 1.
15 / 2 = 7 dư 1.
7 / 2 = 3 dư 1.
3 / 2 = 1 dư 1.
1 / 2 = 0 dư 1.
=> 1111 1010

Hệ 8:
250 / 8 = 31 dư 2
31 / 8 = 3 dư 7.
3 / 8 = 0 dư 3.
=> 372

Hệ 16:
Cần nhớ A = 10, B = 11, C = 12, D = 13, E = 14, F = 15.
250 / 16 = 15 dư 10
15 / 16 = 0 dư 15.
15 10 = FA.
*/

char* _ITOA(int _INumber, char* _Str, int _IRadix)
{
	if (_Str != NULL)
	{
		int _ILength = 0;
		while (_INumber)
		{
			int _IN = _INumber % _IRadix; // Lay ra chu so cuoi.
			_INumber /= _IRadix; // Loai bo chu so vua lay ra.
			cout << _IN << endl;
			if (_IN < 10)
			{
				_Str[_ILength++] = _IN + 48;
			}
			else if (_IN == 10)
			{
				_Str[_ILength++] = 'A';
			}
			else if (_IN == 11)
			{
				_Str[_ILength++] = 'B';
			}
			else if (_IN == 12)
			{
				_Str[_ILength++] = 'C';
			}
			else if (_IN == 13)
			{
				_Str[_ILength++] = 'D';
			}
			else if (_IN == 14)
			{
				_Str[_ILength++] = 'E';
			}
			else
			{
				_Str[_ILength++] = 'F';
			}
		}

		_strrev(_Str); // Dao chuoi.
		return _Str;
	}
	return NULL;
}

/*
VD: 123a45 = 1 * 10^2 + 2 * 10^1 + 3 * 10^0 = 1 * 100 + 2 * 10 + 3 * 1
										= 100 + 20 + 3 = 123
Lưu ý: ký nó lưu dưới bảng mã ASCII nên ta phải chuyển nó về số.
Băng cách: '1' - 48 = 1.
123.45: sẽ có 2 phần là phần nguyên và phần thập phân.
Phần nguyên: 123
Phần thập phân: 45
Ý tưởng xây dựng hàm chuyển chuỗi về số thực.
B1: Tạo bản từ chuỗi nguồn.
B2: Duyệt mảng ký tự xem dấu ở vị nào, nếu tìm thấy => xóa nó và nhớ trước xóa phải lưu lại vị trí của dấu chấm.
B3: => chuỗi chỉ còn "12345" => Ta tận dụng lại hàm atoi đã làm chuyển nó thành số nguyên tức là 12345.
Lưu ý: số lượng chữ số của phần thập phân sẽ dc tính như sau:
Length(_StrSource)(6) - vị trí của dấu chấm(3) - 1 = 6 - 3 - 1 = 2
=> 12345 / 10^2
*/

int _ATOI(const char* _StrSource)
{
	int _IIndex = -1;
	int _ILength = strlen(_StrSource);
	for (int i = 0; i < _ILength; i++)
	{
		if (_StrSource[i] < '1' || _StrSource[i] > '9')
		{
			_IIndex = i; // Tìm thấy vị trí có ký tự khác số.
			break; // Nhớ dừng lại nha. Đừng có chơi ngu giống a nge chưa.
		}
	}

	int _INumber = 0;
	if (!_IIndex)
	{
		return _INumber;
	}
	else
	{
		int _IN = _IIndex - 1;
		if (_IIndex == -1) // Chơi chiêu nek.
		{
			_IIndex = _ILength;
			_IN = _ILength - 1;
		}
		for (int j = 0; j < _IIndex; j++)
		{
			_INumber += (_StrSource[j] - 48) * pow(10, _IN--);
		}
	}
	return _INumber;
}

int main()
{
	/*strlen*/
	char _StrName[100] = "Tuan Cute";

	cout << _STRLEN(_StrName) << endl;
	/*strlen*/

	/*strcat*/
	/*char _StrLastName[130] = "Hung Cho";
	char _StrFirstName[30] = "Dien";
	_STRCAT_S(_StrLastName, 130, " ");
	_STRCAT_S(_StrLastName, 130, _StrFirstName);
	cout << _StrLastName << endl;*/
	/*strcat*/

	/*strcpy*/
	/*char _StrName[100] = "Tuan Cute";
	char _StrCopy[100];
	_STRCPY(_StrCopy, _StrName);

	cout << _StrCopy << endl;*/
	/*strcpy*/

	/*strdup*/
	/*char _StrName[100] = "Tuan Cute";
	char* _StrCopy = _STRDUP(_StrName);

	cout << _StrCopy << endl;*/
	/*strdup*/

	/*strlwr*/
	/*char _StrName[100] = "Tuan Cute";
	_STRLWR(_StrName);
	cout << _StrName << endl;*/
	/*strlwr*/

	/*strrev*/
	/*char _StrName[100] = "Tuan Cute";
	_STRREV(_StrName);
	cout << _StrName << endl;*/
	/*strrev*/

	/*strupr*/
	/*char _StrName[100] = "Tuan Cute";
	_STRUPR(_StrName);
	cout << _StrName << endl;*/
	/*strupr*/

	/*strstr*/
	/*char _StrFullName[130] = "Nguyen Nhat Tuan";
	char _StrFindName[30] = "Tuan";

	if (_STRSTR(_StrFullName, _StrFindName) != NULL)
	{
		cout << "Tim thay" << endl;
		cout << _STRSTR(_StrFullName, _StrFindName);
	}
	else
		cout << "Khong tim thay" << endl;*/

	/*if (strstr(_StrFullName, _StrFindName) != NULL)
	{
		cout << "Tim thay" << endl;
		cout << strstr(_StrFullName, _StrFindName) << endl;
	}
	else
		cout << "Khong tim thay" << endl;*/
	/*strstr*/

	/*strcmp, stricmp*/
	//char _Str1[] = "Nguyen"; // N
	//char _Str2[] = "Tuan     "; // n

	//// Phân biệt hoa thường.
	////int _IResult = strcmp(_Str1, _Str2);
	////int _IResult = _STRCMP(_Str1, _Str2);
	////cout << "_IResult = " << _IResult << endl;

	//// Không phân biệt hoa thường.
	//int _IResult1 = _stricmp(_Str1, _Str2);
	//int _IResult2 = _STRICMP(_Str1, _Str2);

	//cout << "_IResult1 = " << _IResult1 << endl;
	//cout << "_IResult2 = " << _IResult2 << endl;
	/*strcmp, stricmp*/

	/*itoa*/
	//int _INumber = 123;
	//char _StrNumber[100] = "";
	//_itoa(_INumber, _StrNumber, 10);
	//_itoa(_INumber, _StrNumber, 2);
	//_itoa(_INumber, _StrNumber, 8);
	//_itoa(_INumber, _StrNumber, 16);
	//_ITOA(_INumber, _StrNumber, 10);
	//_ITOA(_INumber, _StrNumber, 2);
	//_ITOA(_INumber, _StrNumber, 8);
	//_ITOA(_INumber, _StrNumber, 16);
	//cout << "_StrNumber = " << _StrNumber << endl;
	/*itoa*/

	/*atoi*/
	//char _StrNumberI[] = "12345";
	//char _StrNumberI[] = "a12345";
	//char _StrNumberI[] = "123a45";
	//char _StrNumberI[] = "1c23a45";
	//int _INumber = _ATOI(_StrNumberI);
	//char _StrNumberD[] = "123.45";
	//double _DNumber = atof(_StrNumberD);
	//cout << "_INumber = " << _INumber << endl;
	//cout << "_DNumber = " << _DNumber << endl;
	/*atoi*/

	system("pause");
	return 0;
}

