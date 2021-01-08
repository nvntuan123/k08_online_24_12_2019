#include <iostream>

using namespace std;

void Swap(int& iA, int& iB)
{
	int iTemp = iA;
	iA = iB;
	iB = iTemp;
}

int SumAB(int iA, int iB)
{
	return iA + iB;
}

int main()
{
	//void(*FuncHoanVi)(int&, int&); // Khai bao con tro ham.
	void(*ptrSwap)(int&, int&) = Swap; // Khai tao con tro ham.
	/*cout << "Dia chi cua ham hoan vi: " << &HoanVi << endl;
	cout << "Dia chi con tro ham tro toi ham hoan vi: " << FuncHoanVi << endl;
	cout << "Dia chi cua con tro ham: " << &FuncHoanVi << endl;
	cout << "Gia tri cua con tro ham: " << (*FuncHoanVi) << endl;*/

	int iA = 2, iB = 3;
	cout << "Before swap: a = " << iA << ", b = " << iB << endl;
	//Swap(iA, iB);

	// Goi ham hoan vi bang con tro ham tuong minh.
	(*ptrSwap)(iA, iB);
	cout << "After swap expicit: a = " << iA << ", b = " << iB << endl;

	// Goi ham hoan vi bang con tro ham khong tuong minh.
	ptrSwap(iA, iB);
	cout << "After swap not expicit: a = " << iA << ", b = " << iB;

	/*int(*FuncPtrSum)(int, int) = SumAB;
	cout << "Dia chi con tro ham tro toi ham hoan vi: " << FuncPtrSum << endl;
	cout << "Dia chi cua con tro ham: " << &FuncPtrSum << endl;
	cout << "Gia tri cua con tro ham: " << (*FuncPtrSum);*/

	cout << endl;
	system("pause");
	return 0;
}

