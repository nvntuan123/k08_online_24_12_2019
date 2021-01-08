#include <iostream>

using namespace std;

void NhapN(int*& iN)
{
	do
	{
		cout << "Nhap vao so luong phan tu n = ";
		cin >> *(iN);

		if ((*iN) <= 0)
		{
			system("cls");
			cout << "Nhap sai, xin vui long nhap(n > 0)!" << endl;
		}
	} while ((*iN) <= 0);

	delete iN; // Thu hoi lai vung nho truoc khi xin cap phat vung nho moi.
	iN = new int; // Xin cap phat vung nho moi. La Vung nho B he dieu hanh cap phat cho bien con tro iN.
	(*iN) = 10;
}

int main()
{
	int* iN = new int; // Vung nho A he dieu hanh cap phat cho bien con tro iN.

	cout << "Before iN = " << iN << endl; // Neu khong co tham chieu => Dia chi = A.
	cout << "*iN = " << (*iN) << endl;

	NhapN(iN);

	cout << "After iN = " << iN << endl; // Neu khong co tham chieu => Dia chi = A.
	cout << "*iN = " << (*iN);

	delete iN; // Thu hoi vung nho.

	cout << endl;
	system("pause");
	return 0;
}

