#include <iostream> // Thư viện hỗ trợ việc nhập, xuất.

using namespace std;

int main()
{
	// ctrl + space
	cout << "So byte cua bien char la: " << sizeof(char) << endl;
	cout << "So byte cua bien short la: " << sizeof(short) << endl;
	cout << "So byte cua bien int la: " << sizeof(int) << endl;
	cout << "So byte cua bien long la: " << sizeof(long) << endl;

	char a = 65, b = 97;
	cout << "Ky tu a = " << a << endl;
	cout << "Ky tu b = " << b << endl;

	// Cach 1: Khai bao bien.
	int Tuoi, NamSinh; // <kieu du lieu> <ten bien>

	// Cach 2: Khoi tao bien. <kieu du lieu> <ten bien> = gia tri.
	int x = 5; // Khoi bien x co gia tri la 5 va kieu du lieu la so nguyen.

	cout << "Gia tri bien x = " << x << endl;
	cout << "Dia chi cua bien x = " << &x << endl;
	cout << "Do lon(byte) cua bien x = " << sizeof(x) << endl;

	int Temp; // Hop le
	//int 9name; // Khong hop le.
	//int double; // Khong hop le.
	//int Name-a; // Khong hop le.

	system("pause");
	return 0;
}

