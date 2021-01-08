#include <iostream>

using namespace std;

int main()
{
	double a, b;

	cout << "Giai phuong trinh bat 1: ax + b = 0" << endl;

	// B1: nhap a, b.
	cout << "Nhap vao a = ";
	cin >> a;
	cout << "Nhap vao b = ";
	cin >> b;

	//B2: Xu ly.
	//if (a == 0) // Neu moi hoc lap trinh se ghi nhu the nay.
	if (!a) // Truong hop a == 0
	{
		if (!b) // TH b = 0.
		{
			cout << "PT vo so nghiem." << endl;
		}
		else // TH b != 0.
		{
			cout << "PT vo nghiem." << endl;
		}
	}
	else // TH a != 0.
	{
		double x = -b / a;
		cout << "Phuong trinh co nghiem x = " << x << endl;
	}

	//B3: Xuat x = ?

	system("pause");
	return 0;
}

