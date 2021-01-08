#include <iostream>
#include <string>

using namespace std;

struct _Date
{
	int _IDay;
	int _IMonth;
	int _IYear;
};

struct _Employee
{
	string _StrFullName;
	//_Date _BirthDay; // Biến thường.
	int* _Salary;
	string _StrEmail;
};

int main()
{
	//_Employee _Emp1 = { "Nhat Tuan", 1500, "nvntuan123@gmail.com" }; // Biến thường có kiểu dữ liệu là _Employee.
	// Cách gàn giá cho trường dữ liệu trong struct. C2.
	//_Employee _Emp1; // Biến thường có kiểu dữ liệu là _Employee.
	//_Emp1._StrFullName = "Nhat Tuan";
	//_Emp1._Salary = 1500;
	//_Emp1._StrEmail = "nvntuan123@gmail.com";

	//cout << "=============Bien Thuong=============" << endl;
	//cout << "Ten: " << _Emp1._StrFullName << endl;

	//_Employee* _PtrEmp = &_Emp1; // Biến con tro có kiểu dữ liệu là  _Employee.
	//cout << "=============Bien Con Tro=============" << endl;
	//cout << "Ten: " << _PtrEmp->_StrFullName << endl;

	//_Employee* _PtrEmp = new _Employee;
	////_PtrEmp = { "Nhat Tuan", 1500, "nvntuan123@gmail.com" }; // Error.
	//*_PtrEmp = { "Nhat Tuan", {15, 2, 1997}, 1500, "nvntuan123@gmail.com" }; // OK.
	//cout << "Ten: " << _PtrEmp->_StrFullName << endl;
	//cout << "Ngay sinh: " << _PtrEmp->_BirthDay._IDay<< endl;

	//delete _PtrEmp;

	_Employee _Emp1;
	_Emp1._Salary = new int;

	_Emp1._StrFullName = "Nhat Tuan";
	*(_Emp1._Salary) = 1500;
	_Emp1._StrEmail = "nvntuan123@gmail.com";

	_Employee _Emp2;
	_Emp2._Salary = new int;
	// Gán dữ liệu struct cho nhau.
	// C1: struct này = struct kia.
	//_Emp2 = _Emp1;
	// Tuy nhiên cách này nó chỉ phù hợp khi trong struct không biến con trỏ.

	// C2: gán từng trường dữ liệu của struct này cho struct kia.
	*(_Emp2._Salary) = *(_Emp1._Salary);

	cout << "Emp1.name: " << *(_Emp1._Salary) << endl;
	cout << "Emp2.name: " << *(_Emp2._Salary) << endl;

	*(_Emp2._Salary) = 1700;

	cout << "Emp1.name: " << *(_Emp1._Salary) << endl;
	cout << "Emp2.name: " << *(_Emp2._Salary) << endl;

	delete _Emp2._Salary;
	delete _Emp1._Salary;

	system("pause");
	return 0;
}

