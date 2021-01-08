#include <iostream>

using namespace std;

int main()
{
	int iSoLuong; // snake
	double dDonGia;

	cout << "Nhap vao so luong: "; // Phai ra cau nay de nguoi ho biet minh dang nhap cai gi.
	//cin >> iSoLuong >> dDonGia; // Khong nen su dung kieu ta dao nhu the nay nhe. :D
	cin >> iSoLuong;
	cout << "Nhap vao don gia: ";
	cin >> dDonGia;

	double dTien = iSoLuong * dDonGia;
	cout << "Tien = " << dTien << endl;

	double dVAT = 0.1 * dTien;
	cout << "VAT = " << dVAT << endl;

	// Canh dong: ctrl + K + F.

	system("pause");
	return 0;
}

