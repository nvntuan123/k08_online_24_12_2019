/*
Viết chương trình tính S = a! + b! + c! với a, b, c là 3 số nguyên dương nhập từ bàn phím.
*/

#include <iostream>

using namespace std;
//const int iLuongNhanVien = 65000;

/*
Lưu ý: khái niệm tham chiếu chỉ có trong C++, còn trong C là người ta sử dụng con trỏ.
*/

// Ham nhap so nguyen duong.
void NhapSoNguyenDuong(int& iN) // Neu khong co dau & truoc tren bien truyen vao => no la tham tri, ngược lại có dấu & trước tên biến => nó là tham chiếu.
{
	do
	{
		cout << "Nhap vao so nguyen duong: ";
		cin >> iN;

		if (iN <= 0)
		{
			system("cls");
			cout << endl << "Nhap sai, vui long nhap lai!" << endl;
		}
	} while (iN <= 0);

	//return; // Cai nay ket thuc thu tuc hay con goi la ham void.
}

int TinhGiaiThua(int iN) // Cách đặt tên hàm mỗi chữ cái đầu của mỗi từ đều viết hoa.
{
	int iS = 1;
	for (int i = 2; i <= iN; i++)
		iS *= i;
	return iS; // Du lieu tra ve phai cung kieu du lieu cua ham.
}

// <kieu du lieu> <Ten ham>(<danh sach tham so - neu co>)
// void <Ten ham>(<danh sach tham so - neu co>) => Goi quen mieng la ham void hay con co cach goi khac la thu tuc.

int main()
{
	// Khai bao.
	int iA, iB, iC; // Cách đặt tên biến iA(i - kiểu dữ liệu, A là tên của biến đó.)

	// Nhap 3 so nguyen duong.
	/*do
	{
		cout << "Nhap vao so nguyen duong: ";
		cin >> iA;

		if (iA <= 0)
		{
			system("cls");
			cout << endl << "Nhap sai, vui long nhap lai!" << endl;
		}
	} while (iA <= 0);

	do
	{
		cout << "Nhap vao so nguyen duong: ";
		cin >> iB;

		if (iB <= 0)
		{
			system("cls");
			cout << endl << "Nhap sai, vui long nhap lai!" << endl;
		}
	} while (iB <= 0);

	do
	{
		cout << "Nhap vao so nguyen duong: ";
		cin >> iC;

		if (iC <= 0)
		{
			system("cls");
			cout << endl << "Nhap sai, vui long nhap lai!" << endl;
		}
	} while (iC <= 0);*/

	NhapSoNguyenDuong(iA);

	/*NhapSoNguyenDuong(iB);
	NhapSoNguyenDuong(iC);*/

	//cout << "3 so vua nhap vao la: " << iA << ", " << iB << ", " << iC << endl;

	// Tinh S = a! + b! + c!.
	// Tinh a!.
	//int iSA = 1;
	//for (int i = 2; i <= iA; i++)
	//	iSA *= i;

	//// Tinh b!.
	//int iSB = 1;
	//for (int i = 2; i <= iB; i++)
	//	iSB *= i;

	//// Tinh a!.
	//int iSC = 1;
	//for (int i = 2; i <= iC; i++)
	//	iSC *= i;

	/*double iSA = TinhGiaiThua(iA);

	int iS = TinhGiaiThua(iA) + TinhGiaiThua(iB) + TinhGiaiThua(iC);
	cout << "S = " << iA << "! + " << iB << "! + " << iC << "! = " << iS << endl;*/

	system("pause");
	return 0;
}

