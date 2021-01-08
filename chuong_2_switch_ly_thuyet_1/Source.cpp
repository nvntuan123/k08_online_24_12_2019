#include <iostream>

using namespace std;

int main()
{
	double a, b;

	string str;
	bool bCheck = true;
	int value;
	cout << "Nhap vao value = ";
	cin >> value;

	switch (value)
	{
	case 1: // Hom nay troi
		cout << "Toi se nghi hoc." << endl;
	case 2: // Hom nay troi khong.
		cout << "Toi se di hoc" << endl;
		break;
	default:
		cout << "Troi mua hay khong mua toi van di hoc." << endl;
	}

	if (bCheck)
	{

	}

	system("pause");
	return 0;
}

