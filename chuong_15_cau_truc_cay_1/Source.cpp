#include <iostream>

using namespace std;

/*
1. Khai báo cấu trúc dữ liệu cây nhị phân.
2. Khởi tạo cây.
3. Tạo node.
4. Nhập dữ liệu cho cây(tạo cây).
5. Các xử lý trên cây(duyệt cây, thêm, xóa,…).
6. Giải phóng cây.
*/

// 1. Khai báo cấu trúc dữ liệu cây nhị phân.
struct Node
{
	int _IData;
	Node* PtrLeft;
	Node* PtrRight;
};
//typedef Node* Tree;

// 2. Khởi tạo cây.
void _init(Node*& t); // Node* = Tree.
// 3. Tạo node.
Node* _createNode(int _IData);
// 4. Nhập dữ liệu cho cây(tạo cây).
void _treeInsertNode(Node*& t, int x); // // Node* = Tree.

// 5. Các xử lý trên cây(duyệt cây, thêm, xóa, …).
void NLR(Node* t); // Duyệt trước.
void LRN(Node* t); // Duyệt sau.
void LNR(Node* t); // Duyệt giữa.

// 6. Giải phóng cây.
void _treeFree(Node*& t);

int main()
{
	Node* t;
	_init(t);
	int _IN;
	cout << "Nhap so luong: ";
	cin >> _IN;
	for (size_t i = 0; i < _IN; i++)
	{
		int _IData;
		cout << "Nhap vap phan tu thu " << i + 1 << ": ";
		cin >> _IData;

		_treeInsertNode(t, _IData);
	}

	//NLR(t);
	LRN(t);
	//LNR(t);

	_treeFree(t);

	system("pause");
	return 0;
}

void _init(Node*& t)
{
	t = nullptr;
}

Node* _createNode(int _IData)
{
	Node* PtrNode = new Node;
	if (PtrNode == nullptr)
		return nullptr;

	PtrNode->_IData = _IData;
	PtrNode->PtrLeft = PtrNode->PtrRight = nullptr;
	return PtrNode;
}

void _treeInsertNode(Node*& t, int x)
{
	if (t == nullptr)
	{
		Node* PtrNode = _createNode(x);
		/*Node* PtrNode = new Node;
		if (PtrNode == nullptr)
		{
			cout << "May khong du bo nho!" << endl;
			return;
		}

		PtrNode->_IData = x;
		PtrNode->PtrLeft = PtrNode->PtrRight = nullptr;*/
		t = PtrNode;
		//t = _createNode(x);
	}
	else
	{
		if (x < t->_IData)
		{
			_treeInsertNode(t->PtrLeft, x); // Insert left.
		}
		if (x > t->_IData)
		{
			_treeInsertNode(t->PtrRight, x); // Insert right.
		}
	}
}

void NLR(Node* t) // Pre-order.
{
	if (t != nullptr)
	{
		cout << t->_IData << " ";
		NLR(t->PtrLeft); // Left.
		NLR(t->PtrRight); // Right.
	}
}

void LRN(Node* t) // Post-order.
{
	if (t != nullptr)
	{
		LRN(t->PtrLeft); // Left. 1
		LRN(t->PtrRight); // Right. nut 3(null 5(4(null null) null))
		cout << t->_IData << " ";
	}
}

void LNR(Node* t) // In-order.
{
	if (t != nullptr)
	{
		LNR(t->PtrLeft); // 1
		cout << t->_IData << " "; // 2
		LNR(t->PtrRight); // Nut 3(null 5(4 null))
	}
}

void _treeFree(Node*& t)
{
	if (t != nullptr)
	{
		_treeFree(t->PtrLeft);
		_treeFree(t->PtrRight);

		delete t;
		t = nullptr;
	}
}

