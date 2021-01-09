#include <iostream>
#include <Windows.h>
#include <list>

using namespace std;

// 1. Khai báo cấu trúc dữ liệu cho danh sách liên kết - số nguyên.
struct _SNode
{
	/*
	Một nút(node) của danh sách liên kết lúc nào cũng có 2 phần chính:
	1. Dữ liệu: có thể là kiểu int, double, float, char, char*, struct,...
	2. Con trỏ: con trỏ này có cũng kiểu dữ liệu với nút(node) mình tạo ra.
	*/
	int _IData;
	_SNode* _PNext;
};

struct _SList
{
	_SNode* _PHead;
	_SNode* _PTail;
};

// 2. Khởi tạo DSLK.
void _init(_SList& _Lst);

// 3. Tạo 1 node cho DSLK.
_SNode* _createNode(int _IData);

// 4. Add head/tail cho DSLK.
void _addHead(_SList& _Lst, _SNode* _PN);
void _addTail(_SList& _Lst, _SNode* _PN);

// 5. Thiết kế hàm input/output.
void _input(_SList& _Lst);
void _output(_SList _Lst);
void _outputLocation(_SList _Lst);

// 6. Xử lý các yêu cầu cho DSLK.
int _linkedSumOfElement(_SList& _Lst); // Tính tổng các phần tử trong danh sách.
bool _ascending(int _IVarA, int _IVarB);
bool _descending(int _IVarA, int _IVarB);
void _linkedListSortAscDesc(_SList& _Lst, bool(*Compar)(int, int) = _descending); // Sắp xếp danh sách tăng/giảm.
// Thêm
void _linkedListAddLast(_SList& _Lst, _SNode* x, _SNode* q); // Thêm nút x vào sau nút q.
void _linkedListAddLastEven(_SList& _Lst, int _IX); // Thêm số X vào sau tất cả số chẵn.
void _linkedListAddFront(_SList& _Lst, _SNode* x, _SNode* q); // Thêm nút x vào trước nút q.
void _linkedListAddFrontEvens(_SList& _Lst, int _IX); // Thêm số X vào trước tất cả số chẵn.

// Xóa
void _linkedListPoptop(_SList& _Lst); // Xóa phần tử đầu.
void _linkedListPopback(_SList& _Lst); // Xóa phần tử cuối.

// 7. Giải phóng các phần tử trong DSLK.
void _freeLinked(_SList& _Lst);

int main()
{
	list<int> _LST;
	// push_back = _addTail.
	/*_LST.push_back(1);
	_LST.push_back(2);
	_LST.push_back(3);
	_LST.push_back(4);
	_LST.push_back(5);*/

	// push_front = _addHead.
	_LST.push_front(1);
	_LST.push_front(2);
	_LST.push_front(3);
	_LST.push_front(4);
	_LST.push_front(5);

	/*for (list<int>::iterator it = _LST.begin(); it != _LST.end(); it++)
	{
		cout << *it << " ";
	}*/
	for (int i = 0; i < _LST.size(); i++)
	{
		//_LST.pop_back();
		//_LST.back();
		_LST.front();
		cout << " ";
	}
	cout << endl;
	_SList _Lst;
	_input(_Lst);
	cout << "Danh sach vua nhap vao la: ";
	_output(_Lst);

	//// a[0].
	//cout << "Nut dau(nut 1)" << endl;
	//cout << "1. Data: " << _Lst._PHead->_IData << endl; // a[0]
	//cout << "2. pNext: " << _Lst._PHead->_PNext << endl;

	//// a[1]
	//cout << "Nut 2" << endl;
	//cout << "1. Data: " << _Lst._PHead->_PNext->_IData << endl;
	//cout << "2. pNext: " << _Lst._PHead->_PNext->_PNext << endl;

	//// a[2]
	//cout << "Nut 3" << endl;
	//cout << "1. Data: " << _Lst._PHead->_PNext->_PNext->_IData << endl;
	//cout << "2. pNext: " << _Lst._PHead->_PNext->_PNext->_PNext << endl;

	//cout << "Nut 3(pTail - nut cuoi)" << endl;
	//cout << "1. Data: " << _Lst._PTail->_IData << endl; // 3
	//cout << "2. pNext: " << _Lst._PTail->_PNext << endl; // 00000000

	//_linkedListPoptop(_Lst); // Xoa dau.
	//_linkedListPopback(_Lst);
	//cout << endl << "Danh sach sau khi xoa: ";
	//_output(_Lst);

	/*int _ISum = _linkedSumOfElement(_Lst);
	if (_ISum == INT_MIN)
	{
		cout << "Danh sach rong.";
	}
	else
	{
		cout << endl << "Tong cac phan tu trong danh sach: " << _ISum;
	}*/

	/*_linkedListSortAscDesc(_Lst, _ascending);
	cout << endl << "Danh sach sau khi sap xep: ";*/

	/*_SNode* q;
	_SNode* x;
	q = _createNode(2);
	x = _createNode(69);

	_linkedListAddLast(_Lst, x, q);
	cout << endl << "Danh sach sau khi them 69 vao sau nut co gia tri 2: ";*/

	/*_linkedListAddLastEven(_Lst, 69);
	cout << endl << "Danh sach sau khi them x vao sau tat ca so chan: ";*/

	/*_SNode* q;
	_SNode* x;
	q = _createNode(2);
	x = _createNode(69);
	_linkedListAddFront(_Lst, x, q);
	cout << endl <<
		"Danh sau khi them nut x truoc nut q: ";*/

	_linkedListAddFrontEvens(_Lst, 70);
	cout << endl << "Danh sach sau khi them 69 vao tat ca so chan: ";
	_output(_Lst);
	cout << endl;

	_freeLinked(_Lst);

	/*
	int* _IPtr1;
	1. Giá trị: *_IPtr1.
	2. Địa chỉ thật sự của nó: &_IPtr1.
	3. Vùng nhớ(địa chỉ do hệ điều hành cấp phát hoặc địa chỉ mà nó trỏ tới vùng nhớ hay biến thường nào đó): _IPtr1.

	_SNode* p;
	1. Giá trị: p->?
	2. Địa chỉ thật sự của nó: &p.
	3. Vùng nhớ(địa chỉ do hệ điều hành cấp phát hoặc địa chỉ mà nó trỏ tới vùng nhớ hay biến thường nào đó): p.
	*/

	/*int _IVar = 5;
	cout << "\n1. Gia tri: " << _IVar << endl;
	cout << "2. Dia chi: " << &_IVar << endl;

	int* _IPtr1 = &_IVar;
	cout << "\n1. Gia tri: " << *_IPtr1 << endl;
	cout << "2. Dia chi: " << &_IPtr1 << endl;
	cout << "3. Vung nho: " << _IPtr1 << endl;

	Employee _NVar;
	_NVar._ID = 1;
	_NVar._SFullName = "Hung cho dien";
	_NVar._BStatus = true;
	cout << "\n1.1 Gia tri: " << _NVar._ID << endl;
	cout << "1.2 Gia tri: " << _NVar._SFullName << endl;
	cout << "1.3 Gia tri: " << _NVar._BStatus << endl;
	cout << "2. Dia chi: " << &_NVar << endl;

	Employee* _PVar = new Employee;
	_PVar->_ID = 2;
	_PVar->_SFullName = "Hung be de";
	_PVar->_BStatus = true;
	cout << "\n1.1 Gia tri: " << _PVar->_ID << endl;
	cout << "1.2 Gia tri: " << _PVar->_SFullName << endl;
	cout << "1.3 Gia tri: " << _PVar->_BStatus << endl;
	cout << "2. Dia chi: " << &_PVar << endl;
	cout << "3. Vung nho: " << _PVar << endl;*/
	//delete _PVar;

	/*_SList _Lst;
	_Lst._PHead = _Lst._PTail = NULL;

	cout << "&_Lst._PHead: " << &_Lst._PHead << endl;
	cout << "_Lst._PHead: " << _Lst._PHead << endl;

	cout << endl << "&_Lst._PTail: " << &_Lst._PTail << endl;
	cout << "_Lst._PTail: " << _Lst._PTail << endl;

	_Lst._IPtr = new int;
	*_Lst._IPtr = 5;
	cout << "Gia tri cua IPTr nam trong _SList: " << *_Lst._IPtr << endl;
	cout << "Dia chi IPtr nam trong _SList: " << &_Lst._IPtr << endl;
	cout << "Vung nho cua IPtr nam t rong _SList: " << _Lst._IPtr << endl;
	delete _Lst._IPtr;*/

	system("pause");
	return 0;
}

void _init(_SList& _Lst)
{
	_Lst._PHead = _Lst._PTail = nullptr;
}

_SNode* _createNode(int _IData)
{
	_SNode* _PNode = new _SNode;
	if (_PNode == nullptr)
	{
		return NULL;
	}
	_PNode->_IData = _IData;
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
	_init(_Lst); // Khởi tạo danh sách.
	// Nhập vào số lượng phần tử cần thêm vào.
	int _ILength;
	cout << "Nhap vao so luong phan tu: ";
	cin >> _ILength;

	for (size_t i = 0; i < _ILength; i++)
	{
		int _IData;
		cout << "Nhap vao gia tri cho nut thu " << i + 1 << ": ";
		cin >> _IData;

		//_SNode* _PNode = _createNode(_IData);
		//_addHead(_Lst, _PNode);
		_addTail(_Lst, _createNode(_IData));
	}
}

void _output(_SList _Lst)
{
	_SNode* _PNode;
	/*
	_PNode có 3 phần chính(vì nó là con trỏ cấp 1):
	1. Giá trị của nó _PNode->data.
	2. Địa chỉ thật của con trỏ &_PNode.
	3. Vùng nhớ của _PNode.
	*/
	for (_PNode = _Lst._PHead; _PNode != nullptr; _PNode = _PNode->_PNext)
	{
		cout << _PNode->_IData << " ";
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

int _linkedSumOfElement(_SList& _Lst)
{
	if (_Lst._PHead != nullptr)
	{
		int _ISum = 0;
		/*for (int i = 0; i < _IN; i++)
		{
			_ISum += _IArr[i];
		}*/
		for (_SNode* i = _Lst._PHead; i != nullptr; i = i->_PNext)
		{
			_ISum += i->_IData;
		}
		return _ISum;
	}
	return INT_MIN;
}

bool _ascending(int _IVarA, int _IVarB)
{
	return (_IVarA < _IVarB);
}

bool _descending(int _IVarA, int _IVarB)
{
	return (_IVarA > _IVarB);
}

void _linkedListSortAscDesc(_SList& _Lst, bool(*Compar)(int, int))
{
	if (_Lst._PHead != NULL)
	{
		// Array.
		//for (int i = 0; i < _IN - 1; i++)
		//{
		//	for (int j = i + 1; j < _IN; j++)
		//	{
		//		if (Compar(a[i], a[j]))
		//			// hoanvi.
		//	}
		//}

		// Linked List
		for (_SNode* i = _Lst._PHead; i != _Lst._PTail; i = i->_PNext)
		{
			for (_SNode* j = i->_PNext; j != nullptr; j = j->_PNext)
			{
				if (Compar(i->_IData, j->_IData))
				{
					swap(i->_IData, j->_IData);
				}
			}
		}
	}
}

void _linkedListAddLast(_SList& _Lst, _SNode* x, _SNode* q)
{
	if (_Lst._PHead != nullptr)
	{
		for (_SNode* i = _Lst._PHead; i != nullptr; i = i->_PNext)
		{
			if (q->_IData == i->_IData)
			{
				/*_SNode* _Temp = i->_PNext;
				x->_PNext = _Temp;*/
				x->_PNext = i->_PNext;
				i->_PNext = x;
				return;
			}
		}
	}
}

void _linkedListAddLastEven(_SList& _Lst, int _IX)
{
	if (_Lst._PHead != NULL)
	{
		for (_SNode* i = _Lst._PHead; i != nullptr; i = i->_PNext)
		{
			if (!(i->_IData % 2))
			{
				_SNode* x = _createNode(_IX);
				x->_PNext = i->_PNext;
				i->_PNext = x;
				i = i->_PNext; // Loại bỏ số vừa thêm vào.
			}
		}
	}
}

void _linkedListAddFront(_SList& _Lst, _SNode* x, _SNode* q)
{
	if (_Lst._PHead != nullptr)
	{
		if (q->_IData == _Lst._PHead->_IData)
		{
			_addHead(_Lst, x);
			return;
		}
		_SNode* _Temp = _Lst._PHead;
		for (_SNode* i = _Temp->_PNext; i != nullptr; i = i->_PNext)
		{
			if (q->_IData == i->_IData)
			{
				x->_PNext = i;
				_Temp->_PNext = x;
				return;
			}
			_Temp = i;
		}
	}
}

void _linkedListAddFrontEvens(_SList& _Lst, int _IX)
{
	if (_Lst._PHead != NULL)
	{
		_SNode* _Temp = _Lst._PHead;
		for (_SNode* i = _Temp->_PNext; i != nullptr; i = i->_PNext)
		{
			if (!(i->_IData % 2))
			{
				_SNode* x = _createNode(_IX);
				x->_PNext = i;
				_Temp->_PNext = x;
			}
			_Temp = i;
		}
	}
}

void _linkedListPoptop(_SList& _Lst)
{
	if (_Lst._PHead != NULL)
	{
		_SNode* _Temp = _Lst._PHead;
		_Lst._PHead = _Lst._PHead->_PNext;
		delete _Temp;
	}
}

void _linkedListPopback(_SList& _Lst)
{
	if (_Lst._PHead != nullptr)
	{
		_SNode* _Temp = nullptr;
		for (_SNode* i = _Lst._PHead; i != nullptr; i = i->_PNext)
		{
			if (i == _Lst._PTail)
			{
				_Temp->_PNext = nullptr;
				_Lst._PTail = _Temp;
				delete i;
				return;
			}
			_Temp = i;
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

