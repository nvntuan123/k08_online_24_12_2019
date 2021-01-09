#include <iostream>
#include <stack>

using namespace std;

int main()
{
	stack<int> _SI;

	int _IN;
	cout << "Nhap vao so luong phan tu: ";
	cin >> _IN;

	// Input.
	for (size_t i = 0; i < _IN; i++)
	{
		int _IData;
		cout << "Nhap vao phan tu thu " << i + 1 << ": ";
		cin >> _IData;

		_SI.push(_IData);
	}

	cout << "Size of stack: " << _SI.size() << endl;

	stack<int> _SI1;
	for (size_t i = 0; i < _IN; i++)
	{
		_SI1.push(10 - i);
	}
	_SI.swap(_SI1);
	// Output.
	int _ILengthStack = _SI.size();
	for (size_t i = 0; i < _ILengthStack; i++)
	{
		cout << _SI1.top() << " "; // Lay ra phan tu dau.
		_SI1.pop(); // Loai bo phan tu vua lay ra.
	}

	//while (!_SI.empty())
	//{
	//	cout << _SI.top() << " "; // Lay ra phan tu dau.
	//	_SI.pop(); // Loai bo phan tu vua lay ra.
	//}

	if (_SI.empty())
	{
		cout << "Stack empty." << endl;
	}

	system("pause");
	return 0;
}

