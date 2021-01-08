/*
1) Nhập vào 1 số nguyên dương n. Tính.
a) S = 1 + 2 + … + n.
b) S = 1^2 + 2^2 + … + n^2.
c) S = 1 + 1/2 + … + 1/n.
d) S = 1 * 2 * … * n = n!.
e) S = 1! + 2! + … + n!.
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

	// Xu ly.
	/*
	a) S = 1 + 2 + … + n.
	n = 3.
	S = 0; // Gia tri luc dau.
	i = 1 => S += i, S1 = 0 + 1 = 1.
	i = 2 => S += i, S2 = S1 + i = 1 + 2 = 3.
	i = 3 => S += i, S3 = S2 + i = 3 + 3 = 6.
	S = 1 + 2 + 3 = 6.
	Chay vong lap for tu 1 -> n. Sau do ta tinh tong lan luot la cac bien i.
	*/

	int iSA = 0; // Tong 1 -> n.
	for (int i = 1; i <= n; i++)
	{
		iSA += i;
	}
	cout << "a) S = 1 + 2 + … + " << n << ": " << iSA << endl;

	/*
	b) S = 1^2 + 2^2 + … + n^2.
	n = 3.
	S0 = 0; // Gia tri luc dau.
	S1 = S0 + 1^2 = 1.
	S2 = S1 + 2^2 = 1 + 4 = 5.
	S3 = S2 + 3^2 = 5 + 9 = 14.
	S = 1 + 5 + 9 = 14.
	Chay vong lap for tu 1 -> n. Sau do ta tinh tong lan luot la cac bien i * i.
	*/
	int iSB = 0;
	for (int i = 1; i <= n; i++)
	{
		iSB += (i * i);
	}
	cout << "b) S = 1^2 + 2^2 + … + " << n << "^2: " << iSB << endl;

	/*
	c) S = 1 + 1/2 + … + 1/n.
	n = 3.
	S0 = 0; // Gia tri luc dau.
	S1 = S0 + 1/1 = 0 + 1 = 1.
	S2 = S1 + 1/2 = 1 + 1/2 = 3/2 = 1.5
	S3 = S2 + 1/3 = 1.5 + 1/3 = 1.8
	S = 1 + 0.5 + 0.3 = 1.8.
	Chay vong lap for tu 1 -> n. Sau do ta tinh tong lan luot la cac bien 1 / i.
	*/
	double iSC = 0;
	for (int i = 1; i <= n; i++)
	{
		iSC += (1 / static_cast<double>(i));
	}
	cout.precision(3); // 1.8 hay 1.5, 1.83
	//cout.precision(); // => xuat ra nhu mac dinh.
	cout << "c) S = 1 + 1/2 + … + 1/" << n << ": " << iSC << endl;
	//printf_s("c) S = 1 + 1/2 + … + 1/%d: %.2lf\n", n, iSC); // Cau lenh xuat trong C.

	/*
	d) S = 1 * 2 * … * n = n!.
	n = 3.
	S0 = 1; // Gia tri luc dau.
	S1 = S0 * 1 = 1 * 1 = 1.
	S2 = S1 * 2 = 1 * 2 = 2.
	S3 = S2 * 3 = 2 * 3 = 6.
	Chay vong lap for tu 1 -> n. Sau do ta tinh tong lan luot la cac bien i.
	*/
	int iSD = 1; // De y nhe.
	for (int i = 1; i <= n; i++)
	{
		iSD *= i;
	}
	cout << "d) S = 1 * 2 * … * n = " << n << "!: " << iSD << endl;

	/*
	e) S = 1! + 2! + … + n!.
	n = 4.
	S0 = 0; // Gia tri luc dau.
	S1 = 1! = 0 + 1 = 1.
	S2 = 1! + 2! = S1 + 2! = S1 + (1 * 2) = 1 + 2 = 3.
	S3 = (1! + 2!) + 3! = S2 + 3! = 3 + (1 * 2 * 3) = 3 + 6 = 9.
	S4 = (1! + 2! + 3!) + 4! = S3 + 4! = 9 + (1 * 2 * 3 * 4) = 9 + 24 = 33

	GiaiThua =
	S += GiaiThua.
	Chay vong lap for tu 1 -> n. Sau do ta tinh tong lan luot la cac bien i.
	*/
	int iSE = 0;
	for (int i = 1; i <= n; i++)
	{
		// Tinh giai cho moi lan lap cua bien i (chay vong lap for con tu 1 -> i).
		int iGiaiThua = 1;
		for (int j = 1; j <= i; j++)
		{
			iGiaiThua *= j;
		}
		iSE += iGiaiThua; // Tinh tong giai thua.
	}
	cout << "e) S = 1! + 2! + … + " << n << "!: " << iSE << endl;

	system("pause");
	return 0;
}

