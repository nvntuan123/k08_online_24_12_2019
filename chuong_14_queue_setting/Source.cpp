#include <iostream>
#include <Windows.h>
#include <list>

using namespace std;

// 1. Khai báo cấu trúc dữ liệu cho danh sách liên kết - số nguyên.
struct _SNode
{
	int _IData;
	_SNode* _PNext;
};

struct _SQueue
{
	_SNode* _PHead;
	_SNode* _PTail;
};

// 2. Khởi tạo DSLK.
void _init(_SQueue& q);

// 3. Tạo 1 node cho DSLK.
_SNode* _createNode(int _IData);

// 4. Add head/tail cho DSLK.
void PUSH(_SQueue& q, _SNode* _PN); // _addTail

// 5. Thiết kế hàm input/output.
void _input(_SQueue& q);
void _output(_SQueue q);

// 6. Xử lý các yêu cầu cho DSLK.
bool EMPTY(_SQueue q);
int FRONT(_SQueue q);
int BACK(_SQueue q);

// 7. Giải phóng các phần tử trong DSLK.
void POP(_SQueue& q); // Xóa phần tử đầu.

int main()
{
	_SQueue _QI;
	_input(_QI);

	cout << endl << "Phan tu dau: " << FRONT(_QI) << endl;
	cout << "Phan tu cuoi: " << BACK(_QI) << endl;
	_output(_QI);

	system("pause");
	return 0;
}

void _init(_SQueue& q)
{
	q._PHead = q._PTail = nullptr;
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

void PUSH(_SQueue& q, _SNode* _PN)
{
	if (q._PHead == nullptr)
	{
		q._PHead = q._PTail = _PN;
	}
	else
	{
		q._PTail->_PNext = _PN; // Cho nút cuối cùng trỏ vào nút vừa tạo.
		q._PTail = _PN; // Cập nhật lại pTail.
	}
}

void POP(_SQueue& q)
{
	if (!EMPTY(q))
	{
		_SNode* _Temp = q._PHead;
		q._PHead = q._PHead->_PNext;
		delete _Temp;
	}
}

void _input(_SQueue& q)
{
	_init(q); // Khởi tạo danh sách.
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
		PUSH(q, _createNode(_IData));
	}
}

void _output(_SQueue q)
{
	while (!EMPTY(q))
	{
		cout << FRONT(q) << " ";
		POP(q);
	}
}

bool EMPTY(_SQueue q)
{
	return (q._PHead == nullptr ? true : false);
}

int FRONT(_SQueue q)
{
	return q._PHead->_IData;
}

int BACK(_SQueue q)
{
	return q._PTail->_IData;
}

