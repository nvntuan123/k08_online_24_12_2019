//#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int main()
{
	const char _Path[] = "output.txt";
	FILE* _FileOut;

	// B1: mo file
	errno_t _ErrOut = fopen_s(&_FileOut, _Path, "w");

	// B2 Xu ly.
	if (_ErrOut)
	{
		cout << "Mo file khong thanh cong!" << endl;
		system("pause");
		return 0;
	}

	/*if (fputc('a', _FileOut) != -1)
	{
		cout << "Ghi gile thanh cong." << endl;
	}
	else
	{
		cout << "Ghi gile khong thanh cong." << endl;
	}*/

	/*if (fputs("Nhat Tuan\nAhihi", _FileOut) != EOF)
	{
		cout << "Ghi file thanh cong." << endl;
	}
	else
	{
		cout << "Ghi file khong thanh cong." << endl;
	}*/

	for (size_t i = 0; i < 5; i++)
	{
		cout << fprintf_s(_FileOut, "Nguyen Nhat Tuan %d\n", i + 1) << endl;
	}

	// B3: dong file.
	fclose(_FileOut);

	cout << endl;
	system("pause");
	return 0;
}

