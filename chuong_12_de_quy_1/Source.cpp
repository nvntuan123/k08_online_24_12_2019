#include <iostream>
#include <ctime>
#include <iomanip>

using namespace std;

// Tính tổng: S(n) = 1 + 2 + 3 + ... + n.
int _deQuy(int _IN);
int _khuDeQuy(int _IN);
int _deQuyDuoi(int _IN, int _IX = 1);

// Tính giai thừa n! = 1 * 2 * 3 * ... * n.
int _giaiThua(int _IN);
int _giaiThuaDeQuyDuoi(int _IN, int _IX);

int main()
{
	cout << "De quy: " << _deQuy(5) << endl;
	cout << "Khu de quy: " << _khuDeQuy(5) << endl;
	cout << "De quy duoi: " << _deQuyDuoi(5) << endl;

	cout << "N! de quy: " << _giaiThua(5) << endl;
	cout << "N! de quy duoi: " << _giaiThuaDeQuyDuoi(5, 1) << endl;

	//int _IN = 9999999;
	//clock_t _StrartDeQuy = clock();
	//for (size_t i = 1; i < _IN; i++)
	//{
	//	//cout << "De quy: " << _deQuy(5) << endl;
	//	_deQuy(10);
	//}
	//clock_t _EndDeQuy = clock();

	//clock_t _StrartKhuDeQuy = clock();
	//for (size_t i = 1; i < _IN; i++)
	//{
	//	//cout << "Khu de quy: " << _khuDeQuy(5) << endl;
	//	_khuDeQuy(10);
	//}
	//clock_t _EndKhuDeQuy = clock();

	//clock_t _StrartDeQuyDuoi = clock();
	//for (size_t i = 1; i < _IN; i++)
	//{
	//	//cout << "De quy duoi: " << _deQuyDuoi(5) << endl;
	//	_deQuyDuoi(10);
	//}
	//clock_t _EndDeQuyDuoi = clock();

	//double _ThoiGianDeQuy = static_cast<double>(_EndDeQuy - _StrartDeQuy) / CLOCKS_PER_SEC;
	//double _ThoiGianKhuDeQuy = static_cast<double>(_EndKhuDeQuy - _StrartKhuDeQuy) / CLOCKS_PER_SEC;
	//double _ThoiGianDeQuyDuoi = static_cast<double>(_EndDeQuyDuoi - _StrartDeQuyDuoi) / CLOCKS_PER_SEC;
	//cout << "================Thoi gian chay================" << endl;
	//cout << fixed << setprecision(3);
	//cout << "De quy: " << _ThoiGianDeQuy << "s" << endl;
	//cout << "Khu De quy: " << _ThoiGianKhuDeQuy << "s" << endl;
	//cout << "De quy duoi: " << _ThoiGianDeQuyDuoi << "s" << endl;

	system("pause");
	return 0;
}

int _deQuy(int _IN)
{
	// Điều kiện dừng.
	if (_IN == 1)
		return 1;

	// Bước lặp hay còn gọi là công thức đệ quy: S(n - 1) + n
	return _deQuy(_IN - 1) + _IN;
}

int _khuDeQuy(int _IN)
{
	int _ISum = 0;
	for (size_t i = 1; i <= _IN; i++)
	{
		_ISum += i;
	}
	return _ISum;
}

int _deQuyDuoi(int _IN, int _IX)
{
	// Điều kiện dừng.
	if (_IN == 1)
		return _IX;

	// Bước lặp hay còn gọi là công thức đệ quy: S(n - 1, x + n)
	return _deQuyDuoi(_IN - 1, _IX + _IN);
}

int _giaiThua(int _IN)
{
	if (_IN == 1)
		return 1;
	return _giaiThua(_IN - 1) * _IN;
}

int _giaiThuaDeQuyDuoi(int _IN, int _IX)
{
	if (_IN == 1)
		return _IX;
	return _giaiThuaDeQuyDuoi(_IN - 1, _IX * _IN);
}

