/*
4) Hệ thống tiền Việt Nam có mệnh giá sau:
 1,000đ
 2,000đ
 5,000đ
 10,000đ
 20,000đ
 50,000đ
 100,000đ
 200,000đ
 500,000đ
=> Người mua hàng phải trả tiền cho sản phẩm mà họ đã mua. Hãy nhập vào giá
tiền của món đồ và tiền khách đưa. Viết chương trình hỗ trợ nhân viên cửa hàng thối tiền lại cho khách hàng sao cho số tờ tiền thối lại là ít nhất.
VD: 1.100.000 =>
*/

#include <iostream>
#include <iomanip>

#define TO500NGAN 500000
#define TO200NGAN 200000
#define TO100NGAN 100000
#define TO50NGAN 50000
#define TO20NGAN 20000
#define TO10NGAN 10000
#define TO5NGAN 5000
#define TO2NGAN 2000
#define TO1NGAN 1000

using namespace std;

int main()
{
	double _TienMonDo, _TienKhachDua, _TienThoiLai;
	cout << "Nhap vao tien mon do: ";
	cin >> _TienMonDo;
	cout << "Nhap vao tien khach dua: ";
	cin >> _TienKhachDua;

	if (_TienKhachDua < 1000 || _TienMonDo < 1000)
	{
		cout << "Nhap sai, menh gia tien tu 1000 tro len!" << endl;
	}
	else
	{
		if (_TienKhachDua < _TienMonDo)
		{
			cout << "Nhap sai, tien khach dua phai lon hon tien mon do!" << endl;
		}
		else if (_TienKhachDua == _TienMonDo)
		{
			cout << "Khach dua du tien!" << endl;
		}
		else
		{
			size_t _SoTo500NGAN, _SoTo200NGAN, _SoTo100NGAN, _SoTo50NGAN, _SoTo20NGAN, _SoTo10NGAN, _SoTo5NGAN, _SoTo2NGAN, _SoTo1NGAN;

			_SoTo500NGAN = 0, _SoTo200NGAN = 0, _SoTo100NGAN = 0, _SoTo50NGAN = 0, _SoTo20NGAN = 0, _SoTo10NGAN = 0, _SoTo5NGAN = 0, _SoTo2NGAN = 0, _SoTo1NGAN = 0;
			_TienThoiLai = _TienKhachDua - _TienMonDo;
			cout << "Tien thoi lai: " << setprecision(15) << _TienThoiLai << endl;
			while (static_cast<int>(_TienThoiLai / TO500NGAN))
			{
				_SoTo500NGAN++;
				// Bước lặp.
				_TienThoiLai -= TO500NGAN;
			}
			cout << "So to " << TO500NGAN << " la: " << _SoTo500NGAN << endl;

			while (static_cast<int>(_TienThoiLai / TO200NGAN))
			{
				_SoTo200NGAN++;
				// Bước lặp.
				_TienThoiLai -= TO200NGAN;
			}
			cout << "So to " << TO200NGAN << " la: " << _SoTo200NGAN << endl;

			while (static_cast<int>(_TienThoiLai / TO100NGAN))
			{
				_SoTo100NGAN++;
				// Bước lặp.
				_TienThoiLai -= TO100NGAN;
			}
			cout << "So to " << TO100NGAN << " la: " << _SoTo100NGAN << endl;

			while (static_cast<int>(_TienThoiLai / TO50NGAN))
			{
				_SoTo50NGAN++;
				// Bước lặp.
				_TienThoiLai -= TO50NGAN;
			}
			cout << "So to " << TO50NGAN << " la: " << _SoTo50NGAN << endl;

			while (static_cast<int>(_TienThoiLai / TO20NGAN))
			{
				_SoTo20NGAN++;
				// Bước lặp.
				_TienThoiLai -= TO20NGAN;
			}
			cout << "So to " << TO20NGAN << " la: " << _SoTo20NGAN << endl;

			while (static_cast<int>(_TienThoiLai / TO10NGAN))
			{
				_SoTo10NGAN++;
				// Bước lặp.
				_TienThoiLai -= TO10NGAN;
			}
			cout << "So to " << TO10NGAN << " la: " << _SoTo10NGAN << endl;

			while (static_cast<int>(_TienThoiLai / TO5NGAN))
			{
				_SoTo5NGAN++;
				// Bước lặp.
				_TienThoiLai -= TO5NGAN;
			}
			cout << "So to " << TO5NGAN << " la: " << _SoTo5NGAN << endl;

			while (static_cast<int>(_TienThoiLai / TO2NGAN))
			{
				_SoTo2NGAN++;
				// Bước lặp.
				_TienThoiLai -= TO2NGAN;
			}
			cout << "So to " << TO2NGAN << " la: " << _SoTo2NGAN << endl;

			while (static_cast<int>(_TienThoiLai / TO1NGAN))
			{
				_SoTo1NGAN++;
				// Bước lặp.
				_TienThoiLai -= TO1NGAN;
			}
			cout << "So to " << TO1NGAN << " la: " << _SoTo1NGAN << endl;
		}
	}

	cout << endl;
	system("pause");
	return 0;
}

