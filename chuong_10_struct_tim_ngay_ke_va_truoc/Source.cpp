//10. Ngày tháng năm : kiểm tra hợp lệ, tìm ngày kế tiếp và ngày trước đó.
#include<iostream>
using namespace std;

struct DATE {
	int iDay;
	int iMonth;
	int iYear;
};

void inputDate(DATE&);
void showDate(const DATE);
bool isLeapYear(int); // Kiểm tra năm nhuận.
bool isDate(const DATE); // Kiểm tra ngày tháng năm hợp lệ.
DATE findNextDay(const DATE); // Ngày mai.
DATE findYesterday(const DATE); // Ngày hôm qua.

int main()
{
	DATE d;
	cout << "enter date: " << endl;
	inputDate(d);
	if (!isDate(d))
	{
		cout << "Ngay thang nam khong hop le!" << endl;
	}
	else
	{
		cout << "date: ";
		showDate(d);

		DATE nextDay = findNextDay(d);
		cout << "\nnext day: ";
		showDate(nextDay);

		DATE yesterday = findYesterday(d);
		cout << "\nyesterday: ";
		showDate(yesterday);
		cout << endl;
	}

	system("pause");
	return 0;
}

void inputDate(DATE& d)
{
	cout << "enter day: ";
	cin >> d.iDay;
	cout << "enter month: ";
	cin >> d.iMonth;
	cout << "enter year: ";
	cin >> d.iYear;
}

void showDate(const DATE d)
{
	cout << d.iDay << "/" << d.iMonth << "/" << d.iYear;
}

bool isLeapYear(int year)
{
	/*Năm nhuận là :
		Năm chia hết cho 4 nhưng không chia hết cho 100.
		Hoặc năm chia hết cho 400.*/
		/*if (!(year % 400) || (!(year % 4) && year % 100))
			return true;
		return false;*/

	return (!(year % 400) || (!(year % 4) && year % 100));
}

bool isDate(const DATE d)
{
	if (d.iDay < 1 || d.iYear < 1)
	{
		return false;
	}
	else
	{
		switch (d.iMonth)
		{
		case 2:
			if (isLeapYear(d.iYear))
			{
				if (d.iDay < 30)
					return true;
			}
			else
			{
				if (d.iDay < 29)
					return true;
			}
			break;
		case 4: case 6: case 9: case 11:
			if (d.iDay < 31)
				return true;
			break;
		default:
			if (d.iMonth > 12 || d.iMonth < 1)
				return false;
			if (d.iDay < 32)
				return true;
			break;
		}
	}

	return false;
}

DATE findNextDay(const DATE d)
{
	DATE nextDay;
	nextDay.iDay = d.iDay;
	nextDay.iMonth = d.iMonth;
	nextDay.iYear = d.iYear;
	/*nextDay.iDay = d.iDay + 1;
	nextDay.iMonth = d.iMonth;
	nextDay.iYear = d.iYear;

	if (d.iDay == 31)
	{
		nextDay.iDay = 1;
		if (d.iMonth == 12)
		{
			nextDay.iMonth = 1;
			nextDay.iYear = d.iYear + 1;
		}
		else
		{
			nextDay.iMonth = d.iMonth + 1;
		}
	}
	else if (d.iMonth == 4 || d.iMonth == 6 || d.iMonth == 9 || d.iMonth == 11)
	{
		if (d.iDay == 30)
		{
			nextDay.iDay = 1;
			nextDay.iMonth = d.iMonth + 1;
		}
	}
	else if (d.iMonth == 2)
	{
		if (d.iDay == 29 || (d.iDay == 28 && !(isLeapYear(d.iYear))))
		{
			nextDay.iDay = 1;
			nextDay.iMonth = d.iMonth + 1;
		}
	}*/
	int _ILastDayOfMonth;

	/*
	B1: Tìm ngày cuối tháng.
	B2: So sánh xem ngày nhập có bằng ngày cuối tháng hay không.
		- Nếu =: Ta cho day = 1
		- Ngược lại: day + 1.
	B3: Tìm tháng. Nếu như là tháng 12 => Month = 1, ngược lại Month + 1.
	B4: Ta xét ngày = 1 và thàng = 1 => Year + 1, ngược lại Year + 0.
	*/

	//B1: Tìm ngày cuối tháng.
	switch (d.iMonth)
	{
	case 2:
		if (isLeapYear(d.iYear))
		{
			_ILastDayOfMonth = 29;
		}
		else
		{
			_ILastDayOfMonth = 28;
		}
		break;
	case 4: case 6: case 9: case 11:
		_ILastDayOfMonth = 30;
		break;
	default:
		_ILastDayOfMonth = 31;
		break;
	}

	/*
	B2: So sánh xem ngày nhập có bằng ngày cuối tháng hay không.
		- Nếu =: Ta cho day = 1
		- Ngược lại: day + 1.
	*/

	// Cách 1 sử dụng if else để làm - cũng giống như đang còn trên núi luyện kungfu.
	/*if (d.iDay == _ILastDayOfMonth)
	{
		nextDay.iDay = 1;
	}
	else
	{
		nextDay.iDay += 1;
	}*/

	// Cách 2: không cần sử dụng if else nhưng vẫn cho ra kết quả - cũng giống như lúc này đã xuống hành tẩu giang hồ và có thể chấp 10 thèn luôn đó.
	nextDay.iDay = (d.iDay % _ILastDayOfMonth) + 1;

	// B3: Xét xem ngày vừa cập nhật ở trên.
	// - Nếu ngày = 1 là đồng nghĩa với việc ngày nhập vào là 31 => Nếu như là tháng 12 = > Month = 1, ngược lại Month + 1.
	// - Ngược lại ngày != 1 => không cần phải cập nhật tháng.
	if (nextDay.iDay == 1)
	{
		/*if (nextDay.iMonth == 12)
		{
			nextDay.iMonth = 1;
		}
		else
		{
			nextDay.iMonth += 1;
		}*/

		nextDay.iMonth = (d.iMonth % 12) + 1;
	}

	// B4: Ta xét ngày = 1 và thàng = 1 = > Year + 1, ngược lại Year + 0.
	/*if (nextDay.iDay == 1 && nextDay.iMonth == 1)
	{
		nextDay.iYear += 1;
	}*/
	nextDay.iYear = d.iYear + (nextDay.iDay == 1 && nextDay.iMonth == 1);
	return nextDay;
}

DATE findYesterday(const DATE d)
{
	DATE yesterday;
	yesterday.iDay = d.iDay - 1;
	yesterday.iMonth = d.iMonth;
	yesterday.iYear = d.iYear;

	//if (d.iDay == 1)
	//{
	//	yesterday.iMonth = d.iMonth - 1;
	//	if (d.iMonth == 4 || d.iMonth == 6 || d.iMonth == 8 || d.iMonth == 9 || d.iMonth == 11 || d.iMonth == 2)
	//		yesterday.iDay = 31;
	//	else if (d.iMonth == 5 || d.iMonth == 7 || d.iMonth == 10 || d.iMonth == 12)
	//		yesterday.iDay = 30;
	//	else if (d.iMonth == 1)
	//	{
	//		yesterday.iDay = 31;
	//		yesterday.iMonth = 12;
	//		yesterday.iYear = d.iYear - 1;
	//	}
	//	else // Month = 3.
	//	{
	//		if (isLeapYear(d.iYear))
	//			yesterday.iDay = 29;
	//		else
	//			yesterday.iDay = 28;
	//	}
	//}

	int _ILastDayOfLastMonth;
	switch (d.iMonth - 1)
	{
	case 2:
		if (isLeapYear(d.iYear))
		{
			_ILastDayOfLastMonth = 29;
		}
		else
		{
			_ILastDayOfLastMonth = 28;
		}
		break;
	case 4: case 6: case 9: case 11:
		_ILastDayOfLastMonth = 30;
		break;
	default:
		_ILastDayOfLastMonth = 31;
		break;
	}

	if (d.iDay == 1)
	{
		yesterday.iDay = _ILastDayOfLastMonth;
		yesterday.iMonth = d.iMonth - 1;

		if (d.iMonth == 1)
		{
			yesterday.iMonth = 12;
			yesterday.iYear = d.iYear - 1;
		}
	}

	return yesterday;
}

