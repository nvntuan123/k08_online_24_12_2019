#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	/*
	1: Nhap ngay, thang, nam.
	2: Xet nam > 0?
	2.1: nam > 0 => B3.
	2.2: nam <= 0 => B.
	3: Xet ngay > 0?
	3.1: ngay > 0 => B4.
	3.2: ngay <= 0 => B.
	4: Xet thang > 0?
	4.1: thang > 0 => B5
	4.1: thang <= 0 => B.
	5: Xet thang.
	- LastYear = NextYear = Year. *(lap lai nhieu lan nen gop no lai thanh 1 dong).
	5.1: Thang 2, kiem tra nam nhuan.
	5.1.1: La nam nhuan => Kiem tra ngay ?
	5.1.1.1: Ngay > 29 => B7.
	5.1.1.2: Ngay <= 29 => B5.1.3.
	5.1.2: Khong la nam nhuan => kiem tra ngay ?
	5.1.2.1: Ngay > 28 => B7.
	5.1.2.2: Ngay <= 28 => B5.1.3.
	5.1.3: Kiem tra ngay co phai dau thang, tuc la ngay 1.
	- LastYear = NextYear = Year. *
	- Cap nhat ngay thang nam truoc do: YesterDay = 31, LastMonth = Month - 1.
	- Cap nhat ngay thang nam ke tiep: Tomorrow = Today + 1, LastMonth = Month.
	5.1.4: Kiem tra ngay co giua thang, tuc la ngay 2 -> 27.
	- LastYear = NextYear = Year. *
	- LastMonth = NextMonth = Month
	- Cap nhat ngay thang nam truoc do: YesterDay = Today - 1.
	- Cap nhat ngay thang nam ke tiep: Tomorrow = Today + 1.
	5.1.5: Kiem tra ngay co phai cuoi thang, luy y thang 2 phai xet nam nhuan vi co 29 hoac 28 ngay.
	5.1.5.1: La nam nhuan
	5.1.5.1.1: Neu ngay = 28(van xem nhu la ngay binh thuong khong phai la ngay cuoi thang).
	- LastYear = NextYear = Year. *
	- LastMonth = NextMonth = Month
	- Cap nhat ngay thang nam truoc do: YesterDay = Today - 1.
	- Cap nhat ngay thang nam ke tiep: Tomorrow = Today + 1.
	5.1.5.1.2: Neu ngay = 29 => la ngay cuoi thang.
	- LastYear = NextYear = Year. *
	- Cap nhat ngay thang nam truoc do: YesterDay = Today - 1, LastMonth = Month.
	- Cap nhat ngay thang nam ke tiep: Tomorrow = 1, NextMonth = Month + 1.
	5.1.5.2: Khong la nam nhuan
	- LastYear = NextYear = Year. *
	- Cap nhat ngay thang nam truoc do: YesterDay = Today - 1, LastMonth = Month.
	- Cap nhat ngay thang nam ke tiep: Tomorrow = 1, NextMonth = Month + 1.
	5.2: Thang 3, kiem tra nam nhuan. Vi ngay truoc do phu thuoc vao thang 2 cho truong hop ngay dau thang.
	5.2.1: Neu ngay > 31. => Khong hop le => B7.
	5.2.2: Nguoc lai => Hop le => Xu ly.
	5.2.2: Kiem tra ngay dau thang.
	5.2.2.1: Kiem tra nam nhuan.
	5.2.2.1.2: La nam nhuan.
	- Cap nhat ngay truoc do: YesterDay = 29.
	5.2.2.1.2: La nam khong nhuan.
	- Cap nhat ngay truoc do: YesterDay = 28.
	5.2.2.2: Tiep tuc cap nhat.
	- Truoc do: LastMonth = Month - 1.
	- Ke tiep: Tomorrow = ToDay + 1, NextMonth = Month.
	- LastYear = NextYear = Year. *
	5.2.3: Neu la ngay cuoi thang.
	- LastYear = NextYear = Year. *
	- Truoc do: YesterDay = ToDay - 1, LastMonth = Month.
	- Ke tiep: Tomorrow = 1, NextMonth = Month + 1.
	5.2.4: Neu la ngay giua thang.
	- LastYear = NextYear = Year. *
	- LastMonth = NextMonth = Month.
	- Truoc do: YesterDay = ToDay - 1.
	- Ke tiep: Tomorrow = ToDay + 1.
	5.3: Thang co 31 ngay. Thang 1, 5, 7, 8, 10, 12. Chu y thang 1 va 12 nam se thay doi.
	5.3.1: Neu ngay > 31 => Khong hop le => B7.
	5.3.2: Nguoc lai, hop le => xu ly.
	5.3.2.1: Neu la ngay dau thang.
	- NextMonth = Month.
	- Tomorrow = ToDay + 1.
	5.3.2.1.1: Neu la thang 1?
	- LastYear = Year - 1.
	- NextYear = Year.
	- LastMonth = 12.
	- YesterDay = 31.
	5.3.2.1.2: Nguoc lai khong la thang 1?
	- LastYear = NextYear = Year. *
	- LastMonth = Month - 1.
	 5.3.2.1.2.1: Neu la thang 8
	 - YesterDay = 31.
	 5.3.2.1.2.1: Neu khong la thang 8
	 - YesterDay = 30.
	5.3.2.2: Neu la ngay giua thang.
	- LastYear = NextYear = Year. *
	- LastMonth = NextMonth = Month.
	- YesterDay = ToDay - 1.
	- Tomorrow = ToDay + 1.
	5.3.2.3: Neu la ngay cuoi thang.
	- LastMonth = Month.
	- YesterDay = ToDay - 1.
	- Tomorrow = 1.
	5.3.2.3.1: Neu la thang 12?
	- NextYear = Year + 1.
	- NextMonth = 1.
	5.3.2.3.2: Nguoc lai khong la thang 12?
	- LastYear = NextYear = Year. *
	- NextMonth = Month + 1.
	5.4: Thang co 30 ngay. Thang 4, 6, 9, 11.
	5.4.1: Neu ngay > 30 => Khong hop le => B7.
	5.4.2: Nguoc lai, hop le => xu ly.
	5.4.2.1: Neu la ngay dau thang.
	- LastYear = NextYear = Year. *
	- LastMonth = Month - 1.
	- NextMonth = Month.
	- YesterDay = 30.
	- Tomorrow = ToDay + 1.
	5.4.2.2: Neu la ngay giua thang.
	- LastYear = NextYear = Year. *
	- LastMonth = NextMonth = Month.
	- YesterDay = ToDay - 1.
	- Tomorrow = ToDay + 1.
	5.4.2.3: Neu la ngay cuoi thang.
	- LastYear = NextYear = Year. *
	- LastMonth = Month.
	- NextMonth = Month + 1.
	- YesterDay = ToDay - 1.
	- Tomorrow = 1.
	6: Kiem tra neu ngay thang nam nhap vao hop le?
	- Xuat ra ngay thang nam truoc do va ke tiep.
	7: Dung chuong trinh.

	Bo test:
	Nhap vao ngay hien tai : 1
	Nhap vao thang hien tai : 3
	Nhap vao nam hien tai : 2020
	Ngay thang nam truoc do : 29/2/2020
	Ngay thang nam ke tiep : 2/3/2020
	*******************************
	Nhap vao ngay hien tai : 45
	Nhap vao thang hien tai : 15
	Nhap vao nam hien tai : 2020
	=> Nhap sai
	*******************************
	Nhap vao ngay hien tai : 45
	Nhap vao thang hien tai : 3
	Nhap vao nam hien tai : 2020
	=> Nhap sai
	*******************************
	Nhap vao ngay hien tai : 28
	Nhap vao thang hien tai : 2
	Nhap vao nam hien tai : 2016
	Ngay thang nam truoc do : 27/2/2016
	Ngay thang nam ke tiep : 29/2/2016
	*******************************
	Nhap vao ngay hien tai : 28
	Nhap vao thang hien tai : 3
	Nhap vao nam hien tai : 2020
	Ngay thang nam truoc do : 27/3/2020
	Ngay thang nam ke tiep : 29/3/2020
	*******************************
	Nhap vao ngay hien tai : 1
	Nhap vao thang hien tai : 9
	Nhap vao nam hien tai : 2020
	Ngay thang nam truoc do : 31/8/2020
	Ngay thang nam ke tiep : 2/9/2020
	*******************************
	Nhap vao ngay hien tai: 31
	Nhap vao thang hien tai: 9
	Nhap vao nam hien tai: 2020
	Ngay nhap vao khong hop le! Vui long nhap lai.
	*******************************
	Nhap vao ngay hien tai : 30
	Nhap vao thang hien tai : 10
	Nhap vao nam hien tai : 2020
	Ngay thang nam truoc do : 29/10/2020
	Ngay thang nam ke tiep : 31/10/2020
	*******************************
	Nhap vao ngay hien tai : 30
	Nhap vao thang hien tai : 11
	Nhap vao nam hien tai : 2020
	Ngay thang nam truoc do : 29/11/2020
	Ngay thang nam ke tiep : 1/12/2020
	*******************************
	Nhap vao ngay hien tai : 28
	Nhap vao thang hien tai : 2
	Nhap vao nam hien tai : 2015
	Ngay thang nam truoc do : 27/2/2015
	Ngay thang nam ke tiep : 1/3/2015
	*******************************
	Nhap vao ngay hien tai : 30
	Nhap vao thang hien tai : 6
	Nhap vao nam hien tai : 2015
	Ngay thang nam truoc do : 29/6/2015
	Ngay thang nam ke tiep : 1/7/2015
	*******************************
	Nhap vao ngay hien tai : 30
	Nhap vao thang hien tai : 9
	Nhap vao nam hien tai : 2015
	Ngay thang nam truoc do : 29/9/2015
	Ngay thang nam ke tiep : 1/10/2015
	*******************************
	Nhap vao ngay hien tai: 31
	Nhap vao thang hien tai: 12
	Nhap vao nam hien tai: 2020
	Ngay thang nam truoc do: 30/12/2020
	Ngay thang nam ke tiep: 1/1/2021
	*******************************
	Nhap vao ngay hien tai: 1
	Nhap vao thang hien tai: 1
	Nhap vao nam hien tai: 2020
	Ngay thang nam truoc do: 31/12/2019
	Ngay thang nam ke tiep: 2/1/2020
	*******************************
	Nhap vao ngay hien tai: 1
	Nhap vao thang hien tai: 8
	Nhap vao nam hien tai: 2021
	Ngay thang nam truoc do: 31/7/2021
	Ngay thang nam ke tiep: 2/8/2021
	*/

tuandeptrai:
	int iToDay;
	int iMonth;
	int iYear;

	// Truoc do.
	int iYesterDay;
	int iLastMonth;
	int iLastYear;

	// Ke tiep.
	int iTomorrow;
	int iNextMonth;
	int iNextYear;

	cout << "Nhap vao ngay hien tai: ";
	cin >> iToDay;
	cout << "Nhap vao thang hien tai: ";
	cin >> iMonth;
	cout << "Nhap vao nam hien tai: ";
	cin >> iYear;

	if (iYear > 0)
	{
		if (iToDay > 0)
		{
			bool bCheckLeapYear = ((!(iYear % 4) && (iYear % 100)) || !(iYear % 400)); // Set nam nhuan.
			bool bCheck = true; // Kiem tra ngay, thang, nam nhap vao hop le hay khong ? Mac dinh ban dau la hop.

			iLastYear = iNextYear = iYear; // Nam chi thay doi khi la thang 1 va 12.
			switch (iMonth)
			{
			case 1:
			case 3:
			case 5:
			case 7:
			case 8:
			case 10:
			case 12:
				if (iToDay <= 31)
				{
					iLastMonth = iNextMonth = iMonth; // Thang khong thay doi.

					// Ngay, thang truoc do.
					iYesterDay = iToDay - 1;

					// Ngay, thang ke tiep.
					iTomorrow = iToDay + 1;

					if (iToDay == 1) // Dau thang.
					{
						iLastMonth = iMonth - 1;
						if (iMonth == 1) // Thang 1 => LastYear va LastMonth thay doi.
						{
							iLastYear = iYear - 1;
							iNextYear = iYear;
							iLastMonth = 12;
							iYesterDay = 31;
						}
						else if (iMonth == 3)
						{
							if (bCheckLeapYear) // La nam nhuan => YesterDay = 29.
							{
								iYesterDay = 29;
							}
							else // La nam nhuan => YesterDay = 28.
							{
								iYesterDay = 28;
							}
						}
						else
						{
							if (iMonth == 8)
							{
								iYesterDay = 31;
							}
							else
							{
								iYesterDay = 30;
							}
						}
					}

					if (iToDay == 31) // Cuoi thang.
					{
						iLastMonth = iMonth;
						iYesterDay = iToDay - 1;
						iTomorrow = 1;

						// Neu la thang 12 => chi co Year va Month thay doi.
						if (iMonth == 12)
						{
							iNextYear = iYear + 1;
							iNextMonth = 1;
						}
						else
						{
							iNextMonth = iMonth + 1;
						}
					}
				}
				else
				{
					cout << "Ngay nhap vao khong hop le! Vui long nhap lai." << endl;
					bCheck = false;
				}
				break;
			case 4: // Nhung thang 30 ngay.
			case 6:
			case 9:
			case 11:
				if (iToDay <= 30)
				{
					// Xet cho nhung ngay giua thang.
					iLastMonth = iNextMonth = iMonth;
					iYesterDay = iToDay - 1;
					iTomorrow = iToDay + 1;

					if (iToDay == 1) // Neu la ngay dau thang.
					{
						iLastMonth = iMonth - 1; // Cap nhat lai thang truoc do.
						iYesterDay = 31; // Cap nhat lai ngay truoc do.
					}
					if (iToDay == 30) // Neu la ngay cuoi thang.
					{
						// Cuoi thang => cap nhat lai ngay, thang ke tiep.
						iNextMonth = iMonth + 1;
						iTomorrow = 1;
					}
				}
				else
				{
					cout << "Ngay nhap vao khong hop le! Vui long nhap lai." << endl;
					bCheck = false;
				}
				break;
			case 2:
				if (bCheckLeapYear) // La nam nhuan.
				{
					if (iToDay > 29) // Ngay nhap vao > 29 => sai.
					{
						bCheck = false;
					}
				}
				else // Khong phai la nam nhuan.
				{
					if (iToDay > 28) // Ngay nhap vao > 28 => sai.
					{
						bCheck = false;
					}
				}

				if (bCheck) // Ngay nhap vao hop le => xu ly.
				{
					if (iToDay == 1)
					{
						// Set ngay thang truoc do.
						iYesterDay = 31;
						iLastMonth = iMonth - 1;

						// Set ngay thang ke tiep.
						iTomorrow = iToDay + 1;
						iLastMonth = iMonth;
					}
					else if (iToDay < 28)
					{
						// Thang khong thay doi.
						iLastMonth = iNextMonth = iMonth;

						// Set ngay truoc do.
						iYesterDay = iToDay - 1;

						// Set ngay ke tiep.
						iTomorrow = iToDay + 1;
					}
					else
					{
						// Set ngay truoc do. Vi la ngay cuoi thang nen ngay truoc do o moi truong hop ben duoi deu lui ve 1.
						iYesterDay = iToDay - 1;
						if (bCheckLeapYear) // La nam nhuan.
						{
							if (iToDay == 28)
							{
								// Thang khong thay doi.
								iLastMonth = iNextMonth = iMonth;

								// Set ngay ke tiep.
								iTomorrow = iToDay + 1;
							}
							else
							{
								// Set ngay, thang truoc do.

								iLastMonth = iMonth;

								// Set ngay thang ke tiep.
								iTomorrow = 1;
								iNextMonth = iMonth + 1;
							}
						}
						else
						{
							// Thang truoc do.
							iLastMonth = iMonth;

							// Ngay, thang ke tiep.
							iTomorrow = 1;
							iNextMonth = iMonth + 1;
						}
					}
				}
				break;
			default:
				bCheck = false; // Thang nhap vao khong hop le.
				cout << "Thang nhap vao khong hop le! Vui long nhap lai." << endl;
			}

			// Neu ngay, thang, nam nhap vao hop le => show ra.
			if (bCheck)
			{
				cout << "Ngay thang nam truoc do: " << iYesterDay << "/" << iLastMonth << "/" << iLastYear << endl;
				cout << "Ngay thang nam ke tiep: " << iTomorrow << "/" << iNextMonth << "/" << iNextYear << endl;
			}
		}
		else
		{
			cout << "Ngay nhap vao khong hop le! Vui long nhap lai." << endl;
		}
	}
	else
	{
		cout << "Nam nhap vao khong hop le! Vui long nhap lai." << endl;
	}

	char x;

	fflush(stdin);
	cout << "\nBan co muon tiep tuc (y/n).";
	x = _getch();
	if (x == 'y' || x == 'Y')
	{
		system("cls");
		goto tuandeptrai;
	}

	return 0;
}

