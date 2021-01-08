#include <iostream>

using namespace std;

enum _DaysOfWeek
{
	SUNDAY = 1,
	MONDAY, // 2
	TUESDAY = 0,
	WEDNEDAY, // 1
	THURSDAY, // 2
	FRIDAY, // 3
	SATURDAY // 4
};

enum PressKey
{
	UP,
	DOWN,
	LEFT,
	RIGHT
};

enum _MenuFlim {
	HENTAI,
	JV,
	ROMANTIC,
	ACTION,
	ADVENTURE
};

void _showListHenTai() {
	cout << "La la la" << endl;
}
void _showListJV() {
	cout << "Ahihi" << endl;
}
void _showListROMANTIC() {
	cout << "Hung Yeu Kien" << endl;
}

void _showFilm(_MenuFlim _Menu)
{
	switch (_Menu)
	{
	case HENTAI:
		_showListHenTai();
		break;
	case JV:
		_showListJV();
		break;
	case ROMANTIC:
		_showListROMANTIC();
		break;
	case ACTION:
		_showListROMANTIC();
		break;
	case ADVENTURE:
		_showListROMANTIC();
		break;
	default:
		break;
	}
}

int main()
{
	//int _DaysOfWeek[7] = { 1, 2, 3, 4, 5, 6, 7 };

	//for (int i = 0; i < 7; i++)
	//{
	//	if (_DaysOfWeek[i] == 1) // CN.
	//		cout << "Sunday" << endl;
	//	if (_DaysOfWeek[i] == 2)
	//	{
	//		cout << "Monday" << endl;
	//	}
	//}

	//const int _FRIDAY = 6;
	//const int _SATURDAY = 7;
	//const int _THURSDAY = 5;
	//const int _SUNDAY = 1;
	//const int _MONDAY = 2;
	//const int _TUESDAY = 3;
	//const int _WEDNEDAY = 4;

	//cout << "Sunday: " << _SUNDAY << endl;

	//string _WeekDay[] = { "SUNDAY", "MONDAY" };
	//cout << _WeekDay[0] << endl;

	//_DaysOfWeek _Day = MONDAY;
	//cout << "Monday: " << MONDAY << endl;
	//cout << "Tuesday: " << TUESDAY << endl;
	//cout << "Wedneday: " << WEDNEDAY << endl;
	//cout << "Thurs: " << THURSDAY << endl;
	//cout << "Friday: " << FRIDAY << endl;
	//cout << "Saturday: " << SATURDAY << endl;
	//cout << "Sunday: " << SUNDAY << endl;

	//switch (_Day)
	//{
	//case SUNDAY:
	//	cout << "Chu Nhat" << endl;
	//	break;
	//case MONDAY:
	//	cout << "Thu 2" << endl;
	//	break;
	//case TUESDAY:
	//	cout << "Thu 3" << endl;
	//	break;
	///*case WEDNEDAY:
	//	cout << "Thu 4" << endl;
	//	break;
	//case THURSDAY:
	//	cout << "Thu 5" << endl;*/
	//	break;
	//case FRIDAY:
	//	cout << "Thu 6" << endl;
	//	break;
	//case SATURDAY:
	//	cout << "Thu 7" << endl;
	//	break;
	//default:
	//	cout << "Sai dinh dang." << endl;
	//	break;
	//}

	int _IValue = UP;
	double _DValue = UP;
	char _CValue = UP + 48;

	cout << "_IValue: " << _IValue << endl;
	cout << "_DValue: " << _DValue << endl;
	cout << "_CValue: " << _CValue << endl;

	//PressKey _Key = SUNDAY; // Error.
	PressKey _Key = UP; // Ok

	_showFilm(ACTION);

	system("pause");
	return 0;
}

