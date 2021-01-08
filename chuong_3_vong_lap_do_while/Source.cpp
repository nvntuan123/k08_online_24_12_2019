#include <iostream>

using namespace std;

int main()
{
	//int i;
	//cout << "---------------Vong Lap for---------------\n";
	//for (i = 1; i <= 0; i++)
	//	cout << i << endl;

	///*do while*/
	//cout << "---------------Vong Lap do while---------------\n";
	//i = 1;
	//do // Than vong lap ne, nghia hanh dong cua no do.
	//{
	//	cout << i << endl; // Hanh dong.
	//	i++; // Buoc lap.
	//	cout << "Bien i sau khi ++: " << i << endl; // Hanh dong.
	//} while (i <= 0); // Dieu kien lap.
	///*do while*/

	// Nhap vao 1 so nguyen duong.
	int iN;
	do
	{
		cout << "Nhap vao 1 so nguyen duong n = ";
		cin >> iN;

		if (iN <= 0)
		{
			system("cls");
			cout << "Nhap sai, n phai la so nguyen duong! Vui long nhap lai." << endl;
		}
	} while (iN <= 0);

	cout << "Ahihi" << endl;

	system("pause");
	return 0;
}

