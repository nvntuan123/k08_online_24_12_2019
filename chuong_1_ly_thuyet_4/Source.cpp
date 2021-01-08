#include <iostream>

using namespace std;

int main()
{
	// Cau lenh phuc.
	//cout << "Ahihi" << endl; // Cau lenh don.

	// Cau lenh nhap cin.
	/*int a;
	cout << "Nhap vao bien a = ";
	cin >> a;

	cout << "Bien a sau khi nhap co gia tri la: " << a;

	int day, month, year;
	cout << "\nNhap vao ngay thang nam: ";
	cin >> day >> month >> year;

	cout << day << "/" << month << "/" << year;*/

	// Cau lenh xuat cout.

	/*char cArr[] = "Welcome to BeCodeching";
	cout << "Value of cArr is: " << cArr;*/

	/*cout << "Value of cArr is: " << "Welcome to BeCodeching\n";

	cout << "\a";
	cout << "\?" << " " << "\\";*/

	// Bieu thuc va toan tu gan.
	//int iA, iB, iC, iD;
	//iA = 10;
	//iB = iA;
	//iC = iA + iB;
	//iD = iA = iB = iC;

	//int value = 5;
	//value = value + 1; // tang bien value len 1. Viet cach nhin vao biet ngay la nguoi moi hoc lap trinh.
	//value += 1; // Day la cach viet ngan gon. Nhin vao biet ngay la nguoi hoc lap trinh da lau duoc 1 ti.
	//value = value - 1;
	//value -= 1; // Day la cach viet ngan gon.
	//value = value * 1;
	//value *= 1; // Day la cach viet ngan gon.
	//value = value / 1;
	//value /= 1; // Day la cach viet ngan gon.
	//value = value % 1;
	//value %= 1;

	// Toan tu 1 ngoi.
	/*int x = 9, y = 14;
	cout << "x++ = " << x++ << endl;
	cout << "x sau khi tang len 1 don vi la: " << x << endl;
	cout << "++y = " << ++y;*/

	// Toan tu 2 ngoi.
	/*int e = 1 % 2;
	cout << "e = " << e << endl;*/

	// Ep trong C.
	//float f = 1.0 / 2; // 0.5
	//float f = 1 / 2.0; // 0.5
	//float f = 1.0 / 2.0; // 0.5
	//float f = (float)1 / 2; // 0.5
	//float f = 1 / (float)2; // 0.5
	//float f = (float)1 / (float)2; // 0.5
	//float f = float(1 / 2); // 0.5
	//cout << "f = " << f;

	// Ep kieu trong C++ cung tuong tu trong c, va chi thay doi cu phap la su dung static_cast.
	//float fA;
	//fA = static_cast<float>(1) / 2; // 0.5
	//cout << "fA(1 / 2) = " << fA;

	// Toan tu quan va toan luan ly.
	/*bool bA = (1 > 2) && (3 > 4);
	cout << "bA = " << bA << endl;

	bool bB = (1 > 2) || (3 > 2);
	cout << "bB = " << bB << endl;

	bool bC = !(2 > 1);
	cout << "bC = " << bC;*/

	// Toan tu 3 ngoi.
	/*int iA = (2 > 1) ? 2019 : 2020;
	cout << "iA = " << iA << endl;*/

	// Do uu tien cua cac toan tu.
	//int iA = 9 + 3 * 4 / 2; // Ko nen.
	int iA = 9 + ((3 * 4) / 2); // Nen su dung cach nay la ok nhat.
	cout << "iA = " << iA << endl;

	//int iB = 3 * 2 * 4; // K nen su dung cach nay.
	int iB = (3 * 2) * 4; // Nen su dung cach nay.
	cout << "iB = " << iB;

	cout << endl; // End line.
	system("pause");
	return 0;
}

