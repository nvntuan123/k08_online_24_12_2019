#include <iostream>

using namespace std;

int main()
{
	// Con tro tro den con tro.

	int iValue = 5; // Huy om nek.
	int* iPtr = &iValue; // Huy map nek.
	int** iPtrToiPtr = &iPtr; // OK. Kien nek.

	cout << "==================== **iPtrToiPtr(Con tro cap 2) - Kien ===================" << endl;
	cout << "Gia tri cua iPtrToPtr = " << **iPtrToiPtr << endl;
	cout << "Dia chi cua iPtrToPtr = " << &iPtrToiPtr << endl;
	cout << "Vung nho 1 cua iPtrToPtr(&iPtr) = " << iPtrToiPtr << endl;
	cout << "Vung nho 2 cua iPtrToPtr(&iValue) = " << *iPtrToiPtr << endl;
	cout << "====================================================" << endl;

	cout << "======================= iValue(Bien thuong) - Huy Om =======================" << endl;
	cout << "iValue = " << iValue << endl;
	cout << "&iValue = " << &iValue << endl;
	cout << "====================================================" << endl;

	cout << "======================= iPtr(Con tro cap 1) - Huy Map =======================" << endl;
	cout << "Gia tri cua iPtr = " << *iPtr << endl;
	cout << "&iPtr = " << &iPtr << endl;
	cout << "iPtr = " << iPtr << endl;
	cout << "====================================================" << endl;

	//int **iPtrToiPtr = iPtr; // Error
	//int **iPtrToiPtr = iValue; // Error
	//int **iPtrToiPtr = &iValue; // Error
	//int **iPtrToiPtr = *iPtr; // Error

	cout << endl;
	system("pause");
	return 0;
}

