#include <iostream>

using namespace std;

int main()
{
	/*int a = -1;
	bool bCheck = 0;
	if (a)
		cout << "Bien a != 0" << endl;
	else
		cout << "Bien a = 0" << endl;*/

		//bool bCheck = false; // Cau lenh khai khoi bien check = false.
		///*Cau lenh kiem tra bien check*/
		//if (bCheck)
		//	cout << "Day la phu dinh cua bien bCheck" << endl;
		///*Cau lenh kiem tra bien check*/

		///*Cau lenh kiem tra bien check*/
		//if (!bCheck)
		//	cout << "Day la phu dinh cua bien bCheck" << endl;
		//else
		//	cout << "Day khong la phu dinh cua bien bCheck" << endl;
		///*Cau lenh kiem tra bien check*/

		//bool a = true;
		//if (a == true) // *
		//	cout << "a = true va cau lenh 1" << endl;

		//bool b = false;
		//if (b == false) // **
		//		cout << "b == false" << endl;
		//else // **
		//	cout << "b == true va day la cau lenh 2" << endl;

		// if long if.
		/*if (2 > 1)
			if (3 > 2)
				if (10 > 5)
					cout << "2 > 1 && 3 > 2 && 10 > 5" << endl;

		if (20 >= 30)
			cout << "20 >= 0" << endl;*/

	bool bCheck = false;
	if (!bCheck) // Quy la bien check = false moi thuc hien khoi lenh o duoi day.
	{
		int a = 1, b = 2;
		int tong = a + b;
		cout << "a + b = " << tong << endl;
	}

	system("pause");
	return 0;
}

