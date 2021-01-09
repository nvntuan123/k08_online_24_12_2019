// Đệ quy hỗ tương.

#include <iostream>

using namespace std;

bool _isEven(int _IN);
bool _isOdd(int _IN);

int main()
{
	int _IN = 8;

	if (_isOdd(_IN))
	{
		cout << _IN << " la so le." << endl;
	}
	else
	{
		cout << _IN << " la so chan." << endl;
	}

	/*if (_isEven(_IN))
	{
		cout << _IN << " la so chan." << endl;
	}
	else
	{
		cout << _IN << " la so le." << endl;
	}*/

	system("pause");
	return 0;
}

bool _isEven(int _IN)
{
	// Điều kiện dừng
	if (_IN == 0)
		return true;
	if (_IN == -1)
		return false;

	// CT: đệ quy tức là bước lặp.
	return _isOdd(_IN - 1);
}

bool _isOdd(int _IN)
{
	// Điều kiện dừng
	if (_IN == 1)
		return true;
	if (_IN == 0)
		return false;

	// CT: đệ quy tức là bước lặp.
	return _isEven(_IN - 1);
}

