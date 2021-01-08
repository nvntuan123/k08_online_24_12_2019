#include <iostream>
#include <cmath>

using namespace std;

int main()
{

	int iThang, iNam;
	cout << "Nhap thang: ";
	cin >> iThang;
	cout << "Nhap nam: ";
	cin >> iNam;

	/*
	Thang 2 => Nam nhuan => 29.
	Nam khong nhuan = 28.
	Nhung thang co 31 ngay: 1 3 5 7 8 10 12.
	Nhung thang co 30 ngay: 4 6 9 11.

	Ta xet trong khoang 1, 3, 4, 5, 6, 7
	*/
	if (iThang <= 0 || iThang >= 13)
	{
		cout << "Nhap sai, thang nam trong khoang tu 1 -> 12. Vui long nhap lai." << endl;
	}
	else
	{
		if ((iNam % 400 == 0) || ((iNam % 4 == 0) && (iNam % 100 != 0)))
		{
			if (iThang == 2)
			{
				cout << "Thang 29 ngay." << endl;
			}
			/*else if ((iThang == 4) || (iThang == 6) || (iThang == 9) || (iThang == 11))
			{
				cout << "Thang 30 ngay." << endl;
			}
			else
			{
				cout << "Thang 31 ngay." << endl;
			}*/
			else if ((iThang >= 1) && (iThang <= 7))
			{
				if ((iThang % 2) == 0) // So chan.
				{
					cout << "Thang 30 ngay." << endl;
				}
				else
				{
					cout << "Thang 31 ngay." << endl;
				}
			}
			else
			{
				if (iThang % 2 == 0) // So chan.
				{
					cout << "Thang 31 ngay." << endl;
				}
				else
				{
					cout << "Thang 30 ngay." << endl;
				}
			}
		}
		else
		{
			if (iThang == 2)
			{
				cout << "Thang 28 ngay." << endl;
			}
			/*else if ((iThang == 4) || (iThang == 6) || (iThang == 9) || (iThang == 11))
			{
				cout << "Thang 30 ngay." << endl;
			}
			else
			{
				cout << "Thang 31 ngay." << endl;
			}*/

			else if ((iThang >= 1) && (iThang <= 7))
			{
				if (iThang % 2 == 0) // So chan.
				{
					cout << "Thang 31 ngay." << endl;
				}
				else
				{
					cout << "Thang 30 ngay." << endl;
				}
			}
			else
			{
				if (iThang % 2 == 0) // So chan.
				{
					cout << "Thang 30 ngay." << endl;
				}
				else
				{
					cout << "Thang 31 ngay." << endl;
				}
			}
		}
	}

	system("pause");
	return 0;
}

