// Con tro va tham so cua ham. VD5.

#include <iostream>

using namespace std;

void SetToNull(int*& iPtr) // iPtr trong ham nay la ban sao cua iPtr trong ham main.
{
	// nullptr cai nay la con tro NULL trong C++11 nge chua.
	iPtr = nullptr;
	//*iPtr = 10;
}

int main()
{
	int iValue = 10;
	int* iPtr = &iValue; // iPtr la ban goc day nek.

	cout << "Vung nho cua iPtr truoc khi set to null la: " << iPtr << endl;
	SetToNull(iPtr);
	if (!iPtr)
		cout << "iPtr set to null." << endl;
	else
		cout << "iPtr not to null: " << iPtr << endl;

	cout << endl;
	system("pause");
	return 0;
}

