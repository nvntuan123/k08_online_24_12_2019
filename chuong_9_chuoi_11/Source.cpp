/*Xây dựng lại hàm strlen.*/
#include <iostream>

using namespace std;

int _strLen(const char* _Str)
{
	if (_Str != NULL)
	{
		int _ICount = 0;
		while (_Str[_ICount++] != '\0') {}
		return _ICount - 1;
	}
	return 0;
}

int main()
{
	char _StrName[100] = "Hung Cho Dien";

	cout << _strLen(_StrName) << endl;

	system("pause");
	return 0;
}

