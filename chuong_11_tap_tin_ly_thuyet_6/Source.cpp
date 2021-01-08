//#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <fstream>

using namespace std;

void _writeFile(FILE* _FileOut);
void _readFile(FILE* _FileIn);
int _sizeOfFile(FILE* _File);

int main()
{
	// Cach 2:
	FILE* _FileIn;
	errno_t _ErrIn = fopen_s(&_FileIn, "input.txt", "rb");
	if (_ErrIn)
	{
		cout << "Mo file out khong thanh cong!" << endl;
		system("pause");
		return 0;
	}
	//fseek(_FileOut, 10, SEEK_SET);
	//fseek(_FileOut, -3, SEEK_CUR);
	//fseek(_FileIn, -41, SEEK_END);
	cout << "Size of file: " << _sizeOfFile(_FileIn) << endl;
	_readFile(_FileIn);

	fclose(_FileIn);

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
	int _ICount = 0;
	char _Str[255];
	while (fgets(_Str, 255, _FileIn) != NULL)
	{
		cout << "Lan thu " << ++_ICount << ": ";
		cout << _Str;
	}
}

int _sizeOfFile(FILE* _File)
{
	fseek(_File, 0, SEEK_END); // Chơi chiêu nek.
	int _SizeFile = ftell(_File);
	fseek(_File, 0, SEEK_SET); // Nhớ để nó lại vị trí đầu.
	return _SizeFile;
}

