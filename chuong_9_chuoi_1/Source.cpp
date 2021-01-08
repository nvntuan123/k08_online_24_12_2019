#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
	/*string* _StrName = new string[6];
	_StrName[0] = "Huy om";
	_StrName[1] = "Huy map";
	_StrName[2] = "Hong Anh";
	_StrName[3] = "Hung";
	_StrName[4] = "Kien";
	_StrName[5] = "Harri";

	delete[] _StrName;*/

	//vector<string> _StrArr;
	//int _ISiSo = 6;
	//_StrArr.resize(_ISiSo); // Cap phat bo nho.
	//_StrArr[0] = "Huy om";
	//_StrArr[1] = "Huy map";
	//_StrArr[2] = "Hong Anh";
	//_StrArr[3] = "Hung";
	//_StrArr[4] = "Kien";
	//_StrArr[5] = "Harri";

	string _Str; // Khai bao.
	string _S0("Initial string");
	string _S1(_S0);
	string _S2(_S0, 8, 3); // string string_name(string _Str, int IndexStart, int _ICount);
	string _S3("Nguyen Nhat Tuan", 6);
	string _S4(5, 'X'); // XXXXX
	string _S5(5, 97); // *****
	string _S7(_S0.begin(), _S0.begin() + 6);

	cout << "_S0 = " << _S0 << endl;
	cout << "_S1 = " << _S1 << endl;
	cout << "_S2 = " << _S2 << endl;
	cout << "_S3 = " << _S3 << endl;
	cout << "_S4 = " << _S4 << endl;
	cout << "_S5 = " << _S5 << endl;
	cout << "_S7 = " << _S7 << endl;

	char _StrC[] = "Initial string";

	system("pause");
	return 0;
}

