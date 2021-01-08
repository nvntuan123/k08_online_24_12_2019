// Con tro va tham so cua ham.

#include <iostream>

using namespace std;

void In(int* iPtr)
{
	cout << "Value = " << *iPtr << endl;
	cout << "Dia chi cua bien value trong ham In: " << &iPtr << endl;
	cout << "Dia chi cua bien value trong ham In: " << iPtr << endl;

	*iPtr = 15;
}

// Ben ngon ngu C khong co khai niem tham chieu. Khai niem tham chieu chi co ben C++.
void SwapInC(int* iVar1, int* iVar2)
{
	int iTemp = *iVar1;
	*iVar1 = *iVar2;
	*iVar2 = iTemp;
}

void ArrOutput(int* iArr, int iN) // Ham nay chi co nhiem la xuat ra cac gia tri tung phan tu cua mang 1 chieu.
{
	*(iArr + 1) = 99; // Sai nhe.
	for (int i = 0; i < iN; ++i)
	{
		//cout << " " << iArr[i]; // Cach truyen thong.
		cout << " " << *(iArr + i); // Cach dung nghia voi pointer.
	}
	cout << endl;
}

int main()
{
	int iValue = 10;
	cout << "Dia chi cua bien value trong ham main: " << &iValue << endl;
	In(&iValue);
	cout << "Gia tri cua bien value trong ham main: " << iValue << endl;

	// Cach hoan vi ben C.
	int iA = 2, iB = 3;
	cout << "Before iA = " << iA << ", iB = " << iB << endl;
	SwapInC(&iA, &iB);
	cout << "After iA = " << iA << ", iB = " << iB << endl;

	// Truyen dia chi cua mang 1 chieu.
	int iArr[]{ 1, 2, 3, 4, 5 }; // Cach khoi tao khi C++11 ra doi, don gian hon rat nhieu.

	// Neu chua co C++11 thi ta se khoi tao kieu nay nek. Met lam.
	int iArr1[5];
	iArr1[0] = 1;
	iArr1[1] = 2;
	iArr1[2] = 3;
	iArr1[3] = 4;
	iArr1[4] = 5;

	//sizeof(int); // 4
	//sizeof(iArr); // 20.
	//cout << "So luong phan tu cua mang arr: " << sizeof(iArr) / sizeof(int) << endl;
	ArrOutput(iArr, sizeof(iArr) / sizeof(int));

	cout << endl;
	system("pause");
	return 0;
}

