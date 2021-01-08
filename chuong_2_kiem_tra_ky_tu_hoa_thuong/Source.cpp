#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	char cKyTu;

	cout << "Nhap vao 1 ky tu: ";
	cin >> cKyTu;

	if ((cKyTu >= 65 && cKyTu <= 90) || (cKyTu >= 97 && cKyTu <= 122))
	{
		// Cach 1:
		//if ((cKyTu >= 65 && cKyTu <= 90)) // Ky tu hoa => bien thanh ky tu thuong.
		//{
		//	//cKyTu = cKyTu + 32;
		//	//cKyTu += 32;
		//}
		//else
		//{
		//	//cKyTu = cKyTu - 32;
		//	cKyTu -= 32;
		//}

		// Cach 2:
		cKyTu ^= (1 << 5);
		/*
		64 + 32 = 96
		 0  0  0  0  0  0  0  0
		 0  0  0  0  0  0  0  1

		 0  0  1  0  0  0  0  0 (1 << 5)
		 0  1  1  0  0  0  0  1 (cKyTu)
		 0  1  0  0  0  0  0  1 (cKyTu - Ket qua).
		 => cKytu = 65.
		 Phep ^: 0 ^ 0 = 0
				1 ^ 1 = 0
				1 ^ 0 = 1
				0 ^ 1 = 1
		*/
		cout << "Ky tu nhap vao bien thanh ky tu: " << cKyTu << endl;
	}
	else
	{
		cout << "Nhap sai, vui long vao ky tu la chu cai." << endl;
	}

	system("pause");
	return 0;
}

