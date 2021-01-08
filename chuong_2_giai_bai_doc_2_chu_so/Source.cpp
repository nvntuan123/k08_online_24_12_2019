#include <iostream>

using namespace std;

int main()
{
	cout << "Chuong trinh doc 1 so co 2 chu so." << endl;

	// B1: Input.
	int iSo;
	cout << "Nhap vao so co 2 chu so: ";
	cin >> iSo;

	// B2: Xu ly.
	/*
	VD: 12 => muoi hai.
		27 => hai muoi bay.
		25 => hai muoi lam - nam.
		15 => muoi lam.
		5 => nam.
		11 => Mười một
		1 => Một.
		51 => Năm mươi mốt.

	15 % 10 = 5;

	Xet xem so da nhap vao co phai la 2 chu so hay khong.
	Neu khong => nhap sai.
	Neu dung => xu ly tiep.
	log10(iSo) + 1;
	*/
	int iDonVi, iChuc;
	iDonVi = iSo % 10; // Lay ra hang don vi.
	iChuc = iSo / 10; // Lay ra phan chuc.

	/*cout << "Don vi = " << iDonVi << endl;
	cout << "Chuc = " << iChuc << endl;*/

	int iChuSo = log10(iSo) + 1; // Cach nhan biet so co bao nhieu chu so.
	if (iChuSo > 2)
	{
		cout << "Nhap sai, vui long nhap lai" << endl;
	}
	else
	{
		// Hang chuc.
		if (iChuc == 1)
		{
			cout << "Muoi ";
		}
		else if (iChuc == 2)
		{
			cout << "Hai muoi ";
		}
		else if (iChuc == 3)
		{
			cout << "Ba muoi ";
		}
		else if (iChuc == 4)
		{
			cout << "Bon muoi ";
		}
		else if (iChuc == 5)
		{
			cout << "Nam muoi ";
		}
		else if (iChuc == 6)
		{
			cout << "Sau muoi ";
		}
		else if (iChuc == 7)
		{
			cout << "Bay muoi ";
		}
		else if (iChuc == 8)
		{
			cout << "Tam muoi ";
		}
		else if (iChuc == 9)
		{
			cout << "Chin Muoi ";
		}

		// Hang don vi.
		if (iDonVi == 1)
		{
			cout << "mot";
		}
		else if (iDonVi == 2)
		{
			cout << "hai";
		}
		else if (iDonVi == 3)
		{
			cout << "ba";
		}
		else if (iDonVi == 4)
		{
			cout << "bon";
		}
		else if (iDonVi == 5)
		{
			if (iChuc) // Hang chuc != 0.
			{
				cout << "lam";
			}
			else
			{
				cout << "Nam";
			}
		}
		else if (iDonVi == 6)
		{
			cout << "sau";
		}
		else if (iDonVi == 7)
		{
			cout << "bay";
		}
		else if (iDonVi == 8)
		{
			cout << "tam";
		}
		else
		{
			cout << "chin";
		}
	}

	// B3: Output.

	cout << endl;
	system("pause");
	return 0;
}

