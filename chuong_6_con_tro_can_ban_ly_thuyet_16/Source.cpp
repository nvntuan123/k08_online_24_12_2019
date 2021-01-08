#include <iostream>

using namespace std;

void InputN(int*& iN)
{
	do
	{
		cout << "Nhap vao so luong phan tu n = ";
		cin >> (*iN);

		if ((*iN) <= 0)
		{
			system("cls");
			cout << "Nhap sai, xin kiem tra lai(n > 0)!" << endl;
		}
	} while ((*iN <= 0));

	cout << "Before new int InputN Function iN = " << iN << endl;
	iN = new int; // Thay doi vung nho cua con tro iN => phai can co tham chieu nhe. Neu khong co tham chieu thi sai.
	cout << "After new int InputN Function iN = " << iN << endl;
}

int main()
{
	/*
	Mot bien con tro se co 3 phan:
	1. Gia tri.
	2. Dia chi.
	3. Dia chi ma con tro dang tro toi.
	VD: int *iValue = new int;
	1. Lay gia tri cua con tro bang cu phap sau: *iValue.
	2. Lay dia chi cua con tro bang cu phap sau: &iValue.
	3. Lay ra dia chi ma con dang tro toi hoac la vung nho ma con tro xin he dieu hanh(cap phat vung nho dong).
	*/
	int* iN = new int; // Bien luu so luong phan tu.

	cout << "Gia tri cua con tro *iN = " << (*iN) << endl;
	cout << "Dia chi cua con tro &iN = " << &iN << endl;
	cout << "Dia chi ma con tro toi hoac la vung nho duoc he dieu hanh cap phat iN: " << iN << endl;

	InputN(iN);

	cout << endl << "Gia tri cua con tro *iN = " << (*iN) << endl;
	cout << "Dia chi cua con tro &iN = " << &iN << endl;
	cout << "Dia chi ma con tro toi hoac la vung nho duoc he dieu hanh cap phat iN: " << iN << endl;

	//int *iArr = new int[(*iN)]; // Cap phat mang dong 1 chieu co so luong phan tu la iN.



	//delete[] iArr; // Thu hoi vung nho cua mang dong 1 chieu.

	delete iN; // Thu hoi lai bien iN.

	cout << endl;
	system("pause");
	return 0;
}

