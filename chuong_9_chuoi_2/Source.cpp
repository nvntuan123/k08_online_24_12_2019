#include <iostream>
#include <string>

using namespace std;

int main()
{
	// Để khắc trường hợp nhập chuỗi vào và xuất ra không như mong muốn => ta sử dụng getline(cin, _string_name);
	//string _StrName, _StrClass;
	//cout << "Nhap vao ten ban: ";
	////cin >> _StrName;
	//getline(cin, _StrName);

	//cout << "Nhap vao ten lop: ";
	////cin >> _StrClass;
	//getline(cin, _StrClass);

	//cout << "Ten ban: " << _StrName << endl;
	//cout << "Ten lop: " << _StrClass << endl;

	int _ICode;
	cout << "Nhap vao MSSV: ";
	cin >> _ICode;

	string _StrName;
	cout << "Nhap vao ten ban: ";
	cin.ignore(5000, '\n'); // Xóa bộ nhớ đệm. Enter = '\n'.
	getline(cin, _StrName);

	cout << "MSSV: " << _ICode << endl;
	cout << "Ten ban: " << _StrName << endl;

	string _STR = "abcdef";
	// Viết hàm tính độ dài chuỗi.
	// Bạn hãy đảo ngược chuỗi => Output: "fedcba".
	string _STR1 = "a123cd45e789f"; // => Output: "f123ed45c789a"

	system("pause");
	return 0;
}

