#include <iostream>
#include <Windows.h>

using namespace std;

// 1. Khai báo cấu trúc dữ liệu cho danh sách liên kết - số nguyên.
struct _SNode
{
	int _IData;
	_SNode* _PNext;
};

struct _SStack
{
	_SNode* PtrTop;
};

// 2. Khởi tạo DSLK.
void _init(_SStack& s);

// 3. Tạo 1 node cho DSLK.
_SNode* _createNode(int _IData);

// 4. Add head/tail cho DSLK.
void PUSH(_SStack& s, _SNode* _PN); // _addHead

// 5. Thiết kế hàm input/output.
void _input(_SStack& s);
void _output(_SStack s);

// 6. Xử lý các yêu cầu cho DSLK.
bool EMPTY(_SStack s);
int TOP(_SStack s); // Lấy ra phần tử đầu.

// 7. Giải phóng các phần tử trong DSLK.
void POP(_SStack& s); // Xóa phần tử đầu.

int main()
{
	_SStack s;
	_input(s);
	_output(s);

	system("pause");
	return 0;
}

void _init(_SStack& s)
{
	s.PtrTop = NULL;
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

void PUSH(_SStack& s, _SNode* _PN)
{
	if (s.PtrTop == nullptr)
	{
		s.PtrTop = _PN;
	}
	else
	{
		_PN->_PNext = s.PtrTop;
		s.PtrTop = _PN;
	}
}

void _input(_SStack& s)
{
	_init(s); // Khởi tạo danh sách.
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
		PUSH(s, _PNode);
	}
}

void _output(_SStack s)
{
	while (!EMPTY(s))
	{
		cout << TOP(s) << " "; // Lấy ra phần tử đầu.
		POP(s); // Loại bỏ phần tử đầu.
	}
}

void POP(_SStack& s)
{
	if (!EMPTY(s))
	{
		_SNode* _Temp = s.PtrTop;
		s.PtrTop = s.PtrTop->_PNext;
		delete _Temp;
	}
}

bool EMPTY(_SStack s)
{
	/*if (s.PtrTop == nullptr)
		return true;
	return false;*/

	return (s.PtrTop == nullptr ? true : false);
}

int TOP(_SStack s)
{
	return s.PtrTop->_IData;
}

