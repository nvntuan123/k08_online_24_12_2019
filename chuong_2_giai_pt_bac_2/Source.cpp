#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	// B1: Input.
	int iA, iB, iC;

	// Nhap a, b, c.
	cout << "Nhap a = ";
	cin >> iA;
	cout << "Nhap b = ";
	cin >> iB;
	cout << "Nhap c = ";
	cin >> iC;
	// B2: Xu ly.
	/* B2.1: Xet a = ?
		2.1.1: a = 0 => giai pt bac 1.
		2.1.2: a != 0 => xet tiep b = ?
		- Neu b = 0 => ax^2 + c = 0.
		- Neu b != 0 => tinh delta.
		2.1.3: Xet delta ?
		- Neu delta > 0 => tinh x1 = (-b + sqrt(delta)) / (2 * a)
								x2 = (-b - sqrt(delta)) / (2 * a)
		- Neu delta == 0 => x1 = x2 = -b / (2 * a).
		- Neu delta < 0 => pt vo nghiem.
	*/
	if (iA == 0)
	{
		cout << "Giai phuong trinh bac 1" << endl;
	}
	else
	{
		double delta = (iB * iB) - (4 * iA * iC);
		if (delta > 0)
		{
			double x1 = (-iB + sqrt(delta)) / (2 * iA);
			double x2 = (-iB - sqrt(delta)) / (2 * iA);
			cout << "Phuong trinh co 2 nghiem phan biet x1 = " << x1 << " & x2 = " << x2;
		}
		else if (delta == 0)
		{
			double x = (-iB) / (2 * iA);
			cout << "Phuong trinh nghiem kep x1 = x2 = " << x << endl;
		}
		else
		{
			cout << "Phuong trinh vo nghiem" << endl;
		}
	}

	// B3: Output.

	system("pause");
	return 0;
}

