#include <iostream>

using namespace std;

int main()
{
	// In ra man hinh so tu 1 -> 10.
//	int i = 1; // Khoi tao o day ne.
//tuandeptrai: // Nhan cua lenh goto.
//
//	// Than vong lap(hanh dong).
//	cout << i << endl;
//	i++; // Buoc lap.
//	if (i <= 10) // Dieu kien lap.
//		goto tuandeptrai; // Goi lenh goto.

	/*for (int i = 1; i <= 10; i++)
	{
		cout << i;
		cout << endl;
	}*/

	// Lenh goto vo tan(tuong duong voi vong lap vo tan).
tuandeptrai: // Lenh goto 1.
	goto quachuan;

quachuan: // lenh goto 2.
	goto tuandeptrai;

	// Vong lap trong hop ngu~ la lenh goto, chu khong co vong lap for, while, do ... while gi het.
	// Qua C#, PHP, Java,... se co them vong lap foreach

	system("pause");
	return 0;
}

