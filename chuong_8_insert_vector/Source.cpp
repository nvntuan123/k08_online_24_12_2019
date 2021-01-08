// Nhap mang rang cua su dung vector.

#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

// Nhap mang 1 chieu kieu vector.
void arrayInput(vector<int>& iArr, int iN = 5)
{
	if (!iArr.empty())
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
	else
		return;
}

// Xuat mang 1 chieu kieu vector.
void arrayOutput(const vector<int> iArr)
{
	// Cach 3: C++11.
	if (iArr.empty()) // Rong.
		return;
	{
		for (auto& it : iArr)
			cout << setw(3) << it;
	}
}

int main()
{
	/*vector<int> iArr;
	iArr.resize(10);
	arrayInput(iArr, 10);
	cout << "Mang vua nhap vao la: ";
	arrayOutput(iArr);

	vector<int>::iterator itBegin = iArr.begin();*/

	// Dang 1.
	//iArr.insert(itBegin + 5, 69); // Thêm số 69 vào vị trí 5 trong mảng.
	//cout << endl << "Mang vua them 69 vao vi tri 5 trong mang la: ";
	//arrayOutput(iArr);

	// Dang 2:
	/*
	Array: 1 2 3 4 5 6 7 8 9 10
	=> 1 2 3 4 5 69 69 69 6 7 8 9 10
	*/
	//iArr.insert(itBegin + 5, 3, 69); // Thêm số 69 vào vị trí 5 trong mảng.
	//cout << endl << "Mang vua them 3 lan 69 vao vi tri 5 trong mang la: ";
	//arrayOutput(iArr);
	//cout << endl;

	// Dang 3:
	/*
	ArrayA: 1 2 3 4 5 6 7 8 9 10
	ArrayB: 99 77 88 55 79 78 35
	Lấy ra 1 khoảng [a, b) trong ArrayB ra để thêm vào mảng ArrayA bắt đầu từ vị trí 5.
	Lấy [1, 4) trong ArrayB thêm vào vị trí 5 trong ArrayA.
	*/

	/*vector<int> iArrA;
	iArrA.resize(10);
	arrayInput(iArrA, 10);
	cout << "Mang a vua nhap vao la: ";
	arrayOutput(iArrA);
	cout << endl;

	vector<int> iArrB;
	iArrB.resize(7);
	arrayInput(iArrB, 7);
	cout << endl << "Mang b vua nhap vao la: ";
	arrayOutput(iArrB);

	vector<int>::iterator itBegin_ArrA = iArrA.begin(), itBegin_ArrB = iArrB.begin();
	iArrA.insert(itBegin_ArrA + 5, itBegin_ArrB + 1, itBegin_ArrB + 4);
	cout << endl << "Mang a sau khi them: ";
	arrayOutput(iArrA);
	cout << endl;*/

	// Dang 4:
	vector<int> iArr;
	iArr.resize(4);
	arrayInput(iArr, 4);
	cout << "Mang a vua nhap vao la: ";
	arrayOutput(iArr);
	cout << endl;

	int iMyArr[] = { 50, 51, 52, 53, 54 };
	iArr.insert(iArr.begin() + 5, iMyArr + 1, iMyArr + 4); // Vi tri 5 khong ton tai trong iArr => Error.
	cout << "Mang a them la: ";
	arrayOutput(iArr);
	cout << endl;

	system("pause");
	return 0;
}

