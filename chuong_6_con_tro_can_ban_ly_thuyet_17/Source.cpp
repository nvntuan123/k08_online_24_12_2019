#include <stdio.h> // Ho tro nhap xuat ben.
#include <conio.h> // Cau getch() dung man hinh.
#include <stdlib.h> // Thu vien ho tro cap phat vung va thu hoi vung ben C.

int main()
{
	// Khai bao va cap phat vung nho ben C++.
	int* iPtrCPlusPlus = new int; // Cap phat vung nho.
	delete iPtrCPlusPlus; // Thu hoi vung nho.

	// Khai bao va cap phat vung nho ben C.
	//int *iPtrValueC = (int *)malloc(sizeof(int)); // Cap vung nho ben C.
	//int *iPtrValueC = (int *)calloc(1, sizeof(int));
	int n = 5;
	int* iPtrValueC = (int*)realloc(NULL, sizeof(int) * n); // Cap phat moi hoan toan.
	//iPtrValueC = (int *)realloc(iPtrValueC, sizeof(int) * (n + 1)); // Tang len 6 o nho.

	printf_s("*iPtrValueC = %d", (*iPtrValueC)); // Cau lenh xuat C.
	printf_s("\n&iPtrValueC = %x", &iPtrValueC); // Cau lenh xuat C.
	printf_s("\niPtrValueC = %x", iPtrValueC); // Cau lenh xuat C.

	printf_s("\n\nNhap iPtrValueC = ");
	scanf_s("%d", iPtrValueC); // Cau nhap ben C.

	printf_s("\n===================Sau khi nhap gia tri cho con tro C===================");
	printf_s("\n*iPtrValueC = %d", (*iPtrValueC)); // Cau lenh xuat C.
	printf_s("\n&iPtrValueC = %x", &iPtrValueC); // Cau lenh xuat C.
	printf_s("\niPtrValueC = %x", iPtrValueC); // Cau lenh xuat C.

	char iValue = '1';
	const char* const iValueConstPtr = &iValue; // Hang con tro tro toi hang.

	free(iPtrValueC); // Thu hoi vung nho ben C.

	printf("\n===================Sau khi thu hoi vung nho cua con tro C===================");
	printf("\n*iPtrValueC = %d", (*iPtrValueC)); // Cau lenh xuat C.
	printf_s("\n&iPtrValueC = %x", &iPtrValueC); // Cau lenh xuat C.
	printf_s("\niPtrValueC = %x", iPtrValueC); // Cau lenh xuat C.

	//system("pause"); // Cau lenh dung man hinh C++
	_getch(); // Cau lenh dung man hinh ben C.
	return 0;
}

