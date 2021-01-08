#define _CRT_SECURE_NO_WARNINGS // _strupr(const_cast<char*>(_Str.c_str()));
#include <iostream>
#include <string>
#include <cstring> // string.h

using namespace std;

int main()
{
	string _Str = "Nhat Tuan";
	//int _ILength_Str = strlen(static_cast<const char*>(_Str.c_str()));
	int _ILength_Str = strlen(const_cast<const char*>(_Str.c_str()));

	cout << "STR: " << _Str << endl;
	cout << "Length: " << _ILength_Str << endl;

	// Dao nguoc chuoi.
	//_strrev(const_cast<char*>(_Str.c_str()));
	//cout << "Chuoi sau khi dao nguoc la: " << _Str << endl;

	// Chuyen chuoi thuong thanh chuoi hoa.
	_strupr_s(const_cast<char*>(_Str.c_str()), _ILength_Str + 1);
	//_strupr(const_cast<char*>(_Str.c_str())); // #define _CRT_SECURE_NO_WARNINGS
	cout << "STRUPR: " << _Str << endl;

	// Chuyen chuoi hoa thanh chuoi thuong.
	_strlwr_s(const_cast<char*>(_Str.c_str()), _ILength_Str + 1);
	//_strlwr(const_cast<char*>(_Str.c_str())); // #define _CRT_SECURE_NO_WARNINGS
	cout << "STRLWR: " << _Str << endl;

	char _StrCopy[100]; // Khai bao
	//_StrCopy = "Ky Thuat Lap Trinh"; // Error.
	strcpy(_StrCopy, const_cast<char*>(_Str.c_str())); // #define _CRT_SECURE_NO_WARNINGS
	cout << "StrCopy: ";
	puts(_StrCopy); // Xuat ra mang ky tu.
	char* _StrDUP = _strdup(_StrCopy);
	cout << "StrDUP: ";
	puts(_StrDUP); // Xuat ra mang ky tu.

	system("pause");
	return 0;
}

