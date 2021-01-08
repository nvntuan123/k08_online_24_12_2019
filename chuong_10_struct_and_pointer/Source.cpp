#include <iostream>
#include <string>

using namespace std;

struct _Employee
{
	//double d; // 8 byte.
	string _StrFullName; // 28 byte. 1 word(block).
	int _Salary; // 4 byte(). 1 word
	string _StrEmail; // 28 byte. 1 word

	/*
	string trong C++ thực chất nó là cái class. Mà struct trong C++ nó bị biến bởi C nên nó cũng gần giống với class.
	Nó xác định được kiểu string có kích thuốc 28 là số byte cao nhất trong struct này.
	=> 1 word = 4 byte(chỉ có kiểu int).
	=> 1 word = 8 byte(có kiểu double).
	*/

	// Cau truc de quy(tu tro).
	//_Employee* pNext; // Tu tro o day nek.
	/* pNext: có 3 phần.
	1. Giá trị kiểu _Employee(giá trị này được lưu ở vùng nhớ heap và nó phụ thuộc vào vùng nhớ này).
	2. Địa chỉ thật sự của pNext(địa chỉ này thuộc stack).
	3. Vùng nhớ hay còn gọi là địa chỉ được hệ điều hành cấp phát hoặc trỏ đến địa chỉ nào đó(địa chỉ này thuộc heap).
	*/
};

struct MyStruct
{

};

int main()
{
	_Employee _Emp1; // Biến thường có kiểu dữ liệu là _Employee.
	_Employee* _PtrEmp = &_Emp1; // Biến con tro có kiểu dữ liệu là  _Employee.
	/*
	_PtrEmp sẽ có 3 phần:
	1. Giá trị kiểu _Employee(giá trị này được lưu ở vùng nhớ heap và nó phụ thuộc vào vùng nhớ này).
	2. Địa chỉ thật sự của pNext(địa chỉ này thuộc stack).
	3. Vùng nhớ hay còn gọi là địa chỉ được hệ điều hành cấp phát hoặc trỏ đến địa chỉ nào đó(địa chỉ này thuộc heap).
	*/

	cout << "Size _Emp: " << sizeof(_Emp1) << endl; // A
	cout << "Size _PtrEmp cua con tro: " << sizeof(_PtrEmp) << endl; // B
	cout << "Size _PtrEmp mien gia tri tuc la size cua kieu _Emplooyee: " << sizeof(*_PtrEmp) << endl; // C
	// => A = c
	// => A != B

	cout << "Size MyStruct: " << sizeof(MyStruct) << endl;

	system("pause");
	return 0;
}

