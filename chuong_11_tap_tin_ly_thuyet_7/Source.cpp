#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
	FILE* _File;
	fopen_s(&_File, "input.txt", "a");

	if (_File == NULL)
	{
		cout << "Khong mo duoc file hoac file khong ton tai." << endl;
		system("pause");
		return 0;
	}

	char _Str[30];
	cout << "Nhap vao tuoi: ";
	gets_s(_Str);

	fprintf_s(_File, "\n");
	fprintf_s(_File, _Str);

	fclose(_File);

	system("pause");
	return 0;
}

