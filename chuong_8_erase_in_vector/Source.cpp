// Nhap mang rang cua su dung vector.

#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

// Nhap mang 1 chieu kieu vector.
void arrayInput(vector<int>& iArr, int iN = 5)
{
	if (!iArr.empty())
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
	else
		return;
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
	if (iArr.empty()) // Rong.
		return;
	{
		for (auto& it : iArr)
			cout << setw(5) << it;
	}
}

int main()
{
	// Dang 1.
	/*vector<int> iArr;
	iArr.push_back(5);
	iArr.push_back(10);
	iArr.push_back(15);

	cout << "Mang truoc khi xoa: ";
	arrayOutput(iArr);*/

	//int iLength = iArr.size();
	//int iX;
	/*do
	{
		cout << endl << "Nhap vao vi tri can xoa trong mang: ";
		cin >> iX;

		if (iX < 0 || iX >= iLength)
		{
			system("cls");
			cout << "Nhap sai, vui long nhap lai(vi tri nam trong khoang[1, " << iLength - 1 << "])!";
		}
	} while (iX < 0 || iX >= iLength);*/

	//iArr.erase(iArr.begin() + iX);
	//cout << "Mang sau khi xoa phan tu tai vi tri " << iX << ": ";
	//arrayOutput(iArr);
	//cout << endl;

	// Dang 2.
	/*
	Array: 1 2 3 4 5 6 7 8 9 10
	Ta muốn xóa các phần tử từ vị trí 2 đến vị trí 5 =>[2, 5] => a = 2, b = 5.
	Ta phải truyền vào 2 -> 6 => a = 2, b = 6(b + 1);
	*/
	vector<int> iArr;

	int iN;
	do
	{
		cout << endl << "Nhap vao so luong phan tu n: ";
		cin >> iN;

		if (iN < 0 || iN > INT_MAX)
		{
			system("cls");
			cout << "Nhap sai, vui long nhap lai(n nam trong khoang[1, " << INT_MAX - 1 << "])!";
		}
	} while (iN < 0 || iN > INT_MAX);

	iArr.resize(iN);

	arrayInput(iArr, iN);
	cout << "Mang sau khi nhap vao la: ";
	arrayOutput(iArr);

	int iA = 2, iB = 5;
	vector<int>::iterator itBegin = iArr.begin();
	iArr.erase(itBegin + iA, itBegin + (iB + 1));
	cout << endl << "Mang sau khi xoa la: ";
	arrayOutput(iArr);
	cout << endl;

	system("pause");
	return 0;
}

