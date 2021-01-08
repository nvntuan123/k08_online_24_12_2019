/*
1) Nhập vào 1 số nguyên dương n, hãy cho biết:
a) Có phải là số đối xứng ? VD: 121, 12021,…
b) Có phải là số chính phương? VD: 0, 1, 4, 9, 16, 25,…
c) Có phải là số nguyên tố? VD: 2, 3, 5, 7, 11, 13,…
d) Các chữ số có tăng dần hay giảm dần không?
	Lưu ý: Cần phân biệt rõ ràng giữa tăng dần “nghiêm ngặt” và “không nghiêm ngặt”.
	Tăng dần nghiêm ngặt: chữ số đằng sau bắt buộc phải lớn hơn đằng trước:
	VD: 123456.
	Tăng dần không nghiêm ngặt: Chữ số đằng sau có thể >= chữ số đằng trước. VD: 11223455.
*/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	// Bat dieu kien nhap n.
	int iN;
	do
	{
		cout << "Nhap vao 1 so nguyen duong n = ";
		cin >> iN;

		if (iN <= 0)
		{
			system("cls");
			cout << "Nhap sai, vui long nhap lai!" << endl;
		}
	} while (iN <= 0); // Phu dinh cua truong hop (n > 0).

	/*
	a) Có phải là số đối xứng ?
	VD: 121, 12021,…
	123 => 321 => n != so ngich dao => khong phai la so doi xung.
	987 => 789 => n != so ngich dao => khong phai la so doi xung.
	123 = 1 * 10^2 + 2 * 10^1 + 3 * 10^0 = 1 * 100 + 2 * 10 + 3 * 1 = 100 + 20 + 3 = 123.
	3785 = 3 * 10^3 + 7 * 10^2 + 8 * 10^1 + 5 * 10^0 = 3 * 1000 + 7 * 100 + 8 * 10 + 5 * 1 = 3000 + 700 + 80 + 5 = 3785.
	3785 => so nghich dao la 5873 = 5 * 10^3.
	SoMu--;
	Du lieu dau vao: so mu, so nghich dao, n.
	*/
	cout << "------------------a) So Doi Xung ?------------------" << endl;
	int iSoMu = log10(iN);
	int iSoNghichDao = 0;
	int iTam = iN; // Tao bien phu luu gia cua n.
	while (iTam)
	{
		int iChuSo = iTam % 10; // Lay ra chu so cuoi.
		iTam /= 10; // Loai bo chu so vua lay ra(chu so cuoi).

		iSoNghichDao += (iChuSo * pow(10, iSoMu--));
		//iSoMu--; // Cap nhat lai so mu.
	}

	cout << "So nghich dao la: " << iSoNghichDao << endl;

	if (iN == iSoNghichDao)
		cout << iN << " la so doi xung." << endl;
	else
		cout << iN << " khong la so doi xung." << endl;

	/*
	b) Có phải là số chính phương? VD: 0, 1, 4, 9, 16, 25,…
	Y tuong: ta khai bao 2 bien a va b.
	Ta cho bien a la kieu int va gan a = can(n) => no chi lay phan nguyen.
	Ta cho bien b la kieu double va gan b = can(n) => no lay phan nguyen va phan thap phan.
	So sanh a co = b hay khong.
	Neu a == b => no la so chinh phuong.
	Neu a != b => no khong la so chinh phuong.
	VD: 4 => a = 2, b = 2
	3 => a = 1, b = 1.7
	*/

	cout << endl << "------------------b) So Chinh Phuong ?------------------" << endl;
	/*int iA = sqrt(iN);
	double iB = sqrt(iN);

	cout << "sqrt(a) kieu int co gia tri la: " << iA << endl;
	cout << "sqrt(b) kieu double co gia tri la: " << iB << endl;*/
	if (sqrt(iN) == static_cast<int>(sqrt(iN)))
		cout << iN << " la so chinh phuong." << endl;
	else
		cout << iN << " khong la so chinh phuong." << endl;

	cout << endl << "------------------c) Kiem tra so nguyen to ?------------------" << endl;
	/*
	c) Có phải là số nguyên tố? VD: 2, 3, 5, 7, 11, 13,…
	Định nghĩa số nguyên tố: là chỉ chia hết cho 1 và chính nó.
	*/

	/*
	Level 1: Mới nhập môn(sử dụng kiếm gỗ).
	Ý tưởng: ta cho vòng lặp chạy từ 1 -> n - 1, trong quá trình chạy ta sẽ có biến đếm mỗi lần thấy được số nào mà n nó chia hết => ta tăng biến dem lên 1 đơn vị.
	Chạy hết vòng lặp: - Nếu biến dem >= 2 => không là số nguyên tố.
						- Ngược lại => là số nguyên tố.
	*/

	int iSoLanChay1 = 0;
	int iDem = 0;
	for (int i = 1; i < iN; i++)
	{
		iSoLanChay1++;
		if (iN % i == 0)
			iDem++;
	}

	cout << "Cach 1: so lan chay " << iSoLanChay1 << endl;
	if (iDem >= 2)
		cout << iN << " khong la so nguyen to." << endl;
	else
		cout << iN << " la so nguyen to." << endl;

	/*
	Level 2: Đã qua thời kỳ nhập môn(sử dụng kiếm sắt nhẹ).
	Ý tưởng: 1 số dĩ nhiên nó sẽ chia hết cho 1 và chính nó.
	Nên ta cho vòng lặp chạy từ 2 -> n - 1, trong quá trình chạy ta thấy số nào mà n nó chia hết => dừng vòng lặp và kết luận ngay là số đó không là số nguyên tố.
	*/

	int iSoLanChay2 = 0;
	bool bKTNguyenTo2 = true; // Mac dinh la so nguyen to.
	for (int i = 2; i < iN; i++)
	{
		iSoLanChay2++;
		if (iN % i == 0) // Nhan thay n chia het cho 1 so nao do.
		{
			bKTNguyenTo2 = false; // n khong la so nguyen to.
			break;
		}
	}

	cout << "Cach 2: so lan chay " << iSoLanChay2 << endl;
	if (!bKTNguyenTo2)
		cout << iN << " khong la so nguyen to." << endl;
	else
		cout << iN << " la so nguyen to." << endl;

	/*
	Level 3: Luyện kiếm hơi lâu rồi đó(sử dụng kiếm sắt nặng).
	Ý tưởng: Từ level 2 ta nhận thấy n sẽ không chia hết cho số nào từ n/2 -> n - 1.
	=> Ta chỉ cần chạy từ 2 -> n / 2 là được rồi.
	*/

	int iSoLanChay3 = 0;
	bool bKTNguyenTo3 = true; // Mac dinh la so nguyen to.
	for (int i = 2; i <= (iN / 2); i++)
	{
		iSoLanChay3++;
		if (iN % i == 0) // Nhan thay n chia het cho 1 so nao do.
		{
			bKTNguyenTo3 = false; // n khong la so nguyen to.
			break;
		}
	}

	cout << "Cach 3: so lan chay " << iSoLanChay3 << endl;
	if (!bKTNguyenTo3)
		cout << iN << " khong la so nguyen to." << endl;
	else
		cout << iN << " la so nguyen to." << endl;

	/*
	Level 4: Luyện kiếm hơi bị đỉnh rồi đó nhe(sử dụng kiếm sắt to và nặng).
	Ý tưởng: Từ level 3 ta nhận thấy n sẽ chia hết cho số nào đó từ 2 -> can bac cua n và ta thấy số 2 là số chẵn duy nhất là số nguyên tố ngoài nó ra không còn số chẵn nào là số nguyên tố.
	*/

	int iSoLanChay4 = 0;
	bool bKTNguyenTo4 = true; // Mac dinh la so nguyen to.

	if (iN < 2)
		bKTNguyenTo4 = false; // Khong la so nguyen to.
	else
	{
		if (iN == 2)
			bKTNguyenTo4 = true;
		else
		{
			if (iN % 2 == 0) // Xet cho nhung truong n la so chan.
				bKTNguyenTo4 = false; // => Khong la so nguyen to.
			else // Xet cho nhung truong n la so le.
			{
				/*
				VD: Số 5 là số lẻ nhưng nó là số nguyên tố.
				Số 9 là số lẻ nhưng nó không phải là số nguyên tố. Vì 9 chia hết cho 1, 3, 9 => nó không thõa định nghĩa của số nguyên tố.
				Số 225 là số lẻ nhưng nó không phải là số nguyên tố. Vì 225 chia hết cho 1, 3, 5, 9, 15 => nó không thõa định nghĩa của số nguyên tố.
				Cách này toán học chứng minh.
				*/
				for (int i = 3; i <= sqrt(iN); i += 2)
				{
					iSoLanChay4++;
					if (!(iN % i))
					{
						bKTNguyenTo4 = false; // Khong la so nguyen to.
						break; // Dừng vòng lặp
					}
				}
			}
		}
	}

	cout << "Cach 4: so lan chay " << iSoLanChay4 << endl;
	if (!bKTNguyenTo4)
		cout << iN << " khong la so nguyen to." << endl;
	else
		cout << iN << " la so nguyen to." << endl;

	system("pause");
	return 0;
}

