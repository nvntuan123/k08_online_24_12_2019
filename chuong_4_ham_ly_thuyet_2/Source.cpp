/*
Viết chương trình tính hoán vị 2 số nguyên a và b.
VD: a = 1, b = 2
=> Sau khi hoán vị a = 2, b = 1.
*/

#include <iostream>

using namespace std;

void NhapSoNguyen(int& iN)
{
	cout << "Nhap vao so nguyen: ";
	cin >> iN;
}

/*
Phai truyen tham chieu vao ham.
Vi muc la doi cho 2 bien a va b nen sau khi ket thuc ham se thay doi gia cua 2 bien.
*/
void HoanVi(int& iA, int& iB) // Thu tuc hay con la ham void.
{
	/*
	a = 1, b = 2.
	iTemp = a = 1.
	a = b; // a = b = 2.
	b = iTemp; // b = iTemp = 1 = a ban dau.
	*/

	// Cách 1: Chỉ là sử dụng kiếm mũ mà thôi.
	/*int iTemp = iA;
	iA = iB;
	iB = iTemp;*/

	// Cách 2: Hack não 1 tí, sử dụng kiếm sắt đó nha. a = 3, b = 2
	iA = iA - iB; // a = 3 - 2 = 1. Ban đầu mình gán đại cho biến a một giá trị nào đó.
	iB = iA + iB; // b = 1 + 2 = 3 = a.
	iA = iB - iA; // a = 3 - 1 = 2.
}

// Ở đây không cần truyền tham chiếu. Vì không có thay đổi giá trị 2 biến a và b, mà chỉ cần mượn nó để làm việc gì đó.
int TinhTong(int iA, int iB)
{
	int iS = iA + iB;
	return iS;
}

int main()
{
	/*
	1. Ten ham: HoanVi.
	2. Cong viec cua ham: Doi cho 2 so nguyen a va b.
	3. Dau vao: 2 bien kieu so nguyen a, b.
	4. Dau ra: Khong co.

	VD: Viet chuong tinh tong 2 so nguyen a va b.
	1. Ten ham: TinhTong.
	2. Cong viec cua ham: Tinh tong 2 so nguyen a va b tực là a + b.
	3. Đầu vào: 2 biến a và b.
	4. Đầu ra: biến s = a + b hay là a + b.
	*/

	int iA, iB;

	NhapSoNguyen(iA); // Bien a da co gia tri
	NhapSoNguyen(iB); // Bien b da co gia tri

	cout << "--------------- Chua Hoan Vi ---------------" << endl;
	cout << "a = " << iA << ", b = " << iB << endl;
	cout << iA << " + " << iB << " = " << TinhTong(iA, iB) << endl;
	/*
	Ham hoan vi se khong bi loi neu nhu ta khong truyen tham chieu. Tuy nhien neu khong truyen tham chieu thi se khong doi cho duoc 2 bien a va b.
	Vi gia tri 2 bien a va b da nhap o tren nen da co gia tri => se khong bao loi khi khong truyen tham chieu.
	*/
	HoanVi(iA, iB);
	cout << "--------------- Da Hoan Vi ---------------" << endl;
	cout << "a = " << iA << ", b = " << iB << endl;

	system("pause");
	return 0;
}
