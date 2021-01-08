// Con tro va kieu tra ve cua ham.

#include <iostream>
#include <Windows.h>

using namespace std;

// Tham so mac dinh
void printValue(int iValue1, int iValue2, int iValue3 = 15)
{
	cout << "Value1 = " << iValue1 << endl;
	cout << "Value2 = " << iValue2 << endl;
	cout << "Value3 = " << iValue3 << endl;
}

int* ReturnAddress(int iValue = 0)
{
	// Bien iMyValue la bien cuc bo.
	//int iMyValue = iValue;
	//return &iMyValue; // => Cai nay loi rat nghiem trong nha.
	return new int(iValue); // Cai nay moi dung nek.
}

int main()
{
	printValue(2, 3);

	int* iPtr = ReturnAddress(10);
	cout << *iPtr << endl; // Loi rat la nghiem trong.
	Sleep(5000);
	cout << *iPtr << endl; // Loi rat la nghiem trong.

	cout << endl;
	system("pause");
	return 0;
}

