#include <iostream>

#define LH -1 // Cây con trái cao hơn cây con trái. Left hight
#define EH 0 // Hai cây con bằng nhau.
#define RH 1 // Cây con phải cao hơn cây con phải. Right hight

using namespace std;

// 1. Khai báo.
struct Node
{
	int IData;
	Node* PtrLeft;
	Node* PtrRight;
	int CBarFactor; // Chỉ số cân bằng của 2 con trái và con phải.
};

// 2 Khởi tạo
void _init(Node*& t);
// 3 Tạo nút.
Node* _createNode(int _IData);
// 4 Thêm nút vào cây.
int _treeInsertNode(Node*& t, int x);

// 5 Xử lý.
int _treeHight_Recursion(Node* Root);
void _treeRotateRight(Node*& Root);
void _treeRotateLeft(Node*& Root);
void _treeRotateLeftRight(Node*& Root); // Quay trái rồi quay phải.
void _treeRotateRightLeft(Node*& Root); // Quay phải rồi quay trái.
int _treeBalanceLeft(Node*& Root); // Cân bằng khi cây lệch trái.
int _treeBalanceRight(Node*& Root); // Cân bằng khi cây lệch phải.

void _treeInOder(Node* t);
void _treePreOrder(Node* t); // NLR.

// 6 Giải phóng.
void _treeFree(Node*& t);

int main()
{
	Node* t;
	_init(t);
	int _IArr[12] = { 55, 90, 45, 100, 95 };
	for (size_t i = 0; i < 5; i++)
	{
		_treeInsertNode(t, _IArr[i]);
		_treePreOrder(t);
		cout << endl;
	}

	// Nếu cây có 5 nút => 10 7 6 8 15
	// Nếu cây có 6 nút => 7 6 5 10 8 15

	system("pause");
	return 0;
}

// 2 Khởi tạo
void _init(Node*& t)
{
	t = nullptr;
}

// 3 Tạo nút.
Node* _createNode(int _IData)
{
	Node* p = new Node;
	if (p == nullptr)
		return nullptr;

	p->IData = _IData;
	p->PtrLeft = p->PtrRight = nullptr;
	p->CBarFactor = EH;
	return p;
}

/*
4 Thêm nút vào cây.
Quy định:
0: khi cấp phát không thành công tức là không đủ bộ nhớ hay bị lỗi gì đó hoặc là bị trùng dữ liệu trong cây.
1: Trường 2 con phải trái đã cân bằng.
2: Bị lệch trái hoặc lệch phải.
*/
int _treeInsertNode(Node*& t, int x)
{
	int _ICheck;
	if (t != nullptr)
	{
		if (t->IData == x) // Trung.
		{
			return 0; // Bị trùng.
		}
		else if (x < t->IData) // Thêm qua trái.
		{
			_ICheck = _treeInsertNode(t->PtrLeft, x);
			if (_ICheck < 2)
			{
				return _ICheck;
			}

			if (t->CBarFactor == EH) // 2 cây con = nhau.
			{
				// Thêm vào trái => bị lệch trái.
				t->CBarFactor = LH;
				return 2; // Cây bị lệch trái.
			}
			else if (t->CBarFactor == RH) // Cây con phải cao hơn con trái.
			{
				// Thêm vào trái => cân bằng.
				t->CBarFactor = EH;
				return 1; // Cây đã được cân bằng.
			}
			else // LH. Cây con trái cao hơn cây con phải.
			{
				_treeBalanceLeft(t);
				return 1; // Cây đã được cân bằng.
			}
		}
		else // Thêm qua phải.
		{
			_ICheck = _treeInsertNode(t->PtrRight, x);
			if (_ICheck < 2)
			{
				return _ICheck;
			}

			if (t->CBarFactor == EH) // 2 cây con = nhau.
			{
				// Thêm vào trái => bị lệch phải.
				t->CBarFactor = RH;
				return 2; // Cây bị lệch phải.
			}
			else if (t->CBarFactor == RH) // Cây con phải cao hơn con trái.
			{
				_treeBalanceRight(t);
				return 1; // Cây đã được cân bằng.
			}
			else // LH. Cây con trái cao hơn cây con phải.
			{
				t->CBarFactor = EH;
				return 1;
			}
		}
	}

	// Nút có giá trị null.
	t = _createNode(x);
	return 2;
}

int _treeHight_Recursion(Node* Root)
{
	if (Root != nullptr)
	{
		int _ILeft = _treeHight_Recursion(Root->PtrLeft);
		int _IRight = _treeHight_Recursion(Root->PtrRight);
		//int _IMax = _ILeft > _IRight ? _ILeft : _IRight;
		//return _IMax + 1;
		return (_ILeft > _IRight ? _ILeft + 1 : _IRight + 1);
	}
	return 0;
}

void _treeRotateRight(Node*& Root) // Quay phải.
{
	Node* Pivot = Root->PtrLeft;
	Root->PtrLeft = Pivot->PtrRight;
	Pivot->PtrRight = Root;

	switch (Pivot->CBarFactor)
	{
	case EH:
		Pivot->CBarFactor = RH;
		Root->CBarFactor = LH;
		break;
	case LH:
		Pivot->CBarFactor = EH;
		Root->CBarFactor = EH;
		break;
	}

	//if (Pivot->CBarFactor == LH)
	//{
	//	Pivot->CBarFactor = EH;
	//	Root->CBarFactor = EH;
	//}
	//else // EH
	//{
	//	Pivot->CBarFactor = RH;
	//	Root->CBarFactor = LH;
	//}

	Root = Pivot;
}

void _treeRotateLeft(Node*& Root) // Quay trái.
{
	Node* Pivot = Root->PtrRight;
	Root->PtrRight = Pivot->PtrLeft;
	Pivot->PtrLeft = Root;

	switch (Pivot->CBarFactor)
	{
	case RH:
		Pivot->CBarFactor = EH;
		Root->CBarFactor = EH;
		break;
	case EH:
		Pivot->CBarFactor = EH;
		Root->CBarFactor = RH;
		break;
	}

	Root = Pivot;
}

// Bị mất cân bằng trái phải => quay trái rồi quay phải.
void _treeRotateLeftRight(Node*& Root)
{
	_treeRotateLeft(Root->PtrLeft); // B1: Quay trái.
	_treeRotateRight(Root); // B2: Quay phải.
}

void _treeRotateRightLeft(Node*& Root)
{
	//Node* Temp = Root->PtrRight->PtrLeft;
	_treeRotateRight(Root->PtrRight); // B1: Quay phải.
	//Root->PtrRight = Temp;

	//Root->PtrRight = Pivot;

	//Node* Temp = Root->PtrRight; // RootRight.

	//Node* Pivot = Temp->PtrLeft;
	//Root->PtrRight = Pivot;
	//Temp->PtrLeft = Pivot->PtrRight;
	//Pivot->PtrRight = Temp;

	//switch (Pivot->CBarFactor)
	//{
	//case EH:
	//	Pivot->CBarFactor = RH;
	//	Temp->CBarFactor = EH;
	//	break;
	//case LH:
	//	Pivot->CBarFactor = EH;
	//	Temp->CBarFactor = EH;
	//	break;
	//}

	_treeRotateLeft(Root); // B2: Quay trái.
}

// Cân bằng khi cây lệch trái.
int _treeBalanceLeft(Node*& Root)
{
	Node* Temp = Root->PtrLeft;
	if (Temp->CBarFactor == RH) // Bị lệch trái phải.
	{
		_treeRotateLeftRight(Root); // Quay trái rồi quay phải.
		return 2;
	}
	else if (Temp->CBarFactor == LH) // Bị lệch trái trái.
	{
		_treeRotateRight(Root); // Quay phải.
		return 2;
	}
	else
	{
		_treeRotateRight(Root); // Quay phải.
		return 1;
	}
}

// Cân bằng khi cây lệch phải.
int _treeBalanceRight(Node*& Root)
{
	Node* Temp = Root->PtrRight;
	if (Temp->CBarFactor == RH) // Bị lệch phải phải.
	{
		_treeRotateLeft(Root); // Quay trái.
		return 2;
	}
	else if (Temp->CBarFactor == LH) // Bị lệch phải trái.
	{
		_treeRotateRightLeft(Root); // Quay phải rồi quay trái.
		return 2;
	}
	else
	{
		_treeRotateRight(Root); // Quay phải.
		return 1;
	}
}

void _treeInOder(Node* t)
{
	if (t != nullptr)
	{
		_treeInOder(t->PtrLeft);
		cout << t->IData << " ";
		_treeInOder(t->PtrRight);
	}
}

void _treePreOrder(Node* t)
{
	if (t != nullptr)
	{
		cout << t->IData << " ";
		_treePreOrder(t->PtrLeft);
		_treePreOrder(t->PtrRight);
	}
}

// 5 Xử lý.

// 6 Giải phóng.
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

