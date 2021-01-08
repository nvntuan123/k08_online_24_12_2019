#include <iostream>

using namespace std;

int main()
{
	int n = 5;
	cout << "Gia tri cua bien n la: " << n << endl;
	cout << "Dia chi cua bien n la: " << &n << endl;

	int* ptr; // Khai bao.
	ptr = &n; // Con tro ptr tro toi dia chi cua bien n.

	n++; // Toan 1 ngoi tren bien binh thuong.

	cout << endl << "Gia tri cua con tro ptr: " << *ptr << endl;
	cout << "Dia chi cua con tro ptr: " << &ptr << endl;
	cout << "Vung nho ma con tro ptr dang tro den la: " << ptr << endl;
	cout << "Kich thuoc cua con tro ptr la: " << sizeof(ptr) << endl;

	//ptr++; // Toan tu 1 ngoi tren con tro.
	//cout << "Vung nho ma con tro ptr dang tro den sau khi ++ la: " << ptr << endl;
	//ptr--;
	//cout << "Vung nho ma con tro ptr dang tro den sau khi -- la: " << ptr << endl;

	//ptr = ptr + 5;
	//cout << "Vung nho ma con tro ptr dang tro den sau khi + 5 la: " << ptr << endl;
	//ptr = ptr - 3;
	//cout << "Vung nho ma con tro ptr dang tro den sau khi - 5 la: " << ptr << endl;

	//(*ptr)++; // No se thuc ptr++ roi no moi gan * vao ptr
	* ptr++;
	cout << endl << "Gia tri cua con tro ptr sau khi ++: " << *ptr << endl;
	cout << "Gia tri cua bien n la: " << n << endl;

	//int *ptr1;
	//ptr = n; // Khong hop le.
	//ptr = ptr1; // Hop le.

	system("pause");
	return 0;
}

