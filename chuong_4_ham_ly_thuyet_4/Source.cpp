#include <iostream>

using namespace std;

// Tim max tu 2 so a va b kieu la kieu so nguyen.
int maxInt(int a, int b)
{
	/*if (a < b)
		return b;
	return a;*/
	return ((a > b) ? a : b);
}

// Tim max tu 2 so a va b kieu la kieu so thuc.
float maxFloat(float a, float b)
{
	return ((a > b) ? a : b);
}

// Tim max tu 2 so a va b kieu la kieu so thuc.
double maxDouble(double a, double b)
{
	return ((a > b) ? a : b);
}

int main()
{
	int a, b;
	cout << "Nhap a = ";
	cin >> a;
	cout << "Nhap b = ";
	cin >> b;

	int iMax = maxInt(a, b);
	float fMax = maxFloat(7.5, 8.7);
	double dMax = maxDouble(7.55, 8.77);

	//int iMax1 = ((7 > 8) > 9) ? 7 : 8;
	// <(bieu thuc hoac bien)1 ss (bieu thuc hoac bien)2> ? (bieu thuc hoac bien)1 : (bieu thuc hoac bien)2
	cout << "int: iMax = " << iMax << endl;
	cout << "float: fMax = " << fMax << endl;
	cout << "double: dMax = " << dMax << endl;

	system("pause");
	return 0;
}

