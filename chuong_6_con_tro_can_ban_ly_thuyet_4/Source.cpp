#include <iostream>

using namespace std;

int main()
{
	//int n = 5;
	//int *ptr; // Khi khai bao kieu nay no se chua co vung nho tuc la mien gia tri ma no tro den.
	//ptr = &n; // No tro toi bien n cung giong nhu chui vao nha nguoi ta o tam.

	// De cap phat vung nho dong cho con tro ta su dung toan new. Va day la cap phat don.
	int* ptr = new int; // Keu he dieu hanh cap cho con tro ptr 1 o nho nao do trong bo nho ao.
	if (ptr == nullptr)
	{
		cout << "Cap phat bo nho dong khong thanh cong." << endl;
		exit(0); // Dung han chuong trinh.
	}
	else
	{
		*ptr = 5; // Hop le. Vi con tro ptr da duoc he dieu hanh cap cho 1 o nho.

		cout << "Gia tri cua con tro ptr da cap phat dong: " << *ptr << endl;
		cout << "Dia chi ptr: " << &ptr << endl;
		cout << "Vung nho cua ptr: " << ptr << endl;

		int iN = 10; // Giong nhu la nha cua ban be con tro. Thuoc vung nho stack

		ptr = &iN;
		cout << "Dia chi cua bien n la: " << &iN << endl;
		cout << "Vung nho ma con tro ptr dang tro toi la: " << ptr << endl;

		//delete ptr;
	}

	int* ptr1 = new int;

	if (ptr1 == nullptr)
	{
		cout << "Cap phat bo nho dong khong thanh cong." << endl;
		exit(0); // Dung han chuong trinh.
	}
	else
	{
		*ptr1 = 100;
		cout << "Gia tri cua con tro ptr1 la: " << *ptr1 << endl;
		delete ptr1;
		cout << "Gia tri cua con tro ptr1 la: " << *ptr1 << endl;
	}

	system("pause");
	return 0;
}

