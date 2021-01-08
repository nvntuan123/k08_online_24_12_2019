#include <iostream>
/*
1) Nhập vào 2 số nguyên a, b. In ra màn hình kết quả số lớn nhất và nhỏ nhất.
*/

#include <cmath>

using namespace std;

int main()
{
	//int a, b;

	//cout << "Nhap vao a = ";
	//cin >> a;
	//cout << "Nhap vao b = ";
	//cin >> b;

	//// Su dung cau lenh dieu kien.
	//cout << "-----Su dung cau lenh dieu kien-----\n";
	//if (a > b)
	//{
	//	cout << "Max = " << a << endl;
	//	cout << "Min = " << b << endl;
	//}
	//else
	//{
	//	cout << "Max = " << b << endl;
	//	cout << "Min = " << a << endl;
	//}

	//// Su dung toan 3 ngoi.
	//cout << "-----Su dung toan tu 3 ngoi-----\n";
	//int iMax, iMin;
	//iMax = a > b ? a : b;
	//iMin = a < b ? a : b;
	//cout << "Max = " << iMax << endl;
	//cout << "Min = " << iMin << endl;
	//// <bieu thuc 1/bien1> ? <bieu thuc 2/bien 2> : <bieu thuc 3/bien 3>;

	int a = 4;
	cout << "Can " << a << " la: " << sqrt(a) << endl;
	cout << "Binh phuong cua " << a << " la: " << pow(a, 2) << endl;

	system("pause");
	return 0;
}

