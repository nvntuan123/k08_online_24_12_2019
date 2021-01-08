#include <iostream>

using namespace std;

// Hoan vi 2 so nguyen.
void Swap(int* iA, int* iB) // C. Neu co dau & nay => la tham chieu, nguoc la tham tri
{
	int iTemp = (*iA);
	(*iA) = (*iB);
	(*iB) = iTemp;
}

//void Swap(int &iA, int &iB) // C++
//{
//	int iTemp = iA;
//	iA = iB;
//	iB = iTemp;
//}

int main()
{
	int iVarA = 2, iVarB = 3; // 2 bien nay deu co dia chi.
	/*
	Mot bien binh thuong se co 2 phan:
	1. Gia tri.
	2. Dia chi.
	VD: int iValue = 2;
	1. Lay gia tri bang cu phap sau: iValue.
	2. Lay dia chi cua bien bang cu phap sau: &iValue.
	*/
	cout << "Before swap a = " << iVarA << ", b = " << iVarB << endl;
	Swap(&iVarA, &iVarB);
	cout << "After swap a = " << iVarA << ", b = " << iVarB << endl;

	cout << endl;
	system("pause");
	return 0;
}

