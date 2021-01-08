/*
1) Nhập vào 1 số nguyên dương n, đếm xem n có bao
nhiêu chữ số, tìm ra chữ số lớn nhất và nhỏ nhất.
VD: n = 123569
 Có 6 chữ số.
 Chữ số Max = 9, Min = 1.
*/

#include <iostream>

using namespace std;

int main()
{
	// Bat dieu kien nhap n.
	int n;
	do
	{
		cout << "Nhap vao 1 so nguyen duong n = ";
		cin >> n;

		if (n <= 0)
		{
			system("cls");
			cout << "Nhap sai, vui long nhap lai!" << endl;
		}
	} while (n <= 0); // Phu dinh cua truong hop (n > 0).

	// Xy ly.
	/*
	VD: n = 123569
	123569 % 10 = 9 // Lay phan du
	123569 / 10 = 12356 // Lay phan nguyen.

	12356 % 10 = 6 // Lay phan du
	12356 / 10 = 1235 // Lay phan nguyen.

	n % 10 = 9 // Lay phan du
	n = n / 10 // Lay phan nguyen.

	 Có 6 chữ số.
	 Chữ số Max = 9, Min = 1.
	*/
	int iTam = n;
	int iMax, iMin;
	iMax = -1;
	iMin = 10;
	int iDem = 0;

	while (iTam != 0)
	{
		int iChuSo = iTam % 10; // Lay ra chu so cuoi.
		iTam /= 10; // Loai bo chu so cuoi.

		iDem++;

		// Tim max.
		// Mac dinh max la so lon nhat, neu nhu co so nao lon hon no thi gan so do cho no.
		if (iChuSo > iMax)
			iMax = iChuSo; // Cap nhat lai bien iMax.

		// Tim min.
		// Mac dinh min la so nho nhat, neu nhu co so nao nho hon no thi gan so do cho no.
		if (iChuSo < iMin)
			iMin = iChuSo;
	}

	cout << n << " co " << iDem << " chu so" << endl;
	cout << "Max = " << iMax << endl;
	cout << "Min = " << iMin << endl;

	system("pause");
	return 0;
}

