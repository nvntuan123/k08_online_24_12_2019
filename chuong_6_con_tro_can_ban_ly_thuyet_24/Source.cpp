#include <iostream>
#include <functional>

using namespace std;

void InputN(int* iN)
{
	do
	{
		cout << "Nhap vao so luong phan tu n = ";
		cin >> (*iN);

		if ((*iN) <= 0)
		{
			system("cls");
			cout << "Nhap sai, vui long nhap lai(n > 0)!" << endl;
		}
	} while ((*iN) <= 0);
}

// Nhap mang.
void ArrInput(int* iArr, int* iN)
{
	for (int i = 0; i < (*iN); ++i)
	{
		cout << "Nhap a[" << i << "] = ";
		cin >> *(iArr + i);
	}
}

// Xuat mang.
void ArrOutput(int* iArr, int* iN)
{
	for (int i = 0; i < (*iN); ++i)
	{
		cout << " " << *(iArr + i);
	}
	cout << endl;
}

void Swap(int& iA, int& iB)
{
	int iTemp = iA;
	iA = iB;
	iB = iTemp;
}

bool Descending(int iVar1, int iVar2) // Lon.
{
	return (iVar1 > iVar2);
}

bool Ascending(int iVar1, int iVar2) // Nho.
{
	return (iVar1 < iVar2);
}

bool evensFirst(int iLeft, int iRight)
{
	if (!(iLeft % 2) && (iRight % 2))
		return false;

	if ((iLeft % 2) && !(iRight % 2))
		return true;

	return Descending(iLeft, iRight);
}

//void selectionSortAscDesc(int *iArr, int *iN, bool (*Compar)(int, int) = Ascending)
//{
//	for (int i = 0; i < (*iN) - 1; ++i)
//	{
//		int iMinIndex = i;
//		for (int j = i + 1; j < (*iN); ++j)
//		{
//			if (Compar(*(iArr + iMinIndex), *(iArr + j)))
//				iMinIndex = j;
//		}
//		Swap(*(iArr + i), *(iArr + iMinIndex));
//	}
//}

void selectionSortAscDesc(int* iArr, int* iN, function<bool(int, int)> ptrCompar = Ascending)
{
	for (int i = 0; i < (*iN) - 1; ++i)
	{
		int iMinIndex = i;
		for (int j = i + 1; j < (*iN); ++j)
		{
			if (ptrCompar(*(iArr + iMinIndex), *(iArr + j)))
				iMinIndex = j;
		}
		Swap(*(iArr + i), *(iArr + iMinIndex));
	}
}

int main()
{
	// Con tro ham trong C++11.
	//void(*ptrFuncSwap) = Swap; // Chua co C++11.
	function<void(int&, int&)> ptrFuncSwap = Swap; // C++11
	int iA = 2, iB = 3;
	cout << "Before swap: a = " << iA << ", b = " << iB << endl;
	ptrFuncSwap(iA, iB);
	cout << "After swap: a = " << iA << ", b = " << iB << endl;

	int* iN = new int; // Cap phat vung nho dong cho bien n - tuc la so luong phan tu cua mang 1 chieu dong.
	InputN(iN);

	// Khai bao mang dong hay con goi la cap phat vung nho cho mang 1 chieu dong.
	int* iArr = new int[(*iN)]; // Cap phat vung nho dong cho mang 1 chieu.

	ArrInput(iArr, iN); // Truyen con tro vao ham.
	cout << endl << "Mang moi nhap vao la:";
	ArrOutput(iArr, iN);

	selectionSortAscDesc(iArr, iN);
	cout << endl << "Mang sau khi sap xep giam dan la:";
	ArrOutput(iArr, iN);

	selectionSortAscDesc(iArr, iN, Descending);
	cout << endl << "Mang sau khi sap xep tang dan la:";
	ArrOutput(iArr, iN);

	selectionSortAscDesc(iArr, iN, evensFirst);
	cout << endl << "Mang sau khi sap xep theo yeu cau la:";
	ArrOutput(iArr, iN);

	delete[] iArr; // Giai phong mang 1 chieu dong.
	delete iN; // Giai phong bien con iN.

	cout << endl;
	system("pause");
	return 0;
}

