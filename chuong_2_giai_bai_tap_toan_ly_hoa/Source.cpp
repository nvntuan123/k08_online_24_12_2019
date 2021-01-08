#include <iostream>

using namespace std;

int main()
{
	double dDiemToan, dDiemLy, dDiemHoa;
	int iHSToan, iHSLy, iHSHoa;

	// Nhap vao diem toan va hs toan.
	cout << "Nhap vao diem toan: ";
	cin >> dDiemToan;
	cout << "Nhap vao he so toan: ";
	cin >> iHSToan;

	// Nhap vao diem toan va hs ly.
	cout << "Nhap vao diem ly: ";
	cin >> dDiemLy;
	cout << "Nhap vao he so ly: ";
	cin >> iHSLy;

	// Nhap vao diem toan va hs hoa.
	cout << "Nhap vao diem hoa: ";
	cin >> dDiemHoa;
	cout << "Nhap vao he so hoa: ";
	cin >> iHSHoa;

	double dDiemTB = ((dDiemToan + dDiemLy + dDiemHoa) * (iHSToan + iHSLy + iHSHoa)) / (iHSToan + iHSLy + iHSHoa);
	cout << "Diem trung binh 3 mon la: " << dDiemTB << endl;

	system("pause");
	return 0;
}

