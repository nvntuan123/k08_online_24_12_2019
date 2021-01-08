// Nap chong ham(Function Overloading).

#include <iostream>

using namespace std;

// Tim max tu 2 so a va b kieu la kieu so nguyen.
int max(int a, int b)
{
	/*if (a < b)
	return b;
	return a;*/
	return ((a > b) ? a : b);
}

// Tim max tu 2 so a va b kieu la kieu so thuc.
float max(float a, float b)
{
	return ((a > b) ? a : b);
}

// Tim max tu 2 so a va b kieu la kieu so thuc.
double max(double a, double b)
{
	return ((a > b) ? a : b);
}

int main()
{
	int iMax = max(7, 8);
	float fMax = max(7.5, 8.7);
	double dMax = max(7.55, 8.77);

	//int iMax1 = ((7 > 8) > 9) ? 7 : 8;
	// <(bieu thuc hoac bien)1 ss (bieu thuc hoac bien)2> ? (bieu thuc hoac bien)1 : (bieu thuc hoac bien)2
	cout << "int: iMax = " << iMax << endl;
	cout << "float: fMax = " << fMax << endl;
	cout << "double: dMax = " << dMax << endl;

	system("pause");
	return 0;
}

