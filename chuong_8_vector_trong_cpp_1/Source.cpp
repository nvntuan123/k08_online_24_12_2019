#include <iostream>
#include <vector> // Thu vien ho tro kieu du lieu vector.

using namespace std;

int main()
{
	/*
	vector nó nằm trong container của C++, và thuộc thư viện STL(thư viện chuẩn của C++).
	Trong thư viện chuẩn STL của C++ sẽ có những thành phần cơ bản sau:
	vector => giống mảng 1 chiều, 2 chiều, mảng răng cưa.
	list => giống danh sách liên kết.
	stack.
	queue => Trong game dò mìn chúng ta sẽ áp dụng nó để giải thuật toán loang.
	map.
	set.
	*/

	vector<int> iArr; // Khai bao kieu mang 1 chieu su dung vector.

	//int *a = new int[5];
	// delete[] a;
	//iArr.resize(5); // => Output: 0 0 0 0 0

	//int iN = iArr.size(); // size() => la ham ho tro lay ra kich thuoc cua vector kieu mang 1 chieu.
	//cout << "Size of iArr: " << iN << endl;
	//cout << iArr.at(1) << endl; // => Error.<vector_name>.at(index);
	//cout << iArr[100] << endl; // Error.

	//iArr.resize(6); // Tang them 1 o nho.
	//iN = iArr.size(); // Cap nhat lai so luong phan tu.
	//cout << "Size of iArr: " << iN << endl;

	//iArr.resize(3); // 0 0 0.
	//int iN = iArr.size(); // Cap nhat lai so luong phan tu.
	//cout << "Size of iArr: " << iN << endl;

	// Mang da ton tai.
	//iArr.resize(5, 10); // => 0 0 0 10 10.
	//iArr.resize(2, 10); // => 0 0.

	// Mang chua ton tai.
	iArr.resize(5, 10); // => 10 10 10 10 10.
	//iArr.resize(2, 10); // => 0 0.
	int iN = iArr.size(); // Cap nhat lai so luong phan tu.
	cout << "Size of iArr: " << iN << endl;

	for (int i = 0; i < iN; ++i)
		cout << iArr.at(i) << " "; // Cach 1.
		//cout << iArr[i] << " "; // Cach 2.

	cout << endl;
	system("pause");
	return 0;
}

