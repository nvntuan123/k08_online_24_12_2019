// Nhap xuat chuoi ben C.
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> // Ho tro nhap xuat ben C.
#include <conio.h> // _getch();
#include <string.h>

#define MAX 100

int main()
{
	//printf_s("Ahihi"); // Cu phap xuat ben C.

	int _IValue;
	printf("Nhap vao value = ");
	scanf_s("%d", &_IValue);

	char _Str[MAX];
	printf_s("Nhap vao 1 chuoi: ");
	//scanf("%s", &_Str);
	//fflush(stdin); // Xoa bo nho dem.
	getchar(); // Xoa bo nho dem.
	gets_s(_Str);
	printf_s("Chuoi vua nhap vao la: %s\n", _Str);

	int _ILength = strlen(_Str);
	printf_s("Length: %d\n", _ILength);
	_strrev(_Str); // Dao nguoc chuoi.
	printf_s("Chuoi sau dao nguoc la: %s\n", _Str);

	_getch(); // system();
	return 0;
}

