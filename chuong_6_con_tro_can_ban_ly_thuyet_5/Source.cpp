// Con tro va mang 1 chieu.

#include <iostream>

#define MAX 100

using namespace std;

int main()
{
	int a[] = { 1, 2, 3, 4, 5 };

	cout << "Dia chi cua mang 1 chieu la(cach 1): " << a << endl;
	cout << "Dia chi cua mang 1 chieu la(cach 2): " << &a[0] << endl;
	cout << "Dia chi cua mang 1 chieu la(cach 3): " << &a << endl;

	cout << "===========Dia Chi Tung Phan Tu=============" << endl;
	cout << a << endl;
	cout << a + 1 << endl;
	cout << a + 2 << endl;
	cout << a + 3 << endl;
	cout << a + 4 << endl;
	cout << "===========Gia Tri Tung Phan Tu===========" << endl;
	cout << *a << endl;
	cout << *(a + 1) << endl;
	cout << *(a + 2) << endl;
	cout << *(a + 3) << endl;
	cout << *(a + 4) << endl;

	//cout << "===========Phan Con Tro Tro den mang 1 chieu===========" << endl;
	//int *iPtrToArr = &a[1]; // Cho con tro tro den phan tu thu 2 trong mang a.

	//cout << "Vung nho ma con tro iPtrToArr dang tro den: " << iPtrToArr << endl; // Dia chi nay se trung voi dia chi cua phan tu thu 2 trong mang a.
	//cout << "Gia tri cua con iPtrToArr la: " << *iPtrToArr << endl; // Gia tri nay se trung vs gia tri cua phan tu thu 2 trong mang a.
	//cout << "===============iPtrToArr - 1===============" << endl;
	//cout << "Gia tri = " << *(iPtrToArr - 1) << endl;
	//cout << "Dia Chi = " << iPtrToArr - 1 << endl;

	//cout << "===============iPtrToArr + 1===============" << endl;
	//cout << "Gia tri = " << *(iPtrToArr + 2) << endl;
	//cout << "Dia Chi = " << iPtrToArr + 2 << endl;

	///*cout << "=============== iPtrToArr-- ===============" << endl;
	//iPtrToArr--;
	//cout << "Gia tri = " << *iPtrToArr << endl;
	//cout << "Dia Chi = " << iPtrToArr << endl;*/

	//cout << "=============== iPtrToArr++ ===============" << endl;
	//iPtrToArr++;
	//cout << "Gia tri = " << *iPtrToArr << endl;
	//cout << "Dia Chi = " << iPtrToArr << endl;

	int* iPtrToArr;
	cout << "===============Duyet mang bang vong lap voi con tro===============" << endl;
	cout << "Cach 1: ";
	for (iPtrToArr = &a[0]; iPtrToArr <= &a[4]; iPtrToArr++)
	{
		cout << *iPtrToArr << " ";
	}

	cout << endl << "Cach 2: ";
	for (iPtrToArr = a; iPtrToArr < a + 5; iPtrToArr++)
	{
		cout << *iPtrToArr << " ";
	}

	cout << endl << "Cach 3: ";
	int* iPtrToArr1 = a;
	for (int i = 0; i < 5; i++)
	{
		cout << *(iPtrToArr1 + i) << " ";
	}

	cout << endl << "===============Su khac biet giua mang 1 chieu tinh va con tro===============" << endl;
	cout << typeid(a).name() << endl; // int [5]
	cout << sizeof(a) << endl; // 20
	cout << typeid(iPtrToArr1).name() << endl; // int *
	cout << sizeof(iPtrToArr1) << endl; // 4

	int** ptr; // Con tro cap 2
	int*** ptr1; // Con tro cap 3.
	// Tham chi con co con tro da cap.

	int a1[MAX]; // Mang 1 chieu tinh.

	int* a2 = new int[5]; // Cap phat mang dong co 5 phan.

	delete[] a2; // Giai phong mang 1 chieu dong.

	cout << endl;
	system("pause");
	return 0;
}

