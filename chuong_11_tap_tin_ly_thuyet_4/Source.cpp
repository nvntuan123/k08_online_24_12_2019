//#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

void _writeFile(FILE* _FileOut);
void _readFile(FILE* _FileIn);

int main()
{
	// Cach 1.
	/*FILE* _FileOut;
	errno_t _ErrOut = fopen_s(&_FileOut, "output.txt", "w");
	if (_ErrOut)
	{
		cout << "Mo file out khong thanh cong!" << endl;
		system("pause");
		return 0;
	}
	_writeFile(_FileOut);

	fclose(_FileOut);

	FILE* _FileIn;
	errno_t _ErrIn = fopen_s(&_FileIn, "output.txt", "r");
	if (_ErrIn)
	{
		cout << "Mo file in khong thanh cong!" << _ErrIn << endl;
		system("pause");
		return 0;
	}
	_readFile(_FileIn);

	fclose(_FileIn);*/

	// Cach 2:
	FILE* _FileOut;
	errno_t _ErrOut = fopen_s(&_FileOut, "output.txt", "w+");
	if (_ErrOut)
	{
		cout << "Mo file out khong thanh cong!" << endl;
		system("pause");
		return 0;
	}
	_writeFile(_FileOut);
	_readFile(_FileOut);

	fclose(_FileOut);

	system("pause");
	return 0;
}

void _writeFile(FILE* _FileOut)
{
	for (size_t i = 0; i < 5; i++)
	{
		fprintf_s(_FileOut, "Nguyen Nhat Tuan %d\n", i + 1);
	}
}

void _readFile(FILE* _FileIn)
{
	char _Str[255];
	while (fgets(_Str, 255, _FileIn) != NULL)
	{
		cout << _Str;
	}
}

