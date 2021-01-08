/*Bài 1: Viết chương trình nhập mật khẩu và sau khi nhấn vào bàn phím thì 1 chút sau nó sẽ biến thành " * ", quá trình nhập kết thúc khi nhấn phím enter.*/

#include <iostream>
#include <Windows.h>
#include <conio.h>

inline bool IsPressed(int press)
{
	return GetAsyncKeyState(press);
}

int main()
{
	int CASCII;
	int ITemp = 0;
	int IValueSide = 0;
	char CArr[50];

	printf("\nType your password: ");
	while ((CASCII = _getch()) != EOF)
	{
		if (IsPressed(VK_RETURN))
		{
			break;
		}
		if (CASCII >= 0 && CASCII <= 9)
		{
			CArr[ITemp++] = CASCII + 48;
		}
		else
		{
			CArr[ITemp++] = CASCII;
		}

		Sleep(10);
		std::cout << "*";
		IValueSide++;
	}

	std::cout << "\nYour password is: ";
	for (int i = 0; i <= IValueSide - 1; i++)
	{
		std::cout << CArr[i];
	}

	system("pause");
	return 0;
}

