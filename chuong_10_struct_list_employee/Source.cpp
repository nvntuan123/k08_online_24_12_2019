#include <iostream>
#include <string>

using namespace std;

struct _Employee
{
	string _StrFullName;
	int _Salary;
	string _StrEmail;
};

struct _ListEmployees
{
	_Employee _ListEmp[100]; // Thanh phan mang.
	//int* _ILength;
	int _ILength;
};

void _employeeInput(_Employee&);
void _employeeOutput(const _Employee);
void _lstEmployeeInput(_ListEmployees&);
void _lstEmployeeOutput(const _ListEmployees);

int main()
{
	_ListEmployees _LSTEmployees;
	_LSTEmployees._ILength = 3;
	//_LSTEmployees._ILength = new int(3);

	_lstEmployeeInput(_LSTEmployees);
	_lstEmployeeOutput(_LSTEmployees);

	//delete _LSTEmployees._ILength;

	system("pause");
	return 0;
}

void _employeeInput(_Employee& _Emp)
{
	cout << "Nhap ten nhan vien: ";
	getline(cin, _Emp._StrFullName);

	cout << "Nhap luong: ";
	cin >> _Emp._Salary;

	cout << "Nhap email: ";
	while (getchar() != '\n');
	getline(cin, _Emp._StrEmail);
}

void _lstEmployeeInput(_ListEmployees& _LSTEmps)
{
	//int _IN = *(_LSTEmps._ILength);
	int _IN = _LSTEmps._ILength;
	for (int i = 0; i < _IN; i++)
	{
		cout << "===Nhap Thong Tin Nhan Vien " << i + 1 << "===" << endl;
		_employeeInput(_LSTEmps._ListEmp[i]);
	}
}

void _employeeOutput(const _Employee _Emp)
{
	cout << "Ten: " << _Emp._StrFullName << endl;
	cout << "Luong = " << _Emp._Salary << endl;
	cout << "Email: " << _Emp._StrEmail << endl;
}

void _lstEmployeeOutput(const _ListEmployees _LSTEmps)
{
	//int _IN = *(_LSTEmps._ILength);
	int _IN = _LSTEmps._ILength;
	for (int i = 0; i < _IN; i++)
	{
		_employeeOutput(_LSTEmps._ListEmp[i]);
	}
}

