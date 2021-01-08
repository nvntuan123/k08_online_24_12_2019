#include <iostream>
#include <vector> // Thu vien ho tro kieu du lieu vector.

using namespace std;

int main()
{
	vector<int> iArr; // Khai bao.

	// Truong hop 1.
	//iArr.push_back(5); // Them phan tu co gia tri 5 vao vi tri cuoi cua mang.
	//iArr.push_back(10); // Them so 10 vao vi tri cuoi.

	//cout << "a[0] = " << iArr[0] << endl; // 5
	//cout << "a[1] = " << iArr[1] << endl; // 10.
	//iArr.push_back(15); // Them so 10 vao vi tri cuoi - vi tri 2.
	//cout << "a[2] = " << iArr[2] << endl; // 10.

	// Truong hop 2.
	//iArr.resize(5); // Cap phat 5 o nho cho iArr.
	//iArr.push_back(5); // Them phan tu co gia tri 5 vao vi tri cuoi cua mang.
	//iArr.push_back(10); // Them so 10 vao vi tri cuoi.

	//iArr.pop_back(); // Xoa phan tu o vi tri cuoi cua mang - la so 10.
	int iN = iArr.size();
	for (int i = 0; i < iN; ++i)
		//cout << iArr[i] << " ";

		cout << endl;
	system("pause");
	return 0;
}

