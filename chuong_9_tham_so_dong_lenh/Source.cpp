#include <iostream>

using namespace std;

void _giaiPTBac1(double _IA, double _IB)
{
	if (!_IA) // Truong hop a == 0
	{
		if (!_IB) // TH b = 0.
		{
			cout << "PT vo so nghiem." << endl;
		}
		else // TH b != 0.
		{
			cout << "PT vo nghiem." << endl;
		}
	}
	else // TH a != 0.
	{
		double x = -_IB / _IA;
		cout << "Phuong trinh co nghiem x = " << x << endl;
	}
}

void _giaiPTBac2(double _IA, double _IB, double _IC)
{
	if (_IA == 0)
	{
		_giaiPTBac1(_IB, _IC);
	}
	else
	{
		double delta = (_IB * _IB) - (4 * _IA * _IC);
		if (delta > 0)
		{
			double x1 = (-_IB + sqrt(delta)) / (2 * _IA);
			double x2 = (-_IB - sqrt(delta)) / (2 * _IA);
			cout << "Phuong trinh co 2 nghiem phan biet x1 = " << x1 << " & x2 = " << x2;
		}
		else if (delta == 0)
		{
			double x = (-_IB) / (2 * _IA);
			cout << "Phuong trinh nghiem kep x1 = x2 = " << x << endl;
		}
		else
		{
			cout << "Phuong trinh vo nghiem" << endl;
		}
	}
}

int main(int argc, const char* argv[]) // char** argv <=> char* argv[].
{
	// argc: số lượng tham số đầu vào.
	// argv: danh sách tham số đầu bào(bao gồm tên Project).
	/*
	Mảng ký tự: char _Str[100] = "Nhat Tuan";
	Mảng chuỗi: char* _StrListName[] = { "Nhat Tuan", "Huy om", "Harri" };
	*/

	if (argc == 3)
	{
		double _DA = atof(argv[1]);
		double _DB = atof(argv[2]);

		_giaiPTBac1(_DA, _DB);
	}
	else if (argc == 4)
	{
		double _DA = atof(argv[1]);
		double _DB = atof(argv[2]);
		double _DC = atof(argv[3]);

		_giaiPTBac2(_DA, _DB, _DC);
	}
	else
	{
		cout << "Sai dinh dang. " << endl;
	}

	/*char _Str[100] = "Nhat Tuan";
	char* _StrListName[] = { "Nhat Tuan", "Huy om", "Harri" };

	cout << "Mang ky tu: " << _Str << endl;

	cout << "Mang chuoi: " << endl;
	unsigned short _S_Length = sizeof(_StrListName) / sizeof(char*), i = 0;
	while (i < _S_Length)
	{
		cout << _StrListName[i] << endl;
		i++;
	}*/

	system("pause");
	return 0;
}

