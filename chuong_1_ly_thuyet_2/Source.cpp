#include <iostream>

using namespace std;

#define LUONGCOBAN (20000 * 5)
#define PI 3.14


int main()
{
	// Vùng nhớ STACK và vùng nhớ HEAP
	// STACK do chương trình quản lý.
	// HEAP do lập trình viên tự quản lý.
	const double luongcoban = 19500; // Hang so va se khong thay doi gia tri trong suot chuong trinh.

	double luongnv1, luongnv2, luongnv3;
	// Sử dụng const.
	//luongnv1 = 3 * luongcoban;
	////luongcoban = 195000;
	//luongnv2 = 5 * luongcoban;
	//luongnv3 = 10 * luongcoban;

	// Sử dụng define.
	luongnv1 = 3 * LUONGCOBAN;
	luongnv2 = 5 * LUONGCOBAN;
	luongnv3 = 10 * LUONGCOBAN;

	cout << "Luong co ban la: " << LUONGCOBAN << endl;
	cout << "Luong nhan vien 1 la: " << luongnv1 << endl;
	cout << "Luong nhan vien 2 la: " << luongnv2 << endl;
	cout << "Luong nhan vien 3 la: " << luongnv3 << endl;

	const double pi = 3.14;
	cout << "PI(define) = " << PI << endl;
	cout << "PI(not define) = " << pi;

	//cout << &LUONGCOBAN;

	cout << endl;
	system("pause");
	return 0;
}

