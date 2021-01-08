#include <iostream>
#include <fstream>

using namespace std;

struct _Date
{
	int _Day;
	int _Month;
	int _Year;
};

istream& operator>>(istream& _IS, _Date& _DInput)
{
	// TODO: insert return statement here
	cout << "Day: ";
	_IS >> _DInput._Day;
	cout << "Month: ";
	_IS >> _DInput._Month;
	cout << "Year: ";
	_IS >> _DInput._Year;

	return _IS;
}

ostream& operator<<(ostream& _OS, _Date _DOutput)
{
	// TODO: insert return statement here
	_OS << _DOutput._Day << "/" << _DOutput._Month << "/" << _DOutput._Year;

	return _OS;
}

void _writeFile(FILE* _FileOut, _Date _DOut);
void _readFile(FILE* _FileIn, _Date& _DIn);
int _sizeOfFile(FILE* _File);

int main()
{
	FILE* _File;
	errno_t _Err = fopen_s(&_File, "myfile.dat", "r");
	if (_Err)
	{
		cout << "Mo file out khong thanh cong!" << endl;
		system("pause");
		return 0;
	}

	_Date _D;
	/*cout << "Nhap vao ngay thang nam: " << endl;
	cin >> _D;*/

	//_writeFile(_File, _D);
	//rewind(_File);
	_readFile(_File, _D);

	fclose(_File);

	system("pause");
	return 0;
}

void _writeFile(FILE* _FileOut, _Date _DOut)
{
	/*for (size_t i = 0; i < 5; i++)
	{
		fprintf_s(_FileOut, "Nguyen Nhat Tuan %d\n", i + 1);
	}*/
	if (fwrite(&_DOut, sizeof(_Date), 1, _FileOut) != 1)
		cout << "Ghi du lieu that bai." << endl;
}

void _readFile(FILE* _FileIn, _Date& _DIn)
{
	/*int _ICount = 0;
	char _Str[255];
	while (fgets(_Str, 255, _FileIn) != NULL)
	{
		cout << "Lan thu " << ++_ICount << ": ";
		cout << _Str;
	}*/
	if (fread_s(&_DIn, sizeof(_DIn), sizeof(_Date), 1, _FileIn) != 1)
		cout << "Doc du lieu that bai!" << endl;
	else
	{
		cout << _DIn << endl;
	}
}

int _sizeOfFile(FILE* _File)
{
	fseek(_File, 0, SEEK_END); // Chơi chiêu nek.
	int _SizeFile = ftell(_File);
	fseek(_File, 0, SEEK_SET); // Nhớ để nó lại vị trí đầu.
	return _SizeFile;
}

