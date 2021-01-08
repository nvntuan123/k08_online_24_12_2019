#include <iostream>

using namespace std;

int main()
{
	/* 1 vong lap luon luon phai co 4 buoc sau:
	1. Khoi tao gia tri.
	2. So sanh dieu kien.
	3. Thuc hien hanh dong.
	4. Buoc lap(cap nhat gia tri).
	*/

	// In ra man hinh so tu 1 -> 10.
	cout << "---------------Vong Lap for---------------\n";
	for (int i = 1; i <= 10; i++)
		cout << i << endl;
	cout << "---------------Vong Lap while---------------\n";
	/*
	<Khoi tao>
	while(<Dieu Kien Lap>) => <Dieu Kien Lap> tra ve kieu luan ly nghia true or false do nha.
	{
	i++;
	}
	*/

	//int i, j;
	//for (i = 1, j = 2; i <= 10, j <= 6; i++, j += 2)
	//{
	//	cout << i << " + " << j << " = " << i + j << endl; // 1 + 2 = 3
	//}
	//cout << "Ket thuc vong lap i = " << i << " & j = " << j << endl;

	//int i = 1, j = 2; // Khoi tao o day ne.
	//while (i <= 10, j <= 6) // Dieu kien lap ne.
	//{
	//	cout << i + j << endl;
	//	i++; // Buoc lap o day ne.
	//	j += 2;
	//}

	system("pause");
	return 0;
}

