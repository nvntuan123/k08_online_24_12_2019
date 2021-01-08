#include <iostream>

using namespace std;

int main()
{
	// B1: input.
	int iA, iB, iC, iD;
	cout << "Nhap vao a = ";
	cin >> iA;
	cout << "Nhap vao b = ";
	cin >> iB;
	cout << "Nhap vao c = ";
	cin >> iC;
	cout << "Nhap vao d = ";
	cin >> iD;

	// B2: Xu ly.
	/* B2.1: So sanh 2 so a và b.
		B2.1.1: a > b => Max = a. Ngược lại Max = b.
		B2.1.2: Max < c => Max = c. Ngược lại.
		B2.1.3: Max < d => Max = d. Ngược lại.
		Tìm min tương tự tìm max.

	VD: 1 2 3 4
		a b c d
	Max = a = 1
	Max = b = 2
	Max = c = 3.
	Max = d = 4.

	Min = a = 1.
	*/
	int iMax, iMin;
	iMax = iMin = iA;
	if (iMax < iB) // So max voi b.
		iMax = iB; // Neu max < b => cập nhật lại max = b.
	if (iMax < iC)
		iMax = iC; // Neu max < c => cập nhật lại max = c.
	if (iMax < iD)
		iMax = iD; // Neu max < c => cập nhật lại max = c.

	if (iMin > iB) // So min voi b.
		iMin = iB; // Neu min < b => cập nhật lại min = b.
	if (iMin > iC)
		iMin = iC; // Neu min < c => cập nhật lại min = c.
	if (iMin > iD)
		iMin = iD; // Neu min < c => cập nhật lại min = c.

	// B3: Output.
	cout << "Max = " << iMax << endl;
	cout << "Min = " << iMin;

	cout << endl;
	system("pause");
	return 0;
}

