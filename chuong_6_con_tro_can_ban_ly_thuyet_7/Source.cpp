// Hang con tro.

#include <iostream>

using namespace std;

int main()
{
	int iN = 10;
	const int* iPtr; // Con tro hang.
	iPtr = &iN;
	iPtr++; // Hop le.
	//(*iPtr) = 15; // Con tro hang khong the thay doi gia tri o vung nho ma no dang tro toi.

	int iVar = 5;
	int* const iPtrConst = &iVar; // Hang con tro, no khac con tro hang o cho la khi khai bao thi phai khoi tao lun ngay lap tuc cho no, neu khong se bi loi.
	//iPtrConst++; // Khong hop le. Hang con tro khong the thay doi vung nho cua no. Khi ta khoi tao thi dia chi ma no tro toi se co dinh ngay luc khoi tao do lun.
	*iPtrConst = 15; // Hang con tro thi co the thay doi gia tri o vung nho ma no dang tro toi.
	cout << "*iPtrConst = " << *iPtrConst << endl;
	cout << "iVar = " << iVar << endl;
	int iM = 1;
	//iPtrConst = &iM; // Error. Vi hang con tro dia chi cua no la co dinh.

	// Mang 1 chieu tinh no la hang con tro => no khong the thay dia chi cua no.
	int iArr[]{ 1, 2, 3 };
	cout << "Before a[0] = " << iArr[0] << endl;
	iArr[0] = 10; // Thay doi gia tri => OK.
	cout << "After a[0] = " << iArr[0] << endl;

	//(iArr + 1)++; // Thay doi dia chi => Error. Vi mang 1 chieu tinh la hang con tro.

	cout << endl;
	system("pause");
	return 0;
}

