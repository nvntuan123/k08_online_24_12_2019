#include <iostream>
#include <fstream>

using namespace std;

void _writeFile(FILE* _FileOut);
void _readFile(FILE* _FileIn);
int _sizeOfFile(FILE* _File);

int main()
{
	FILE* _File;
	errno_t _Err = fopen_s(&_File, "myfile.txt", "w+");
	if (_Err)
	{
		cout << "Mo file out khong thanh cong!" << endl;
		system("pause");
		return 0;
	}

	_writeFile(_File);
	//fseek(_File, 0, SEEK_SET);
	rewind(_File); // Tuong duog voi seek(_File, 0, SEEK_SET);
	_readFile(_File);

	fclose(_File);

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

