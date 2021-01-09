#include <iostream>
#include <Windows.h>

using namespace std;

// 1. Khai báo cấu trúc dữ liệu cho danh sách liên kết - số nguyên.
struct _SNode
{
	int _IData; // Data là biến thường.
	//int* _IData1; // Data1 gọi đúng là biến con trỏ(nó thuộc loại 1 tức là con trỏ biến - ngoài con trỏ biến thì còn có con trỏ hàm).
	/*__int8 a;
	__int16 b;
	__int32 c;
	__int64 d;*/
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

// 6. Xử lý các yêu cầu cho DSLK.

// 7. Giải phóng các phần tử trong DSLK.
void _freeLinked(_SList& _Lst);

int main()
{
	_SList _Lst;
	_input(_Lst);
	_output(_Lst);
	_freeLinked(_Lst);

	system("pause");
	return 0;
}

void _init(_SList& _Lst)
{
	_Lst._PHead = _Lst._PTail = NULL;
}

// int _createNode(int _IDATA);
// int* _createNode(int _IDATA);
// _SNode _createNode(int _IDATA);
// _SNode* _createNode(int _IDATA);
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

		_SNode* _PNode = _createNode(_IData);
		//_addHead(_Lst, _PNode);
		_addTail(_Lst, _PNode);
	}
}

void _output(_SList _Lst)
{
	/*
	int i;
	for (i = 0; i < _IN; i++)
	{

	}
	*/
	_SNode* _PNode;
	for (_PNode = _Lst._PHead; _PNode != nullptr; _PNode = _PNode->_PNext)
	{
		cout << _PNode->_IData << " ";
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

