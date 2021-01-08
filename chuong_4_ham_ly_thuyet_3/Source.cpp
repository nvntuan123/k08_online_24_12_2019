/*
Viết hàm đổi một ký tự hoa sang ký tự thường.
*/

#include <iostream>

using namespace std;

// Khai báo nguyên mẫu hàm.
void NhapKyTu(char&);
int BienDoiKyTu(char);

void XuatGiaTri(int& a)
{
	cout << "--------------- Dang Trong Ham Xuat Gia Tri ---------------" << endl;
	a++;
	cout << "Gia tri cua bien a: " << a << endl; // 2
	cout << "Dia chi cua bien a: " << &a << endl;
}

int main()
{
	// Khai bao
	//char x;

	//// Nhap vao ky tu.
	//NhapKyTu(x);
	//cout << "ky tu truoc khi bien doi: " << x << endl;

	//// Xu ly bien ky tu thuong thanh hoa hoac hoa thanh thuong.
	//x = BienDoiKyTu(x);
	//cout << "ky tu sau khi bien doi: " << x << endl;

	int a = 1;

	XuatGiaTri(a); // *.

	cout << "--------------- Dang Trong Ham Main ---------------" << endl;
	cout << "Gia tri cua bien a: " << a << endl; // 1
	cout << "Dia chi cua bien a: " << &a << endl;

	system("pause");
	return 0;
}

void NhapKyTu(char& cKytu)
{
	do
	{
		cout << "Nhap vao 1 ky la chu cai: ";
		cin >> cKytu;

		if ((cKytu < 97 || cKytu > 122) && (cKytu < 65 || cKytu > 90))
		{
			system("cls");
			cout << "Nhap sai, phai la ky tu chu. Vui long nhap lai!" << endl;
		}
	} while ((cKytu < 97 || cKytu > 122) && (cKytu < 65 || cKytu > 90));
}

int BienDoiKyTu(char cKytu)
{
	// Cách 1: cách mới vào đời.
	//char cKyTuBienDoi;
	//if ((cKytu >= 97) && (cKytu <= 122)) // Ky tu hoa => bien thanh ky tu thuong(-32).
	//	cKyTuBienDoi = cKytu - 32;
	//if ((cKytu >= 65) && (cKytu <= 90)) // Ky tu thuong => bien thanh ky tu hoa(+ 32).
	//	cKyTuBienDoi = cKytu + 32;

	//return cKyTuBienDoi;

	// Cách 2: cách đã trưởng thành. Ahihi.
	return (cKytu ^= (1 << 5));
}

