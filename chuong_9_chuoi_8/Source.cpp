//#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>

using namespace std;

int main()
{
	//int _IArr[100]; // Mang so nguyen.
	//char _Str[100]; // Mang ky tu.

	//VD:
	// Khởi tạo với độ dài cụ thể.
	//char _StrName[30] = { 'T', 'u','a','n','\0' }; // '\0' là ký tự kết thúc chuỗi.
	//char _StrEmail[100] = { 'T', 'u','a','n','@' }; // Tự thêm '\0'
	//cout << "_StrName: " << _StrName << endl;
	//cout << "_StrEmail: " << _StrEmail << endl;

	// Khởi tạo tự xác định độ dài.
	//char _StrName[] = { 'T', 'u','a','n','\0' }; // '\0' là ký tự kết thúc chuỗi.
	//char _StrEmail[] = { 'T', 'u','a','n','@' }; // Không tự thêm '\0'
	//cout << "_StrName: " << _StrName << endl;
	//cout << "_StrEmail: " << _StrEmail << endl;

	// Phép gán hợp lệ.
	//char _Str[100] = "Nhat Tuan"; // Ok.
	/*char _Str[100];
	_Str[0] = 'T';
	_Str[1] = 'u';
	_Str[2] = 'a';
	_Str[3] = 'n';
	_Str[4] = '\0';*/
	//cout << "_Str: " << _Str << endl;
	// Phép gán không hợp lệ.
	//char _Str[100] = "Nhat Tuan"; // Ok.
	//_Str = "Ahihi"; // Error.

	//string _StrCPP;
	//_StrCPP = "Ahihi";
	//cout << "=================STRING IN C++=================" << endl;
	//cout << "Length." << endl;
	//cout << "Cach 1: " << _StrCPP.length() << endl;
	//cout << "Cach 2: " << _StrCPP.size() << endl;
	//cout << "Cach 3: " << strlen(_StrCPP.c_str()) << endl;
	//int _ILength_StrCPP = _StrCPP.length();
	//for (int i = 0; i < _ILength_StrCPP; i++)
	//{
	//	//cout << _StrCPP[i] << endl;
	//	cout << _StrCPP.at(i) << endl;
	//}

	//char _StrC[] = "Nhat Tuan";
	//cout << "=================STRING IN C=================" << endl;
	//int _ILength_StrC = strlen(_StrC);
	//cout << "Length: " << _ILength_StrC << endl;

	//for (int i = 0; i < _ILength_StrC; i++)
	//{
	//	cout << _StrC[i] << endl;
	//}

	//char _Str[] = "Nhat Tuan";
	////_strupr(_Str); // #define _CRT_SECURE_NO_WARNINGS
	//_strupr_s(_Str);
	//cout << "_Strupr: " << _Str << endl;

	//_strrev(_Str);
	//cout << "_Strrev: " << _Str << endl;
	//
	//// Hàm nối chuỗi.
	//char _StrLastName[100] = "Nguyen";
	//char _StrFirstName[] = "Nhat Tuan";
	////strcat(_StrLastName, " ");
	//strcat_s(_StrLastName, 100, " ");
	////strcat(_StrLastName, _StrFirstName);
	//strcat_s(_StrLastName, 100, _StrFirstName);

	//cout << "C: Full name: " << _StrLastName << endl;

	//string _StrCPP_LastName = "Nguyen";
	//string _StrCPP_FirstName = "Nhat Tuan";
	////_StrCPP_LastName.append(" ");
	////_StrCPP_LastName.append(_StrCPP_FirstName);

	//_StrCPP_LastName.append(" " + _StrCPP_FirstName);
	//cout << "CPP: Full name: " << _StrCPP_LastName << endl;

	// Tìm chuỗi.
	// C-Style.
	char _String[] = "Nguyen Nhat Tuan";
	char _SubString[] = "Tuan";
	cout << "C-Style." << endl;
	if (strstr(_String, _SubString) != NULL)
	{
		cout << "Tim thay chuoi " << _SubString << " trong chuoi " << _String << endl;
	}
	else
	{
		cout << "Khong tim thay chuoi " << _SubString << " trong chuoi " << _String << endl;
	}

	// C++-Style.
	string _StrCPP_FullName = "Nguyen Nhat Tuan";
	string _StrCPP_LastName = "Tuan";
	cout << "C++-Style" << endl;
	if (_StrCPP_FullName.find(_StrCPP_LastName) != ULONG_MAX)
		cout << "Tim thay chuoi " << _StrCPP_LastName << " trong chuoi " << _StrCPP_FullName << endl;
	else
		cout << "Khong tim thay chuoi " << _StrCPP_LastName << " trong chuoi " << _StrCPP_FullName << endl;

	// So sanh chuoi.
	// C-Style
	char _StrC1[] = "Nguyen Tuan"; // N
	char _StrC2[] = "nguyen tuan"; // n
	//cout << "ASCII T: " << static_cast<int>('T') << endl;
	//cout << "ASCII t: " << static_cast<int>('t') << endl;
	int _IResult1 = strcmp(_StrC1, _StrC2); // Phan biet hoa thuong.
	int _IResult2 = _stricmp(_StrC1, _StrC2); // Khong phan biet hoa thuong.
	cout << "_IResult1 = " << _IResult1 << endl; // -1
	cout << "_IResult2 = " << _IResult2 << endl; // -1

	// C++-Style.
	string _StrCPP1 = "Nguyen Tuan"; // N
	string _StrCPP2 = "nguyen tuan"; // n
	int _IResult_CPP1 = _StrCPP1.compare(_StrCPP2); // Phan biet hoa thuong.
	cout << "CPP: _IResult1 = " << _IResult_CPP1 << endl; // -1

	// Chuyển chuỗi thành số.
	cout << endl << "==============Chuyen chuoi thanh so==============" << endl;
	//char _StrNumber[] = "12345";
	//char _StrNumber[] = "a12345";
	//char _StrNumber[] = "123a45";
	char _StrNumber[] = "1c23a45";
	int _INumber = atoi(_StrNumber);

	cout << "_INumber = " << _INumber << endl;

	// Chuyển số thành chuỗi.
	int _INumber1 = 123;
	char _StrNumber1[100] = "";
	_itoa_s(_INumber1, _StrNumber1, 100, 10); // Hệ thập phân. Decimal.
	//_itoa_s(_INumber1, _StrNumber1, 100, 2); // Nhị phân. Binary.
	//_itoa_s(_INumber1, _StrNumber1, 100, 8); // Bát phân. Oct.
	//_itoa_s(_INumber1, _StrNumber1, 100, 16); // Thập lục phân. Hex.
	cout << "_StrNumber1 = " << _StrNumber1 << endl;
	cout << endl << "==============Chuyen chuoi thanh so==============" << endl;
	/*
	Bài 1: nguyen nhat tuan
	=> Nguyen Nhat Tuan.
	Bài 2:     Nguyen    nhat    tuan
	=> Nguyen nhat tuan
	Bài 3:     Nguyen    nhat    tuan
	=> Nguyen Nhat Tuan.
	Bài 4: Nguyen Nhat Tuan.
	=> Có 3 từ.
	Bài 5:
	Input: Nguyen Nhat Tuan
	Output: Nguyen
			Nhat
			Tuan
	Bài 6: Nguyen Nhat Tuan
	=> Nguyen 6
	*/

	cout << endl;
	system("pause");
	return 0;
}

