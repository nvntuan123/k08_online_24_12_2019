#include <iostream>
#include <fstream>

using namespace std;

int _sizeOfFile(FILE* _File);

int main()
{
	//FILE* _FileIn;
	//errno_t _ErrIn = fopen_s(&_FileIn, "input.txt", "r");

	ifstream _FileInCPP("input.txt", ios::in);

	if (_FileInCPP.fail())
	{
		cout << "Mo file khong thanh cong!" << endl;
		system("pause");
		return 0;
	}
	//fseek(_FileOut, 10, SEEK_SET);
	//fseek(_FileOut, -3, SEEK_CUR);
	//fseek(_FileIn, -41, SEEK_END);

	/*
	SEEK_SET = ios::beg, ios_base::beg = 0
	SEEK_CUR = ios::cur, ios_base::cur = 1
	SEEK_END = ios::end, ios_base::end = 2
	*/

	//_FileInCPP.seekg(10, 0);
	//_FileInCPP.seekg(5, 1);
	_FileInCPP.seekg(-5, 2);

	int _ICount = 0;
	while (!_FileInCPP.eof())
	{
		char _Str[255];
		_FileInCPP.getline(_Str, 255);
		cout << "Lan thu " << ++_ICount << ": " << _Str << endl;
	}

	_FileInCPP.close();

	system("pause");
	return 0;
}

int _sizeOfFile(FILE* _File)
{
	fseek(_File, 0, SEEK_END); // Chơi chiêu nek.
	int _SizeFile = ftell(_File);
	fseek(_File, 0, SEEK_SET); // Nhớ để nó lại vị trí đầu.
	return _SizeFile;
}

