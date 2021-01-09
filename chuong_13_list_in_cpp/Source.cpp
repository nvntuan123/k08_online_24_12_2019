#include <iostream>
#include <list>

using namespace std;

struct Employee
{
	int IID; // Mã.
	string SFullName; // Họ tên.
	int IAge; // Tuổi.
	int ISalary; // Lương.
};

void _linkedListInput(list<int>& _Lst);
void _linkedListOutput(list<int> _Lst);

int main()
{
	// Template class.
	list<int> _Lst; // Danh sách liên kết đơn với kiểu list có sẵn trong C++.
	_linkedListInput(_Lst);
	cout << "Danh sach vua nhap vao la: ";
	_linkedListOutput(_Lst);

	//cout << endl << "Size: " << _Lst.size() << endl;
	//cout << "Max size: " << _Lst.max_size() << endl;

	//_Lst.pop_front(); // Xóa đầu.
	//cout << endl << "Danh sach sau khi xoa phan tu dau: ";

	//_Lst.pop_back(); // Xóa cuối.
	//cout << endl << "Danh sach sau khi xoa phan tu cuoi: ";

	//_linkedListOutput(_Lst);

	//_Lst.begin(); // Con trỏ pHead.
	//_Lst.end(); // Con trỏ pTail.
	//_Lst.clear();
	if (_Lst.empty())
	{
		cout << endl << "Danh sach rong." << endl;
	}

	/*
	_Lst.back() -> Lấy ra phần từ cuối: _Lst.pHead->_IData.
	_Lst.front() -> Lấy ra phần tử đầu: _Lst.pTail->_IData.
	*/
	//cout << endl << "Phan tu cuoi: " << _Lst.back() << endl;
	//cout << "Phan tu dau: " << _Lst.front() << endl;

	/*list<int>::iterator it = _Lst.begin();
	it++;
	_Lst.insert(it, 69);

	cout << endl << "Danh sach vua them so 69 vao truoc nut 2 la: ";
	_linkedListOutput(_Lst);

	it--;
	_Lst.erase(it);
	cout << endl << "Danh sach vua xoa nut 2 la: ";
	_linkedListOutput(_Lst);*/

	/*_Lst.remove(3);
	cout << endl << "Danh sach vua xoa so 7: ";
	_linkedListOutput(_Lst);*/

	_Lst.sort();
	cout << endl << "Danh sach sau khi sap xep: ";
	_linkedListOutput(_Lst);

	system("pause");
	return 0;
}

void _linkedListInput(list<int>& _Lst)
{
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
		//_Lst.push_front(_IData); //_addHead(_Lst, _PNode);
		_Lst.push_back(_IData); //_addTail(_Lst, _createNode(_IData));
	}
}

void _linkedListOutput(list<int> _Lst)
{
	/*_SNode* _PNode;
	for (_PNode = _Lst._PHead; _PNode != nullptr; _PNode = _PNode->_PNext)
	{
		cout << _PNode->_IData << " ";
	}*/
	if (!_Lst.empty())
	{
		for (list<int>::iterator i = _Lst.begin(); i != _Lst.end(); i++)
		{
			cout << *i << " ";
		}
	}
	else
	{
		cout << "Danh sach rong!" << endl;
	}
}

