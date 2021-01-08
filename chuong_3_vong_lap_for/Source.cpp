#include <iostream>

using namespace std;

int main()
{
	/*VD: ta xuat ra man hinh so tu 1 -> 10.
	Neu chua hoc vong lap se xuat nhu sau.
	*/
	int n = 1;

	// Chua hoc vong lap.
	//cout << n++ << endl; // 1
	//cout << n++ << endl;
	//cout << n++ << endl;
	//cout << n++ << endl;
	//cout << n++ << endl;
	//cout << n++ << endl;
	//cout << n++ << endl;
	//cout << n++ << endl;
	//cout << n++ << endl;
	//cout << n++ << endl;

	/* 1 vong lap luon luon phai co 4 buoc sau:
	1. Khoi tao gia tri.
	2. So sanh dieu kien.
	3. Thuc hien hanh dong.
	4. Buoc lap(cap nhat gia tri).
	*/

	// Neu da hoc vong lap => code ngan gon hon va do cuc hon.
	// O duoi la cach viet truyen thong.
	/*for (int i = 1; i <= 10; i++)
	{
		cout << i;
		cout << endl;
	}*/

	// Cach viet 2: Khai bao hoac hoi tao gia tri ben ngoai.
	//int j; // Khai bao gia tri ben ngoai vong lap.
	//for (j = 1; j <= 5; j++)
	//{
	//	cout << j << endl;
	//}

	// Luu y: vong lap for lun phai co cau trau nhu sau:
	//for(;;)
	//int k = 1; // Khai tao gia tri ben ngoai vong lap.
	//for (; k <= 5; k++)
	//{
	//	cout << k << endl;
	//}

	// Cach 3:
	//for (int k = 1; k <= 5;)
	//{
	//	cout << k << endl;
	//	k++; // Buoc lap nam trong than vong lap.
	//}

	// Cach 4:
	//for (int k = 1;; k++)
	//{
	//	cout << k << endl;
	//	if (k >= 5)
	//	{
	//		break; // Dung vong lap.
	//	}
	//}

	// Vong lap long nhau.
	/*
	i = 1 => j = 1, j = 2, j = 3
	i = 2 => j = 1, j = 2, j = 3
	i = 3 => j = 1, j = 2, j = 3
	*/
	//for (int i = 1; i <= 3; i++) // Vong lap cha.
	//{
	//	for (int j = 1; j <= 3; j++) // Vong lap con.
	//		cout << "i = " << i << " & j = " << j << endl;
	//	cout << endl;
	//}

	// Lenh break, continue.
	// In ra cac so tu 1 -> 10, neu gap so chan => ngung k in nua.
	//for (int i = 1; i <= 10; i++)
	//{
	//	if (!(i % 2)) // ((i % 2) == 0)
	//	{
	//		break; // Lenh dung vong lap.
	//	}
	//	cout << i << endl;
	//}

	// In ra man hinh cac so chan trong khoang [1, 10].
	//for (int i = 1; i <= 10; i++)
	//{
	//	if (i % 2) // ((i % 2) == 1)
	//	{
	//		continue; // Lenh tiep tuc lap - nghia la khi gap cau lenh nay no se khong nhin thay gi ben duoi nua va no tiep tuc lap qua buoc khac.
	//	}
	//	cout << i;
	//	cout << endl;
	//}

	//for (int i = 1; i <= 10; i++); // Gap dau cham ; => hieu la ket thuc vong lap for.
	//{
	//	cout << "Ahihi";
	//	cout << endl;
	//}

	/*
	i = 1, j = 2 => ss i <= 10 => i + j = 1 + 2 = 3 => i = 2, j = 4
	i = 2, j = 4 => ss i <= 10 => i + j = 2 + 4 = 6 => i = 3, j = 6
	i = 3, j = 6 => ss i <= 10 => i + j = 3 + 6 = 9 => i = 4, j = 8
	*/
	//int i, j;
	//for (i = 1, j = 2; i <= 10, j <= 6; i++, j += 2)
	//{
	//	cout << i << " + " << j << " = " << i + j << endl; // 1 + 2 = 3
	//}
	//cout << "Ket thuc vong lap i = " << i << " & j = " << j << endl;

	system("pause");
	return 0;
}

