#include <iostream>
#include <string>

using namespace std;

int main()
{
	// Nhập đoạn văn thay vì nhập vào 1 chuỗi.
	string _StrText;
	cout << "Nhap vao doan van ban: ";
	getline(cin, _StrText, '_');
	cout << "Van ban vua nhap vao." << endl << _StrText << endl;

	system("pause");
	return 0;
}
