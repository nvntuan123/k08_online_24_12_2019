// Con tro hang.

#include <iostream>

using namespace std;

void XyLy(const int* iArr, int iN)
{
	// Chi doc mang chu khong co nhu cau thay doi gia tri cua mang.
}

int main()
{
	const int iN = 10; // Bien hang.
	//int *iPtr = &iN; // Con tro thuong se khong tro duoc toi vung nho cua bien hang.
	const int* iPtr = &iN; // Hop le. Con tro hang moi co the tro toi vung nho cua bien hang.

	cout << "Dia chi cua bien hang iN la: " << &iN << endl;
	cout << "Vung nho tuc la dia chi con ptr dang tro toi: " << iPtr << endl;
	cout << "Gia tri cua con ptr dang tro toi bien hang iN la: " << *iPtr << endl;

	int iVar = 5; // Bien thuong.
	iPtr = &iVar; // Con tro hang co the tro toi bien khong phai la bien hang. No co the tro lung tung hay la thay doi dia chi(tuc la vung nho ma no dang tro toi).
	cout << endl << "Dia chi cua bien iVar la: " << &iVar << endl;
	cout << "Vung nho tuc la dia chi con ptr dang tro toi iVar: " << iPtr << endl;
	cout << "Gia tri cua con ptr dang tro toi bien iVar la: " << *iPtr << endl;

	iVar++; // OK
	iVar = 15; // OK

	//*iPtr = 15; // Error.
	//(*iPtr)++; // Error.
	iPtr++; // Ok, nhung se ra gia tri rac.

	//const int *iPtr = new int; // Khong hop le.
	//*iPtr = 10;

	//delete[] iPtr;

	cout << endl;
	system("pause");
	return 0;
}

