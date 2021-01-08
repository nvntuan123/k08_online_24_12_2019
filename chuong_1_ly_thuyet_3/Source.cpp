#include <iostream> // Thu ho tro nhap, xuat du lieu.

#define LUONGCANBAN 2000
#define PI 3.14

using namespace std;

int main()
{
	//cout << "So byte kieu char la: " << sizeof(char) << " byte" << endl;
	//cout << "So byte kieu short la: " << sizeof(short) << " byte" << endl;
	//cout << "So byte kieu int la: " << sizeof(int) << " byte" << endl;
	//cout << "So byte kieu long la: " << sizeof(long) << " byte" << endl;

	//cout << "So byte kieu unsigned char la: " << sizeof(unsigned char) << " byte" << endl;
	//cout << "So byte kieu unsigned short la: " << sizeof(unsigned short) << " byte" << endl;
	//cout << "So byte kieu unsigned int la: " << sizeof(unsigned int) << " byte" << endl;
	//cout << "So byte kieu unsigned long la: " << sizeof(unsigned long) << " byte" << endl;

	//float a = 5.1234567;
	//float b = 5.12345678; // float chi chua toi da 6 so le.
	//double c = 5.123456789; // 19

	//printf("a = %f\n", a);
	//printf("b = %.10f\n", b);
	//printf("c = %.7lf\n\n", c);

	//cout << "a(float) = " << a << endl;
	//cout << "b(float) = " << b << endl;
	//cout << "c(double) = " << c << endl;

	//char kytuA = 65, kytua = 97;
	//cout << "kytuA = " << kytuA << endl;
	//cout << "kytua = " << kytua << endl;

	//// Khai bao bien.
	//int a; // CT quan ly. Thuoc vung STACK.
	//a = 10;
	//cout << "Gia tri cua bien a la: " << a << endl; // in ra gia tri cua a
	//cout << "Dia chi cua bien a la: " << &a << endl; // in ra dia chi hay con goi la vung nho cua bien a.
	//cout << "So byte cua bien a la: " << sizeof(a) << endl; // so byte cua bien a.

	//int *c = new int; // Dev quan ly. Thuoc vung nho HEAP.
	//// Xu ly gi do.
	//delete c; // giai phong con tro.

	//// Khoi tao bien.
	//int b = 5;
	//cout << "Gia tri cua bien b la: " << b << endl; // in ra gia tri cua b
	//cout << "Dia chi cua bien b la: " << &b << endl;
	//cout << "So byte cua bien b la: " << sizeof(b) << endl;

	//int Temp9; // Hop.
	//int 9name; // Khong hop le.
	//int sizeof; // Khong hop le.
	//int _Temp; // Hop le.
	//int Temp-a; // Khong hop le.

	//int LuongNV1, LuongNV2, LuongNV3, LuongNV4, LuongNV5;

	//// const.
	//const int LuongCanBan = 1500; // Bien nay khong duoc thay doi nhe. Thay doi la chet day.

	//// Tinh luong nhan vien.
	////LuongNV1 = 2 * LuongCanBan;
	////LuongNV2 = 3 * LuongCanBan;
	//////LuongCanBan = LuongCanBan + 1500; // Cap nhat lai luong can ban => sai.
	////LuongNV3 = 4 * LuongCanBan;
	////LuongNV4 = 5 * LuongCanBan;
	////LuongNV5 = 7 * LuongCanBan;

	//// #define.
	////LuongNV1 = 2 * LUONGCANBAN;
	////LuongNV2 = 3 * LUONGCANBAN;
	////LUONGCANBAN = LUONGCANBAN * 3; // Cap nhat lai luong can ban => sai.
	////LuongNV3 = 4 * LUONGCANBAN;
	////LuongNV4 = 5 * LUONGCANBAN;
	////LuongNV5 = 7 * LUONGCANBAN;

	//const float iPI = 3.14;
	//cout << "Gia tri cua bien iPI(const) = " << iPI << endl;
	//cout << "Dia chi cua bien iPI(const) = " << &iPI << endl;
	//cout << "PI(#define) = " << PI << endl;

	// Cau lenh nhap.
	/*int value;
	cin >> value;
	cout << "Value = " << value << endl;*/

	//int day, month, year;
	//cin >> day >> month >> year; // Cach nay chi nen tham khao cho biet thoi, khong nen su dung cach nay trong lap trinh.
	//cout << day << "/" << month << "/" << year << endl;

	// Cau lenh xuat.
	/*cout << "Ahihi" << endl;
	char cArr[] = "Welcome to BeCodeching";
	cout << "Value of str is: " << "\t" << cArr << "\n";
	cout << "Value of str is: " << "Welcome to BeCodeching" << endl;*/

	//int a = 10, b;
	//b = a;
	//int Tong = a + b;
	//int Nhan = 2 * 3;

	//int cong, tru, nhan, chia;
	//cong = tru = nhan = chia = 10;

	//int luongcanban = 5;
	//luongcanban = luongcanban + 5; // luongcanban += 5;
	//luongcanban += 5;

	//luongcanban = luongcanban - 5; // Nhin vao kieu nay la bit ng lap trinh moi hoc hay con la nhap mon.
	//luongcanban -= 5; // Nhin vao kieu nay la bit nguoi hoc trinh da lau. La da qua thoi ky nhap mon.

	//int a = 5, b = 10;
	//cout << "a = " << a++ << endl; // Xuat a = 5 roi moi tang a len 1 don la a = 6.
	//cout << "a sau khi tan len 1 don vi la: " << a << endl; // Xuat a = 6;
	//cout << "b = " << ++b << endl; // Tang bien b len 11 roi moi xuat ra bien b.

	/*cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "a + b = " << a + b << endl;
	cout << "a - b = " << a - b << endl;
	cout << "a * b = " << a * b << endl;*/

	// Ep kieu ben C.
	//cout << "a / b = " << (float)a / b << endl; // Cach 1.
	//cout << "a / b = " << a / (float)b << endl; // Cach 2.
	//cout << "a / b = " << (float)a / (float)b << endl; // Cach 3.
	//cout << "a / b = " << float(a / b) << endl; // Khong hop le.

	// Ep kieu ben C++.
	//cout << "a / b = " << static_cast<float>(a) / b << endl; // Cach 1.
	//cout << "a / b = " << a / static_cast<float>(b) << endl; // Cach 2.
	//cout << "a / b = " << static_cast<float>(a) / static_cast<float>(b) << endl; // Cach 3.  0.5
	//cout << "a / b = " << static_cast<float>(a / b) << endl; // Khong hop le. 0

	// Toan tu tren bit
	// Toan tu &
	//cout << "Toan tu &" << endl;
	//bool bA = (false & false); // 0
	//cout << "bA = " << bA << endl;
	//bA = (false & true); // 0
	//cout << "bA = " << bA << endl;
	//bA = (true & false); // 0
	//cout << "bA = " << bA << endl;
	//bA = (true & true); // 1
	//cout << "bA = " << bA << endl;

	//cout << "------------------------------------------------";

	//// Toan tu |
	//cout << "\nToan tu |" << endl;
	//bool bB = (false | false); // 0
	//cout << "bB = " << bB << endl;
	//bB = (false | true); // 1
	//cout << "bB = " << bB << endl;
	//bB = (true | false); // 1
	//cout << "bB = " << bB << endl;
	//bB = (true | true); // 1
	//cout << "bB = " << bB << endl;

	//int c = 12; // He thap phan.
	//// 12
	//// 128 64  32  16  8   4   2   1
	//// 2^7 2^6 2^5 2^4 2^3 2^2 2^1 2^0
	//// 0   0   0   0   0   0   0   0
	//// 0   0   0   0   0   1   1   0 // 12
	//// 0   0   0   0   0   1   0   1 // 3

	int a = 9 + ((3 * 4) / 2);
	cout << "a = " << a << endl;

	int b = (3 * 2) * 4;
	cout << "b = " << b << endl;

	//cout << endl;
	system("pause");
	return 0;
}

