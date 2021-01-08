#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class _Date
{
public:
	_Date();
	~_Date();
	friend istream& operator>>(istream& _IS, _Date& _DInput);
	friend ostream& operator<<(ostream& _OS, _Date _DOutput);
private:
	int _Day;
	int _Month;
	int _Year;
};

_Date::_Date()
{
	this->_Day = 1;
	this->_Month = 1;
	this->_Year = 2020;
}

_Date::~_Date()
{
}

int main()
{
	// B1: Mo file.
	// Khai bao bien file ben C++.
	//ifstream _FileIn("input.txt", ios::in); // ios::in là đối số mode giống đối số r bên C, chỉ mở tập tin để đọc đữ liệu.

	ifstream _FileIn;
	_FileIn.open("input.txt", ios_base::in); // ios_base::in = ios::in.
	if (_FileIn.fail())
	{
		cout << "File khong ton tai hoac mo that bai!" << endl;
		system("pause");
		return 0;
	}

	// B2: Xu ly.
	// Mở file input để đọc 2 số nguyên.
	int _ISum = 0;
	while (!_FileIn.eof())
	{
		int _ITemp;
		if (_FileIn >> _ITemp)
			_ISum += _ITemp;
		else
			break;
	}
	cout << "Tong: " << _ISum << endl;
	// Mở file output để ghi tổng 2 số nguyên vừa đọc được từ file input.
	ofstream _FileOut;
	_FileOut.open("output.txt", ios::out);

	_FileOut << _ISum;

	/*int _IA;
	cout << "Nhap vao 1 so nguyen: ";
	cin >> _IA;
	cin.ignore();*/

	string _StrName;
	cout << "Nhap vao ten cua ban: ";
	getline(cin, _StrName);
	_StrName.insert(0, "\n");
	_FileOut << _StrName;

	_FileOut.close();

	// B3: Dong file.
	_FileIn.close(); // close là function member, còn _FileIn là 1 biến kiểu đối tượng ifstream để xử lý đọc file trong C++.

	/*_Date _D;
	cout << "Nhap vao ngay thang nam." << endl;
	cin >> _D;
	cout << _D << endl;*/

	system("pause");
	return 0;
}

istream& operator>>(istream& _IS, _Date& _DInput)
{
	// TODO: insert return statement here
	cout << "Day: ";
	_IS >> _DInput._Day;
	cout << "Month: ";
	_IS >> _DInput._Month;
	cout << "Year: ";
	_IS >> _DInput._Year;

	return _IS;
}

ostream& operator<<(ostream& _OS, _Date _DOutput)
{
	// TODO: insert return statement here
	_OS << _DOutput._Day << "/" << _DOutput._Month << "/" << _DOutput._Year;

	return _OS;
}

