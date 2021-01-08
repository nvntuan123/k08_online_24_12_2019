//#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int main()
{
	const char _Path[] = "input.txt";
	FILE* _FileIn;

	// B1: mo file
	errno_t _ErrIn = fopen_s(&_FileIn, _Path, "r");

	// B2 Xu ly.
	if (_ErrIn)
	{
		cout << "Mo file khong thanh cong!" << endl;
		system("pause");
		return 0;
	}

	// fgetc, fgets, fscanf, fscanf_s;
	char _Str[255];
	/*
	while (fgets(_Str, 255, _FileIn) != NULL)
	{
		cout << _Str;
	}*/

	//fscanf(_FileIn, "%[^\n]", _Str);
	fscanf_s(_FileIn, "%[^\n]", _Str, __crt_countof(_Str));
	cout << "_Str = " << _Str;
	// B3: dong file.
	fclose(_FileIn);

	cout << endl;
	system("pause");
	return 0;
}

