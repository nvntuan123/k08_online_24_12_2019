#include <iostream>
#include <string>
#include <Windows.h>
#include <conio.h> // _getch().

using namespace std;

/*
Viết chương trình nhập mật khẩu và sau khi nhấn vào
bàn phím thì 1 chút sau nó sẽ biến thành “ * ”, quá trình
nhập kết thúc khi nhấn phím Enter. Và xuất ra mật khẩu người dùng đã nhập vào từ bàn phím.
*/

bool _isPressKey(int x)
{
	return GetAsyncKeyState(x);
}

int main()
{
	char _CKyTu;
	cout << "Nhap vao mat khau: ";

	//char _STRPassword[1000];
	size_t _Length = 0;
	string _STRPassword;

	while ((_CKyTu = _getch()) != EOF)
	{
		if (_isPressKey(VK_RETURN))
			break;

		cout << "*";
		//_STRPassword[_Length++] = _CKyTu;
		_STRPassword.push_back(_CKyTu);
	}
	//_STRPassword[_Length] = '\0';
	cout << endl << "Mat khau vua nhap vao la: " << _STRPassword << endl;

	cout << endl;
	system("pause");
	return 0;
}

