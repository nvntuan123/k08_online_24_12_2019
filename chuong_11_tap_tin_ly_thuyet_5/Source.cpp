//#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <fstream>

using namespace std;

void _writeFile(FILE* _FileOut);
void _readFile(FILE* _FileIn);

int main()
{
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
	//fseek(_FileOut, 10, SEEK_SET);
	//fseek(_FileOut, -3, SEEK_CUR);
	fseek(_FileOut, -1, SEEK_END);
	//cout << "SEEK_SET: " << SEEK_SET << endl; // 0
	//cout << "SEEK_CUR: " << SEEK_CUR << endl; // 1
	//cout << "SEEK_END: " << SEEK_END << endl; // 2
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

