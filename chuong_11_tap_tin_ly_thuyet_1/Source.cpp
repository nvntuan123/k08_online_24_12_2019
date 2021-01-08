//#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <cstdio> // CPP
//#include <stdio.h> // C thuần.

using namespace std;

int main()
{
	FILE* _File;
	// B1: Mở file.
	//const char* _FilePath = "C:\\Users\\NhatTuan-PC\\Desktop\\input.txt"; // Đường dẫn tuyệt đối.
	const char* _FilePath = "input.txt"; // Đường dẫn tương đối C1.
	//const char* _FilePath = "Debug/input.txt"; // Đường dẫn tương đối C2.
	//const char* _FilePath = "../input.txt"; // Đường dẫn tương đối C3.
	//_File = fopen(_FilePath, "r"); // r mở file để đọc.

	errno_t err = fopen_s(&_File, _FilePath, "r");

	// B2: Xử lý gì đó.
	/*if (_File == NULL)
	{
		cout << "Mo file that bai!" << endl;
		system("pause");
		return 0;
	}*/

	if (err)
	{
		cout << "Mo file that bai!" << endl;
		system("pause");
		return 0;
	}

	// Code.
	//char _C;
	// Nhập 1 ký tự từ phím
	/*cout << "Nhap vao 1 ki tu: ";
	_C = getc(stdin);*/

	// Nhập 1 ký tự từ file.
	/*_C = fgetc(_File);
	cout << "_C: " << _C << endl;*/

	// Nhập 1 chuỗi từ file.
	/*char _Str[255];
	if (fgets(_Str, 255, _File))
	{
		cout << "Str: " << _Str;
		cout << "Length str: " << strlen(_Str) << _Str[9];
		cout << "Str Line 2: " << fgets(_Str, 255, _File);
		cout << "Length str: " << strlen(_Str) << endl;
	}
	else
	{
		cout << "Khong doc duoc." << endl;
	}*/

	/*int a, b;
	printf_s("Nhap vao a = ");
	scanf_s("%d", &a);*/

	/*char _Str[255];
	fscanf_s(_File, "%[^\n]", &_Str);
	cout << _Str << endl;*/

	int _IA, _IB;
	//fscanf_s(_File, "%d%d", &_IA, &_IB);
	//cout << "a: " << _IA << endl;
	//cout << "b: " << _IB << endl;

	fscanf_s(_File, "%d", &_IA);
	cout << "a: " << _IA << endl;

	fscanf_s(_File, "%d", &_IB);
	cout << "b: " << _IB << endl;

	// B3: Đóng file.
	fclose(_File);

	system("pause");
	return 0;
}

