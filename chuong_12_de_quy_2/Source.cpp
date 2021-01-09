// Đệ quy nhị phân.

#include <iostream>

using namespace std;

int _fibonacyRecursion(int _IN);
int _fibonacyForloop(int _IN);

int main()
{
	/*
	Tính số hạng thứ n của dãy Fibonacy. Dãy Fibonacy được định nghĩa như sau:
	F(0) = F(1) = 1 => Điều kiện dừng.
	F(n) = F(n - 1) + F(n - 2) (Điều kiện n > 1) => CT
	VD: 1 1 2 3 5 8 13 21 34 55 89 ...
	*/

	cout << "Fabonacy de quy: " << _fibonacyRecursion(10) << endl;
	cout << "Fabonacy khu de quy: " << _fibonacyForloop(10) << endl;

	system("pause");
	return 0;
}

int _fibonacyRecursion(int _IN)
{
	// F(0) = F(1) = 1 => Điều kiện dừng.
	if (_IN == 0 || _IN == 1)
		return 1;

	// F(n) = F(n - 1) + F(n - 2) (Điều kiện n > 1) => CT
	return _fibonacyRecursion(_IN - 1) + _fibonacyRecursion(_IN - 2);
}

int _fibonacyForloop(int _IN)
{
	int _IFN1, _IFN2;
	_IFN1 = _IFN2 = 1;
	int _IFN;

	if (_IN <= 1)
		return _IFN1;

	for (size_t i = 2; i <= _IN; i++)
	{
		_IFN = _IFN1 + _IFN2;
		_IFN2 = _IFN1;
		_IFN1 = _IFN;
	}
	return _IFN;
}

/*
BTVN: 710: Sách 1000 bài tập lập trình C.
*/

