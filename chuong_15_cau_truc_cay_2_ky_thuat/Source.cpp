#include <iostream>
#include <queue>
#include <stack>
#include <Windows.h>

using namespace std;

/*
6 bước:
1. Khai báo cấu trúc dữ liệu cây.
2. Khởi tạo cây.
3. Tạo Node.
4. Nhập dữ liệu vào cây.
5. Xử lý theo yêu cầu cho cây.
6. Giải phóng cây(thu hồi những con trỏ).
*/

struct Node
{
	int _IData;
	Node* PtrLeft = nullptr;
	Node* PtrRight = nullptr;
	bool _BStatus = false;
};

// 2
void _init(Node*& t);
// 3
Node* _createNode(int _IData);
// 4
void _treeInsertNode(Node*& t, int x);
// 5
// NLR, LNR, LRN, NRL, RLN, RNL.
void _preOrder(Node* t); // NLR.
void _inOrder(Node* t); // LNR.
void _postOrder(Node* t); // LRN.
void _NRL(Node* t);
void _RLN(Node* t);
void _RNL(Node* t);

// Viết hàm đếm số lượng các nút trong cây.
// Sử dụng đệ quy
int demnode(Node* t);
// Sử dụng đệ quy đuôi.
void demnode_dequyduoi(Node* t, int& dem);
// Khử đệ quy.
int demnode_khudequy(Node* t);
// =======================================

/*
Node lá: là nút vô sinh tức là nút không con.
Node 1 con: là nút có con trái(pLeft) hoặc con phải(pRight) 1 trong 2 sẽ không trỏ vào NULL.
Node 2 con: là nút có con trái(pLeft) và con phải(pRight) đều không trỏ vào NULL.
*/
bool _bCheckNodeLa(Node* p); // Kiểm tra nút lá.
bool _bCheckNode1Con(Node* p); // Kiểm tra nút 1 con.
bool _bCheckNode2Con(Node* p); // Kiểm tra nút 2 con.
// Viết hàm đếm số lượng nút lá có trong cây.
// Đệ quy.
int demNodeLa_DeQuy(Node* t);
// Khử đệ quy.
int demNodeLa_KhuDeQuy(Node* t);
// Đệ quy đuôi.
void demNodeLa_DeQuyDuoi(Node* t, int& _ICount);
// ==========================================

// Viết hàm đếm số lượng nút 1 con có trong cây.
// Đệ quy.
int demNode1Con_DeQuy(Node* t);
// Khử đệ quy.
int demNode1Con_KhuDeQuy(Node* t);
// Đệ quy đuôi.
void demNode1Con_DeQuyDuoi(Node* t, int& _ICount);
// ==========================================

/*===========================QUEUE===========================*/

/*===========================================================*/

/*===========================STACK===========================*/
void _preOrder_STACK(Node* t);
void _inOrder_STACK(Node* t);
void _postOrder_STACK(Node* t); // LRN.
/*===========================================================*/

/*
1. Về nhà viết hàm đếm số lượng nút 2 con(sử dụng đệ quy, khử đệ quy, đệ quy đuôi).
2. Viết lại 5 hàm xuất dữ liệu của cây(sử dụng QUEUE và STACK).
3. Tính tổng các giá trị của tất cả các nút có trong cây(đệ quy, khử đệ quy, đệ quy đuôi).
4. Tính chiều cao của cây(đệ quy, khử đệ quy, đệ quy đuôi).
5. Tính bậc của nút(đệ quy, khử đệ quy, đệ quy đuôi).
6. Tính bậc của cây(đệ quy, khử đệ quy, đệ quy đuôi).
7. Xóa 1 node bất kỳ trong cây.
*/

// 3. Tính tổng các giá trị của tất cả các nút có trong cây(đệ quy, khử đệ quy, đệ quy đuôi).
int _treeSum(Node* t);
void _treeSum_DeQuyDuoi(Node* t, int& _ISum); // Đệ quy đuôi.
int _treeSum_KhuDeQuy(Node* t); // Khử đệ quy.

// 5. Tính bậc của nút(đệ quy, khử đệ quy, đệ quy đuôi).
int _tinhBacCua1Node(Node* x); // Đệ quy.

// 6. Tính bậc của cây(đệ quy, khử đệ quy, đệ quy đuôi).
int _tinhBacCuaCay(Node* t, int&);

// 7. Xóa 1 node bất kỳ trong cây.
void _timNodeTheMang(Node*& x, Node*& y);
void _xoaNode(Node*& Root, int _IX);

// 6
void _treeFree(Node*& t);

int main()
{
	Node* t;
	_init(t);

	/*int _IN;
	cout << "Nhap n: ";
	cin >> _IN;
	for (size_t i = 0; i < _IN; i++)
	{
		int _IData;
		cout << "Nhap vao phan tu thu " << i + 1 << ": ";
		cin >> _IData;

		_treeInsertNode(t, _IData);
	}*/
	int _IArr[12] = { 5, 1, 9, -1, 3, -2, 0, 7, 6, 10, 15 };
	for (size_t i = 0; i < 11; i++)
	{
		_treeInsertNode(t, _IArr[i]);
	}
	// Duyệt trước(Pre-order).
	cout << "De quy: ";
	//_preOrder(t); // NLR.

	// Duyệt giữa(In-Order) => Sắp xếp tăng dần.
	_inOrder(t); // LNR.

	// Duyệt sau(Post-Order).
	//_postOrder(t); // LRN.

	//_NRL(t);
	//_RLN(t);
	//_RNL(t); // Sắp xếp giảm dần.

	//cout << endl << "Stack: ";
	//_preOrder_STACK(t);
	//_inOrder_STACK(t);
	//_postOrder_STACK(t);
	//cout << endl;

	/*cout << "De quy. Tong so nut trong cay vua nhap la: " << demnode(t) << endl;
	int _ICount = 0;
	demnode_dequyduoi(t, _ICount);
	cout << "De quy duoi. Tong so nut trong cay vua nhap la: " << _ICount << endl;
	cout << "Khu de quy. Tong so nut trong cay vua nhap la: " << demnode_khudequy(t) << endl;

	cout << endl << "=============Dem So Nut La=============" << endl;
	cout << "De quy: " << demNodeLa_DeQuy(t) << endl;
	cout << "Khu de quy: " << demNodeLa_KhuDeQuy(t) << endl;
	int _ICount1 = 0;
	demNodeLa_DeQuyDuoi(t, _ICount1);
	cout << "De quy duoi: " << _ICount1 << endl;

	cout << endl << "=============Dem So Nut 1 Con=============" << endl;
	cout << "De quy: " << demNode1Con_DeQuy(t) << endl;
	cout << "Khu de quy: " << demNode1Con_KhuDeQuy(t) << endl;
	int _ICount2 = 0;
	demNode1Con_DeQuyDuoi(t, _ICount2);
	cout << "De quy duoi: " << _ICount2 << endl;*/

	//cout << "Bac cua nut " << t->PtrLeft->PtrLeft->PtrRight->_IData << ": " << _tinhBacCua1Node(t->PtrLeft->PtrLeft->PtrRight) << endl;
	/*int _IBac1Node = _tinhBacCua1Node(t->PtrRight->PtrRight);
	if (_IBac1Node == -1)
	{
		cout << "Node rong, khong the tim duoc bac." << endl;
	}
	{
		cout << "Bac cua nut " << t->PtrRight->PtrRight->_IData << ": " << _IBac1Node << endl;
	}

	int _IMax = 0;
	if (_tinhBacCuaCay(t, _IMax) == -1)
	{
		cout << "Cay rong, khong tim duoc bac." << endl;
	}
	else
	{
		cout << "Bac cua cay: " << _IMax << endl;
	}*/

	//_xoaNode(t, 15);
	//cout << endl << "Cay sau khi xoa: ";
	//_inOrder(t); // LNR.

	cout << endl << "De quy. Tong gia tri cac nut trong cay: " << _treeSum(t) << endl;
	cout << "Khu de quy. Tong gia tri cac nut trong cay: " << _treeSum_KhuDeQuy(t) << endl;
	int _ISum = 0;
	_treeSum_DeQuyDuoi(t, _ISum);
	cout << "De quy duoi. Tong gia tri cac nut trong cay: " << _ISum << endl;
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
	Node* p = new Node;
	if (p == nullptr)
		return nullptr;

	p->_IData = _IData;
	p->PtrLeft = p->PtrRight = nullptr;
	return p;
}

void _treeInsertNode(Node*& t, int x)
{
	if (t == nullptr)
	{
		Node* q = _createNode(x);
		if (q != nullptr)
			t = q;
	}
	else
	{
		if (x > t->_IData)
		{
			_treeInsertNode(t->PtrRight, x);
		}
		if (x < t->_IData)
		{
			_treeInsertNode(t->PtrLeft, x);
		}
	}
}

void _preOrder(Node* t)
{
	if (t != nullptr)
	{
		cout << t->_IData << " ";
		_preOrder(t->PtrLeft);
		_preOrder(t->PtrRight);
	}
}

void _inOrder(Node* t)
{
	if (t != nullptr)
	{
		_inOrder(t->PtrLeft);
		cout << t->_IData << " ";
		_inOrder(t->PtrRight);
	}
}

void _postOrder(Node* t)
{
	if (t != nullptr)
	{
		_postOrder(t->PtrLeft);
		_postOrder(t->PtrRight);
		cout << t->_IData << " ";
	}
}

void _NRL(Node* t)
{
	if (t != nullptr)
	{
		cout << t->_IData << " ";
		_NRL(t->PtrRight);
		_NRL(t->PtrLeft);
	}
}

void _RLN(Node* t)
{
	if (t != nullptr)
	{
		_RLN(t->PtrRight);
		_RLN(t->PtrLeft);
		cout << t->_IData << " ";
	}
}

void _RNL(Node* t)
{
	if (t != nullptr)
	{
		_RNL(t->PtrRight);
		cout << t->_IData << " ";
		_RNL(t->PtrLeft);
	}
}

bool _bCheckNodeLa(Node* p)
{
	return (p->PtrLeft == nullptr && p->PtrRight == nullptr);
}

bool _bCheckNode1Con(Node* p)
{
	return (((p->PtrLeft != nullptr) && (p->PtrRight == nullptr))
		|| ((p->PtrLeft == nullptr) && (p->PtrRight != nullptr))
		);
}

bool _bCheckNode2Con(Node* p)
{
	return (p->PtrLeft != nullptr && p->PtrRight != nullptr);
}

int demnode(Node* t)
{
	if (t == nullptr)
		return 0;

	return demnode(t->PtrLeft) + demnode(t->PtrRight) + 1;
}

void demnode_dequyduoi(Node* t, int& dem)
{
	if (t != nullptr)
	{
		dem++;
		demnode_dequyduoi(t->PtrLeft, dem);
		demnode_dequyduoi(t->PtrRight, dem);
	}
}

int demnode_khudequy(Node* t)
{
	queue<Node*> q;
	if (t != nullptr)
		q.push(t);

	int _ICount = 0;
	while (!q.empty())
	{
		Node* x = q.front(); // Lấy nút đầu trong hàng đợi.
		_ICount++;
		q.pop();

		if (x->PtrLeft != nullptr)
		{
			q.push(x->PtrLeft);
		}
		if (x->PtrRight != nullptr)
		{
			q.push(x->PtrRight);
		}
	}
	return _ICount;
}

int demNodeLa_DeQuy(Node* t)
{
	if (t == nullptr)
		return 0;

	int _ICount = 0;
	if (_bCheckNodeLa(t))
	{
		cout << t->_IData << " ";
		// return 1; // Nguy hiem.
		_ICount = 1;
	}

	return demNodeLa_DeQuy(t->PtrLeft) + demNodeLa_DeQuy(t->PtrRight) + _ICount;
}

int demNodeLa_KhuDeQuy(Node* t)
{
	queue<Node*> q;
	if (t != nullptr)
	{
		q.push(t);
	}

	int _ICount = 0;
	while (!q.empty())
	{
		Node* x = q.front(); // Lấy nút đầu trong hàng đợi.
		if (_bCheckNodeLa(x))
		{
			++_ICount;
		}
		q.pop();

		if (x->PtrLeft != nullptr)
		{
			q.push(x->PtrLeft);
		}
		if (x->PtrRight != nullptr)
		{
			q.push(x->PtrRight);
		}
	}
	return _ICount;
}

void demNodeLa_DeQuyDuoi(Node* t, int& _ICount)
{
	if (t != nullptr)
	{
		if (_bCheckNodeLa(t))
		{
			++_ICount;
		}
		demNodeLa_DeQuyDuoi(t->PtrLeft, _ICount);
		demNodeLa_DeQuyDuoi(t->PtrRight, _ICount);
	}
}

int demNode1Con_DeQuy(Node* t)
{
	if (t == nullptr)
		return 0;

	int _ICount = 0;
	if (_bCheckNode1Con(t))
	{
		cout << t->_IData << " ";
		_ICount = 1;
	}

	return demNode1Con_DeQuy(t->PtrLeft) + demNode1Con_DeQuy(t->PtrRight) + _ICount;
}

int demNode1Con_KhuDeQuy(Node* t)
{
	queue<Node*> q;
	if (t != nullptr)
	{
		q.push(t);
	}

	int _ICount = 0;
	while (!q.empty())
	{
		Node* x = q.front(); // Lấy nút đầu trong hàng đợi.
		if (_bCheckNode1Con(x))
		{
			++_ICount;
		}
		q.pop();

		if (x->PtrLeft != nullptr)
		{
			q.push(x->PtrLeft);
		}
		if (x->PtrRight != nullptr)
		{
			q.push(x->PtrRight);
		}
	}
	return _ICount;
}

void demNode1Con_DeQuyDuoi(Node* t, int& _ICount)
{
	if (t != nullptr)
	{
		if (_bCheckNode1Con(t))
		{
			++_ICount;
		}
		demNode1Con_DeQuyDuoi(t->PtrLeft, _ICount);
		demNode1Con_DeQuyDuoi(t->PtrRight, _ICount);
	}
}

void _preOrder_STACK(Node* t) // NLR => Đảo ngược của là: NRL
{
	stack<Node*> s;
	if (t != nullptr)
	{
		s.push(t);
	}

	while (!s.empty())
	{
		Node* x = s.top();
		cout << x->_IData << " "; // Node(N).
		s.pop();

		if (x->PtrRight != nullptr) // Right(R).
		{
			s.push(x->PtrRight);
		}

		if (x->PtrLeft != nullptr) // Left(L).
		{
			s.push(x->PtrLeft);
		}
	}
}

void _inOrder_STACK(Node* t) // LNR => RNL
{
	stack<Node*> s;
	if (t != nullptr)
	{
		s.push(t);
	}

	while (!s.empty())
	{
		Node* x = s.top(); // Lấy nút ở đỉnh ra.
		bool _BCheck = false;

		if (x->PtrRight != nullptr && !(x->PtrRight->_BStatus)) // Tồn tại con phải.
		{
			s.pop();
			s.push(x->PtrRight);
			s.push(x);
			x->PtrRight->_BStatus = true;
			_BCheck = true;
		}

		if (x->PtrLeft != nullptr && !(x->PtrLeft->_BStatus))
		{
			s.push(x->PtrLeft);
			x->PtrLeft->_BStatus = true;
			_BCheck = true;
		}

		if (!_BCheck)
		{
			cout << x->_IData << " ";
			s.pop();
		}
	}
}

void _postOrder_STACK(Node* t) // LRN => NRL
{
	stack<Node*> s;
	s.push(t);

	while (!s.empty())
	{
		Node* x = s.top();
		bool _BCheck = false;
		if (x->PtrRight != nullptr && !(x->PtrRight->_BStatus))
		{
			s.push(x->PtrRight);
			x->PtrRight->_BStatus = true;
			_BCheck = true;
		}
		if (x->PtrLeft != nullptr && !(x->PtrLeft->_BStatus))
		{
			s.push(x->PtrLeft);
			x->PtrLeft->_BStatus = true;
			_BCheck = true;
		}

		if (!_BCheck)
		{
			cout << x->_IData << " ";
			s.pop();
		}
	}
}

int _treeSum(Node* t)
{
	if (t == nullptr)
	{
		return 0;
	}

	return _treeSum(t->PtrLeft) + _treeSum(t->PtrRight) + t->_IData;
}

void _treeSum_DeQuyDuoi(Node* t, int& _ISum)
{
	if (t != nullptr)
	{
		_ISum += t->_IData;
		_treeSum_DeQuyDuoi(t->PtrLeft, _ISum);
		_treeSum_DeQuyDuoi(t->PtrRight, _ISum);
	}
}

int _treeSum_KhuDeQuy(Node* t)
{
	if (t == nullptr)
	{
		nullptr;
	}
	//queue<Node*> q;
	/*if (t != nullptr)
	{
		q.push(t);
	}*/
	stack<Node*> s;
	if (t != nullptr)
	{
		s.push(t);
	}

	int _ISum = 0;
	/*while (!q.empty())
	{
		Node* x = q.front();
		q.pop();
		_ISum += x->_IData;
		if (x->PtrLeft != nullptr)
		{
			q.push(x->PtrLeft);
		}
		if (x->PtrRight != nullptr)
		{
			q.push(x->PtrRight);
		}
	}*/
	while (!s.empty())
	{
		Node* x = s.top();
		s.pop();
		_ISum += x->_IData;
		if (x->PtrLeft != nullptr)
		{
			s.push(x->PtrLeft);
		}
		if (x->PtrRight != nullptr)
		{
			s.push(x->PtrRight);
		}
	}
	return _ISum;
}

int _tinhBacCua1Node(Node* x)
{
	if (x == nullptr)
	{
		return -1;
	}
	int _ICount = 0; // Node lá.
	/*if (_bCheckNode1Con(x))
	{
		_ICount = 1;
	}

	if (_bCheckNode2Con(x))
	{
		_ICount = 2;
	}*/

	if (x->PtrLeft != nullptr)
	{
		++_ICount;
	}

	if (x->PtrRight != nullptr)
	{
		++_ICount;
	}

	return _ICount;
}

int _tinhBacCuaCay(Node* Root, int& _IMax) // Root: là nút hiện hành.
{
	if (Root == nullptr)
	{
		return -1; // Cây rỗng.
	}

	// Node: xử lý.
	cout << Root->_IData << " ";
	int _IBacNode = _tinhBacCua1Node(Root);
	/*if (_IMax < _IBacNode)
	{
		_IMax = _IBacNode;
		if (_IMax == 2)
		{
			return 1;
		}
	}*/
	_IMax = _IMax < _IBacNode ? _IBacNode : _IMax;
	if (_IMax == 2)
	{
		return 1;
	}

	_tinhBacCuaCay(Root->PtrLeft, _IMax);
	_tinhBacCuaCay(Root->PtrRight, _IMax);

	return 1; // Cây không rỗng.
}

void _timNodeTheMang(Node*& x, Node*& y)
{
	if (y->PtrRight != nullptr)
	{
		_timNodeTheMang(x, y->PtrRight);
	}
	else
	{
		x->_IData = y->_IData;
		x = y;
		y = y->PtrLeft;
	}
}

void _xoaNode(Node*& Root, int _IX)
{
	if (Root == nullptr)
	{
		return;
	}

	if (_IX < Root->_IData)
	{
		_xoaNode(Root->PtrLeft, _IX);
	}
	else if (_IX > Root->_IData)
	{
		_xoaNode(Root->PtrRight, _IX);
	}
	else // Tìm thấy nút có giá trị cần xóa.
	{
		// TH1: Node cần xóa là nút lá.
		Node* _Temp = Root;
		//if (_bCheckNodeLa(Root))
		//{
		//	Root = nullptr;
		//}
		//else if (_bCheckNode1Con(Root)) // TH2: Node cần là nút 1 con.
		//{
		//	Root = (Root->PtrLeft == nullptr) ? Root->PtrRight : Root->PtrLeft;
		//}
		//else // TH3: Node 2 con.
		//{
		//	_timNodeTheMang(_Temp, Root->PtrRight);
		//}

		if (Root->PtrLeft == nullptr)
		{
			Root = Root->PtrRight;
		}
		else if (Root->PtrRight == nullptr)
		{
			Root = Root->PtrLeft;
		}
		else
		{
			_timNodeTheMang(_Temp, Root->PtrLeft);
		}

		delete _Temp;
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

