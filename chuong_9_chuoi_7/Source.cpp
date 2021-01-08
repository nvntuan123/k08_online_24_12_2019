#include <iostream>
#include <string>
#include <Windows.h>
#include <conio.h> // _getch().

using namespace std;

// Hàm có tham số kiểu ...
void _prinTextConsole(const char* _Str_Format, ...)
{
	va_list vaL;
	va_start(vaL, _Str_Format);
	vprintf(_Str_Format, vaL);
	va_end(vaL);
}

// Khóa cơ bản này là kiến thức cơ bản của cơ bản.

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
	//cin >> _CKyTu;

	while (_CKyTu = _getch() != EOF)
	{
		if (_isPressKey(0x0D))
			break;

		cout << "*";
	}

	cout << endl;
	system("pause");
	return 0;
}

