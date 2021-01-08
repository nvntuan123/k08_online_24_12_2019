#include <iostream>
#include <string> // Ben C++.
#include <string.h> // Ben C

using namespace std;

void In(void* vPtr, char cKyTu)
{
	switch (cKyTu)
	{
	case 'i':
	case 'I':
		cout << "Gia tri kieu INT: " << *(static_cast<int*>(vPtr)) << endl;
		break;
	case 'f':
	case 'F':
		cout << "Gia tri kieu FLOAT: " << *(static_cast<float*>(vPtr)) << endl;
		break;
	case 'd':
	case 'D':
		cout << "Gia tri kieu DOUBLE: " << *(static_cast<double*>(vPtr)) << endl;
		break;
	}
}

int main()
{
	int iN = 5;

	// Khai bao con tro kieu void.
	void* Vptr;
	Vptr = &iN;

	//int *ptr = static_cast<int *>(Vptr);
	cout << "Dia chi cua bien n la: " << &iN << endl;
	cout << "Dia chi cua con tro void la: " << static_cast<int*>(Vptr) << endl;
	cout << "Gia tri cua con tro void la: " << *(static_cast<int*>(Vptr)) << endl;

	float fN = 5.5;
	Vptr = &fN;
	cout << "Dia chi cua bien fN la: " << &fN << endl;
	cout << "Dia chi cua con tro void la: " << static_cast<float*>(Vptr) << endl;
	cout << "Gia tri cua con tro void tro toi float: " << *(static_cast<float*>(Vptr)) << endl;

	double dN = 5.578;
	char cChuoi[100]; // Chuoi ben C.
	string strChuoi; // Chuoi ben C++

	In(&iN, 'i');
	In(&fN, 'F');
	In(&dN, 'd');

	system("pause");
	return 0;
}

