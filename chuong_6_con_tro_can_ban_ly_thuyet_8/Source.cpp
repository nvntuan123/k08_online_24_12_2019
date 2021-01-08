// Hang con tro tro toi hang.

#include <iostream>

using namespace std;

int main()
{
	int iN = 10;
	const int* const iConstPtrConst = &iN;
	//*iConstPtrConst = 15; // Khong the thay doi gia tri cua no.
	//iConstPtrConst++; // Khong the thay doi dia chi cua no.

	int iM = 5;
	//iConstPtrConst = &iM; // Khong the thay doi vung nho cua no.

	cout << endl;
	system("pause");
	return 0;
}

