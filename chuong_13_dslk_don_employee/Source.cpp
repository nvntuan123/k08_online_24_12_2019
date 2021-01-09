#include <iostream>
#include <string>

using namespace std;

// 1. Khai báo cấu trúc dữ liệu cho danh sách liên kết - nhân viên.
struct Employee
{
	int IID; // Mã.
	string SFullName; // Họ tên.
	int IAge; // Tuổi.
	int ISalary; // Lương.
};

struct _SNode
{
	Employee _SEmpData; // Dữ liệu có kiểu dữ liệu nhân viên.
	_SNode* _PNext;
};

struct _SList
{
	_SNode* _PHead;
	_SNode* _PTail;
};

// 2. Khởi tạo DSLK.
void _initLinkedList(_SList& _Lst);

// 3. Tạo 1 node cho DSLK.
void _employeeInputInFo(Employee& Emp);
void _employeeOutputInFo(Employee Emp);

_SNode* _createNode(Employee _SEmpData);

// 4. Add head/tail cho DSLK.
void _addHead(_SList& _Lst, _SNode* _PN);
void _addTail(_SList& _Lst, _SNode* _PN);

// 5. Thiết kế hàm input/output.
void _input(_SList& _Lst);
void _output(_SList _Lst);
void _outputLocation(_SList _Lst);

// 6. Xử lý các yêu cầu cho DSLK.
int _employeeListSumOfSalary(_SList& _Lst); // Tính tổng lương của tất cả nhân vien trong danh sách.
bool _ascending(Employee _EmpA, Employee _EmpB); // Lương nhỏ
bool _descending(Employee _EmpA, Employee _EmpB); // Lương lớn.
void _employeeListSortSalaryAscDesc(_SList& _Lst, bool(*Compar)(Employee, Employee) = _descending); // Sắp xếp danh sách tăng/giảm.

// 7. Giải phóng các phần tử trong DSLK.
void _freeLinked(_SList& _Lst);

int main()
{
	_SList _Lst;
	_input(_Lst);
	cout << endl << "===============Danh sach thong tin nhan vien vua nhap vao la===============" << endl;
	_output(_Lst);

	int _ISumSalary = _employeeListSumOfSalary(_Lst);
	if (_ISumSalary == -1)
	{
		cout << "Tinh tong khong duoc." << endl;
	}
	else
	{
		cout << "Tong luong tat ca nhan vien: " << _ISumSalary << "$" << endl;
	}

	_employeeListSortSalaryAscDesc(_Lst);
	cout << endl << "===============Danh sach nhan vien tang dan theo luong===============" << endl;
	_output(_Lst);

	_freeLinked(_Lst);

	system("pause");
	return 0;
}

void _initLinkedList(_SList& _Lst)
{
	_Lst._PHead = _Lst._PTail = nullptr;
}

void _employeeInputInFo(Employee& Emp) // InFo -> Information.
{
	cout << "Nhap vao ma so: ";
	cin >> Emp.IID; // '\n' tức phím Enter.
	cin.ignore(256, '\n');

	cout << "Nhap ho ten: ";
	getline(cin, Emp.SFullName);

	cout << "Nhap tuoi: ";
	cin >> Emp.IAge;

	cout << "Nhap luong: ";
	cin >> Emp.ISalary;
}

void _employeeOutputInFo(Employee Emp)
{
	cout << "Ma so: " << Emp.IID << endl;
	cout << "Ho ten: " << Emp.SFullName << endl;
	cout << "Tuoi: " << Emp.IAge << endl;
	cout << "Luong: " << Emp.ISalary << endl;
}

_SNode* _createNode(Employee _SEmpData)
{
	_SNode* _PNode = new _SNode;
	if (_PNode == nullptr)
	{
		return NULL;
	}
	_PNode->_SEmpData = _SEmpData;
	_PNode->_PNext = nullptr;

	return _PNode;
}

void _addHead(_SList& _Lst, _SNode* _PN)
{
	if (_Lst._PHead == nullptr)
	{
		_Lst._PHead = _Lst._PTail = _PN;
	}
	else
	{
		_PN->_PNext = _Lst._PHead;
		_Lst._PHead = _PN;
	}
}

void _addTail(_SList& _Lst, _SNode* _PN)
{
	if (_Lst._PHead == nullptr)
	{
		_Lst._PHead = _Lst._PTail = _PN;
	}
	else
	{
		_Lst._PTail->_PNext = _PN; // Cho nút cuối cùng trỏ vào nút vừa tạo.
		_Lst._PTail = _PN; // Cập nhật lại pTail.
	}
}

void _input(_SList& _Lst)
{
	_initLinkedList(_Lst); // Khởi tạo danh sách.

	// Nhập vào số lượng phần tử cần thêm vào.
	int _ILength;
	cout << "Nhap vao so luong nhan vien: ";
	cin >> _ILength;

	for (size_t i = 0; i < _ILength; i++)
	{
		Employee _SEmpData;
		cout << "----------Nhap vao thong tin nhan vien thu " << i + 1 << "----------" << endl;
		_employeeInputInFo(_SEmpData);

		//_SNode* _PNode = _createNode(_IData);
		//_addHead(_Lst, _PNode); // Thêm đầu.
		_addTail(_Lst, _createNode(_SEmpData)); // Thêm cuối.
	}
}

void _output(_SList _Lst)
{
	//_SNode* _PNode;
	//for (_PNode = _Lst._PHead; _PNode != nullptr; _PNode = _PNode->_PNext)
	//{
	//	//cout << _PNode->_IData << " ";
	//	_employeeOutputInFo(_PNode->_SEmpData);
	//}

	if (_Lst._PHead == NULL) // Danh sách rổng.
	{
		return;
	}

	int _ICount = 1;
	_SNode* _PNode = _Lst._PHead;
	while (_PNode != nullptr)
	{
		cout << "----------Nhan vien " << _ICount << "----------" << endl;
		_employeeOutputInFo(_PNode->_SEmpData);
		++_ICount;
		_PNode = _PNode->_PNext;
	}
	/*for (_PNode = _Lst._PHead; _PNode != nullptr; _PNode = _PNode->_PNext)
	{
		cout << _PNode << " ";
	}*/
}

void _outputLocation(_SList _Lst)
{
	_SNode* _PNode;
	for (_PNode = _Lst._PHead; _PNode != nullptr; _PNode = _PNode->_PNext)
	{
		cout << _PNode << " ";
	}
}

int _employeeListSumOfSalary(_SList& _Lst)
{
	if (_Lst._PHead != nullptr)
	{
		int _ISumSalary = 0;
		for (_SNode* i = _Lst._PHead; i != nullptr; i = i->_PNext)
		{
			//_ISum += i->_IData;
			_ISumSalary += i->_SEmpData.ISalary;
		}
		return _ISumSalary;
	}
	return -1;
}

bool _ascending(Employee _EmpA, Employee _EmpB)
{
	return (_EmpA.ISalary < _EmpB.ISalary);
}

bool _descending(Employee _EmpA, Employee _EmpB)
{
	return (_EmpA.ISalary > _EmpB.ISalary);
}

void _employeeListSortSalaryAscDesc(_SList& _Lst, bool(*Compar)(Employee, Employee))
{
	if (_Lst._PHead != NULL)
	{
		for (_SNode* i = _Lst._PHead; i != _Lst._PTail; i = i->_PNext)
		{
			for (_SNode* j = i->_PNext; j != nullptr; j = j->_PNext)
			{
				if (Compar(i->_SEmpData, j->_SEmpData))
				{
					swap(i->_SEmpData, j->_SEmpData);
				}
			}
		}
	}
}

void _freeLinked(_SList& _Lst)
{
	_SNode* _PNode; // Tạo nút ảo.
	while (_Lst._PHead != nullptr)
	{
		_PNode = _Lst._PHead; // Cho nút ảo trỏ vào đầu.
		_Lst._PHead = _Lst._PHead->_PNext; // Cho pHead trỏ vào phần tử kế tiếp.
		delete _PNode;
	}
}

