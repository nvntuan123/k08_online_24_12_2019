#include <iostream>
#include <vector> // Thu vien ho tro kieu du lieu vector.
#include <iomanip>

using namespace std;

// Nhap mang 1 chieu kieu vector.
void arrayInput(vector<int>& iArr, int iN = 5)
{

	for (int i = 0; i < iN; ++i)
	{
		cout << "Nhap a[" << i << "] = ";
		// Cach 1:
		cin >> iArr[i];

		// Cach 2:
		/*int iTemp;
		cin >> iTemp;
		iArr.push_back(iTemp);*/
	}
}

// Xuat mang 1 chieu kieu vector.
void arrayOutput(const vector<int> iArr)
{
	// Cach 1: duyet kieu truyen thong.
	/*int iLength = iArr.size();
	for (int i = 0; i < iLength; ++i)
	{
		cout << setw(7) << iArr[i];
	}*/

	// Cach 2: Duyet mang theo kieu con tro iterator trong vecto C++98.
	//for (vector<int>::const_iterator it = iArr.begin(); it != iArr.end(); ++it)
		//cout << setw(7) << *it;

	// Cach 3: C++11.
	for (auto& it : iArr)
		cout << setw(7) << it;
}

int main()
{
	//int iN = 5;
	//vector<int> iArr; // Khai bao.

	// Cap phat bo nho cho mang 1 chieu.
	//int *iArr = new int[iN];
	//iArr.resize(1000);

	//arrayInput(iArr, iN); // Nhap mang 1 chieu.
	//cout << "Mang vua nhap vao la." << endl;
	//arrayOutput(iArr);

	// Ham begin() tro den phan tu dau tien trong vector.
	//cout << "Phan tu dau tien trong mang la - iterator.begin(): " << *(iArr.begin()) << endl;

	//vector<int>::iterator itFront = iArr.begin();
	//cout << endl << "Phan tu dau tien trong mang la - iterator.begin(): " << *itFront << endl;
	//cout << "Dia chi - iterator.begin(): " << &itFront << endl;

	// Ham end() tro den vi tri cuoi cung trong vector.
	//cout << endl << "Phan tu dau tien trong mang la - iterator.end(): " << *(iArr.end()) << endl;
	//vector<int>::iterator itBack = iArr.end();
	//cout << endl << "Phan tu dau tien trong mang la - iterator.end(): " << *itBack << endl;
	//cout << "Dia chi - iterator.end(): " << &itBack << endl;

	// Ham capacity.
	//cout << endl << "Kich thuoc that su cua iArr la: " << iArr.capacity() << endl;

	// Ham max_size tu la so luong phan tu toi da ma vector co the chua.
	//cout << "So luong phan tu toi da vector co the chua la: " << iArr.max_size() << endl;

	// Ham swap hoan vi cac phan tu cua 2 vector.
	vector<int> iArr_A, iArr_B;

	// Nhap gia tri cho mang A.
	int i;
	for (i = 1; i <= 5; ++i)
		iArr_A.push_back(i);

	// Nhap gia tri cho mang B.
	i = 0;
	while (i < 3)
	{
		iArr_B.push_back(69);
		++i;
	}

	cout << "============Truoc Khi Hoan Vi============" << endl;
	cout << "iArr_A: ";
	arrayOutput(iArr_A);
	cout << endl << "iArr_B: ";
	arrayOutput(iArr_B);

	iArr_A.swap(iArr_B); // Hoan vi vector A va B.

	cout << endl << "============Sau Khi Hoan Vi============" << endl;
	cout << "iArr_A: ";
	arrayOutput(iArr_A);
	cout << endl << "iArr_B: ";
	arrayOutput(iArr_B);

	cout << endl;
	system("pause");
	return 0;
}

