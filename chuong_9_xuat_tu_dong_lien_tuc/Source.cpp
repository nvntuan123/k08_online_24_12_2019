/*
5. Xuất ra các từ trên các dòng liên tiếp.
*/

// strtok
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

int main()
{
	char _Str[100] = "Hung    BeDe   Ahihi";

	// strtok.
	char* _StrSTRTOK = strtok(_Str, " ");

	cout << _StrSTRTOK << endl;

	_StrSTRTOK = strtok(NULL, " ");

	cout << _StrSTRTOK << endl;

	_StrSTRTOK = strtok(NULL, " ");

	cout << _StrSTRTOK << endl;

	cout << endl;
	system("pause");
	return 0;
}

