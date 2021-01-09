#include <iostream>
#include <queue>

using namespace std;

int main()
{
	queue<int> _QI;

	int _IN;
	cout << "Nhap vao so luong phan tu: ";
	cin >> _IN;

	// Input.
	for (size_t i = 0; i < _IN; i++)
	{
		int _IData;
		cout << "Nhap vao phan tu thu " << i + 1 << ": ";
		cin >> _IData;

		_QI.push(_IData);
	}

	cout << "Phan tu dau: " << _QI.front() << endl;
	cout << "Phan tu cuoi: " << _QI.back() << endl;
	cout << "Kich thuoc: " << _QI.size() << endl;
	queue<int> _QI1;

	_QI.swap(_QI1);
	// Output.
	if (_QI.empty())
	{
		cout << "_QI empty." << endl;
	}
	while (!_QI1.empty())
	{
		cout << _QI1.front() << " ";
		_QI1.pop();
	}

	system("pause");
	return 0;
}

