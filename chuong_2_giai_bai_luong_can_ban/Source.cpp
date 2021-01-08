#include <iostream>

using namespace std;

int main()
{
	cout << "Chuong trinh tinh luong nhan vien theo TNCT." << endl;

	// B1: Input.
	const double dLuongCanBan = 670000;
	int iTNCT;
	double dHeso;

	cout << "Nhap vao TNCT: ";
	cin >> iTNCT;

	// B2: Xu ly.

	// Kiem tra TNCT co nhap vao gia tri <= 0.
	if (iTNCT <= 0)
	{
		cout << "Nhap sai, TNCT > 0! Vui long nhap lai" << endl;
	}
	else
	{
		if (iTNCT < 12)
			dHeso = 1.92;
		else if (iTNCT < 36)
			dHeso = 2.34;
		else if (iTNCT < 60)
			dHeso = 3;
		else
			dHeso = 4.5;
	}

	// B3: Output.
	double dLuongNV = dHeso * dLuongCanBan;
	cout << "He so luong cua nha vien la: " << dHeso << endl;
	cout.precision(19);
	cout << "Luong nhan vien la: " << dLuongNV << endl;

	cout << endl;
	system("pause");
	return 0;
}

