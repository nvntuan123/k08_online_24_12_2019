// Khuon mau ham(Function Templates).

#include <iostream>

using namespace std;

// Viet chuong trinh hoan vi 2 so a va b.
template <class Var>
void HoanVi(Var& a, Var& b)
{
	Var iTemp = a;
	a = b;
	b = iTemp;
}

// Tim max tu 2 so a va b.
//template <class Var1, class Var2>
//Var2 max(Var1 a, Var2 b)
//{
//	return ((a > b) ? a : b);
//}

template <typename Var1, typename Var2>
Var2 max(Var1 a, Var2 b)
{
	return ((a > b) ? a : b);
}

// Tim max, min tu 4 so a, b, c, d. => Tu lam kho minh cho vui ti, la su dung toan tu 3 ngoi ma lam.
//template <class Var1, class Var2, class Var3, class Var4>
//Var2 max(Var1 a, Var2 b, Var3 c, Var4 d)
//{
//	return ((a > b) ? a : b);
//}

// Error
//void Func(int a)
//{
//	cout << "not const a = " << a << endl;
//}
//
//void Func(const int a)
//{
//	cout << "const a = " << a << endl;
//}

int main()
{
	// Kieu so nguyen.
	int a = 2, b = 3;
	cout << "=================Kieu Int=================" << endl;
	cout << "-----------------Truoc khi hoan vi-----------------" << endl;
	cout << "a = " << a << " - b = " << b << endl;
	HoanVi(a, b);
	cout << "-----------------Sau khi hoan vi-----------------" << endl;
	cout << "a = " << a << " - b = " << b << endl;

	// Kieu so thuc.
	double c = 2.5, d = 3.7;
	cout << "=================Kieu Double=================" << endl;
	cout << "-----------------Truoc khi hoan vi-----------------" << endl;
	cout << "c = " << c << " - d = " << d << endl;
	HoanVi(c, d);
	cout << "-----------------Sau khi hoan vi-----------------" << endl;
	cout << "c = " << c << " - d = " << d << endl;

	int iMax = max(7.5, 8); // Result = 8.
	double idMax = max(7.5, 8); // Result = 8.
	double dMax = max(7.5, 8.7);
	cout << endl << "iMax = " << iMax << endl;
	cout << "idMax = " << idMax << endl;
	cout << "dMax = " << dMax << endl;

	//Func(1);

	system("pause");
	return 0;
}

