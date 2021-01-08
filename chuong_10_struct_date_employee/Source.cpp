#include <iostream>
#include <string>

using namespace std;

struct _Date {
	int _IDay;
	int _IMonth;
	int _IYear;

	// Constructor
	_Date() { cout << "Constructor." << endl; }

	_Date(int _Day, int _Month, int _Year)
	{
		_IDay = _Day;
		_IMonth = _Month;
		_IYear = _Year;
	}

	void prinDate() {
		cout << "Ngay sinh: " << _IDay << "/" << _IMonth << "/" << _IYear << endl;
	}
};

struct _Employee {
	string _STR_ID;
	string _STR_FullName;
	_Date _BirthDay;
	string _STR_Address;
	string _STR_Email;
	//double _DSalary;
	//bool _BStatus;
	//char Ahihi[100];
	//string* _Str;

	// Regular Expression(bieu thuc chinh quy) co trong C++, C#, Java, Javascript,...
};

struct HungChoDien
{
	char c1; // 1 byte
	int i; // 4 byte
	char c2; // 1 byte
	// => Total: 12 byte
};

struct HuyBede
{
	char c1; // 1 byte
	char c2; // 1 byte
	int i; // 4 byte
	// => Total: 8 byte
};

#pragma pack(push, 1)
struct KienBede
{
	double d; // 8 byte
	int i; // 4 byte
	char c1; // 1 byte
	char c2; // 1 byte
	// => Total: 14 byte
};
#pragma pop(1)

//typedef struct _Employee _EMPLOYEE; // Khai bao kieu struct trong C.

void _dateInput(_Date&);
void _employeeInput(_Employee&);
void _employeeOutput(_Employee);
_Employee _employeeInput1(_Employee);

int main()
{
	/*string _STR_ID;
	string _STR_FullName;
	int _IDay;
	int _IMonth;
	int _IYear;
	string _STR_Address;
	string _STR_Email;*/

	/*_employeeInput(_STR_ID, _STR_FullName, _IDay, _IMonth, _IYear, _STR_Address, _STR_Email);*/

	//_Employee _Emppp; // Khai bao.
	//cout << "Nhap ID: ";
	////cin.ignore(256, '\n');
	//getline(cin, _Emppp._STR_ID);

	//cout << "Nhap ho ten: ";
	////cin.ignore(256, '\n');
	//getline(cin, _Emppp._STR_FullName);

	//cout << "Ngay: ";
	//cin >> _Emppp._IDay;
	//cout << "Thang: ";
	//cin >> _Emppp._IMonth;
	//cout << "Nam: ";
	//cin >> _Emppp._IYear;

	//cout << "Nhap dia chi: ";
	//cin.ignore(256, '\n');
	//getline(cin, _Emppp._STR_Address);

	//cout << "Nhap email: ";
	////cin.ignore(256, '\n');
	//getline(cin, _Emppp._STR_Email);

	//_employeeInput(_Emppp);
	//_employeeOutput(_Emppp);

	/*cout << "ID: " << _Emppp._STR_ID << endl;
	cout << "Ho ten: " << _Emppp._STR_FullName << endl;
	cout << "Ngay sinh: " << _Emppp._IDay << "/" << _Emppp._IMonth << "/" << _Emppp._IYear << endl;
	cout << "Dia chi: " << _Emppp._STR_Address << endl;
	cout << "Email: " << _Emppp._STR_Email << endl;*/

	//_Employee _Emppp = { "123", "Nguyen Nhat Tuan", 15, 2, 1997, "Binh Duong", "nvntuan123@gmail.com" }; // Khai tao day du.
	//_Employee _Emppp = { "123", "Nguyen Nhat Tuan", 15}; // Khai tao thieu.
	//_employeeOutput(_Emppp);
	//cout << "Size: " << sizeof(_Emppp) << endl;

	//_Date _BirthDate = _Date(15, 2, 1997);
	//_BirthDate.prinDate();

	//cout << "Dia chi cua _BirthDate: " << &_BirthDate << endl;
	//cout << "Dia chi cua _BirthDate._IDay: " << &_BirthDate._IDay << endl;
	//
	//_Employee _Emppp; // Khai bao.
	//cout << "Dia chi cua _Emppp: " << &_Emppp << endl;
	//cout << "Dia chi cua _Emppp._STR_ID: " << &_Emppp._STR_ID << endl;

	cout << "Size struct HungChoDien: " << sizeof(HungChoDien) << endl;
	cout << "Size struct HuyBede: " << sizeof(HuyBede) << endl;
	cout << "Size struct KienBede: " << sizeof(KienBede) << endl;

	system("pause");
	return 0;
}

void _dateInput(_Date& _Dt)
{
	cout << "Ngay: ";
	cin >> _Dt._IDay;
	cout << "Thang: ";
	cin >> _Dt._IMonth;
	cout << "Nam: ";
	cin >> _Dt._IYear;
}

void _employeeInput(_Employee& _Emp)
{
	cout << "Nhap ID: ";
	//cin.ignore(256, '\n');
	getline(cin, _Emp._STR_ID);

	cout << "Nhap ho ten: ";
	//cin.ignore(256, '\n');
	getline(cin, _Emp._STR_FullName);

	_dateInput(_Emp._BirthDay);

	cout << "Nhap dia chi: ";
	cin.ignore(256, '\n');
	getline(cin, _Emp._STR_Address);

	cout << "Nhap email: ";
	//cin.ignore(256, '\n');
	getline(cin, _Emp._STR_Email);
}

void _employeeOutput(_Employee _Emp)
{
	cout << "ID: " << _Emp._STR_ID << endl;
	cout << "Ho ten: " << _Emp._STR_FullName << endl;
	//cout << "Ngay sinh: " << _Emp._IDay << "/" << _Emp._IMonth << "/" << _Emp._IYear << endl;
	_Emp._BirthDay.prinDate();
	cout << "Dia chi: " << _Emp._STR_Address << endl;
	cout << "Email: " << _Emp._STR_Email << endl;
}

_Employee _employeeInput1(_Employee _Emp) {
	cout << "Nhap ID: ";
	//cin.ignore(256, '\n');
	getline(cin, _Emp._STR_ID);

	cout << "Nhap ho ten: ";
	//cin.ignore(256, '\n');
	getline(cin, _Emp._STR_FullName);

	/*cout << "Ngay: ";
	cin >> _Emp._IDay;
	cout << "Thang: ";
	cin >> _Emp._IMonth;
	cout << "Nam: ";
	cin >> _Emp._IYear;*/

	cout << "Nhap dia chi: ";
	cin.ignore(256, '\n');
	getline(cin, _Emp._STR_Address);

	cout << "Nhap email: ";
	//cin.ignore(256, '\n');
	getline(cin, _Emp._STR_Email);
	return _Emp;
}

