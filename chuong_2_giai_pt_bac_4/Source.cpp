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
	/* Dat t = x^2 (t >= 0)
	t1 = x^2 <=> t1 = +-sqrt(x);
	*/
	if (iA == 0)
	{
		cout << "Giai phuong trinh bac 1" << endl;
	}
	else
	{
		cout.precision(17);
		double delta = (iB * iB) - (4 * iA * iC);
		if (delta > 0)
		{
			double t1 = (-iB + sqrt(delta)) / (2 * iA);
			double t2 = (-iB - sqrt(delta)) / (2 * iA);
			if (t1 < 0 && t2 < 0)
			{
				cout << "Phuong trinh vo nghiem" << endl;
			}

			// Xet rieng truong hop t1.
			if (t1 >= 0)
			{
				double x1 = sqrt(t1);
				double x2 = -x1;
				cout << "Phuong trinh co nghiem x1 = " << x1 << " & x2 = " << x2;
			}

			// Xeg rieng truong t2.
			if (t2 >= 0)
			{
				double x3 = sqrt(t2);
				double x4 = -x3;
				cout << ", x3 = " << x3 << " & x4 = " << x4 << endl;
			}
		}
		else if (delta == 0)
		{
			double t = (-iB) / (2 * iA);
			if (t < 0)
			{
				cout << "Phuong trinh vo nghiem." << endl;
			}
			else
			{
				double x1 = sqrt(t);
				double x2 = -x1;
				cout << "Phuong trinh nghiem x1 = " << x1 << " & x2 = " << x2 << endl;
			}
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

