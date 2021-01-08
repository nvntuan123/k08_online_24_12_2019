#include <iostream>
#include <string>

using namespace std;

int main()
{
	// Nhập đoạn văn thay vì nhập vào 1 chuỗi.
	string _StrText1 = "Tuan", _StrText2;
	//cout << "Nhap vao chuoi 1: ";
	//getline(cin, _StrText1);
	/*cout << "Nhap vao chuoi 2: ";
	getline(cin, _StrText2);*/

	// Phep noi chuoi trong C++.
	//string _StrResult = _StrText1 + " " +  _StrText2;
	//_StrText1 += " " + _StrText2;
	//cout << _StrText1 << " + " << _StrText2 << " = " << _StrResult << endl;
	//cout << _StrText1 << " + " << _StrText2 << " = " << _StrText1 << endl;

	// Lay ra do dai chuoi.
	//int _ILength1 = _StrText1.length();
	//int _ILength2 = _StrText2.size();

	//cout << "Length1: " << _ILength1 << endl;
	//cout << "Length2: " << _ILength2 << endl;

	//cout << "Kich thuoc that su cua chuoi 1: " << _StrText1.capacity() << endl;
	//cout << "Kich thuoc that su cua chuoi 2: " << _StrText2.capacity() << endl;
	_StrText1.push_back('Z'); // Giong ben vector.
	cout << "Text1: " << _StrText1 << endl;
	_StrText1.pop_back();
	cout << "Text1 sau khi pop_back: " << _StrText1 << endl;
	//cout << _StrText1.at(2) << endl; // Truy xuat phan tu.
	cout << _StrText1[3] << endl; // Truy xuat phan tu kieu mang.
	cout << "Phan tu dau trong chuoi " << _StrText1 << " la: " << _StrText1.front() << endl;
	cout << "Phan tu cuoi trong chuoi " << _StrText1 << " la: " << _StrText1.back() << endl;

	string _Str;
	if (_Str.empty()) // Rong.
		cout << "_Str is Empty" << endl;
	else
		cout << "_Str is not Empty" << endl;

	system("pause");
	return 0;
}

