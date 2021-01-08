/*Bài 1: Phân số: nhập, xuất, rút gọn, tính tổng/hiệu/tích/thương*/

#include <iostream>

using namespace std;

struct SPhanSo
{
	int ITu;
	int IMau;
};

void _nhapPS(SPhanSo&);
void _xuatPS(const SPhanSo);
SPhanSo _rutGonPS(SPhanSo);
SPhanSo _tinhTongPS(SPhanSo, SPhanSo);
SPhanSo _tinhHieuPS(SPhanSo, SPhanSo);
SPhanSo _tinhTichPS(SPhanSo, SPhanSo);
SPhanSo _tinhThuongPS(SPhanSo, SPhanSo);
int _timUCLN(int, int);

int main()
{
	SPhanSo _PSA, _PSB;

	cout << "Phan So A" << endl;
	_nhapPS(_PSA);
	cout << "Phan so A vua nhap vao la: ";
	_xuatPS(_PSA);

	/*cout << endl << "Phan so vua rut gon: ";
	_xuatPS(_rutGonPS(_PSA));*/

	cout << endl << "Phan So B" << endl;
	_nhapPS(_PSB);
	cout << "Phan so B vua nhap vao la: ";
	_xuatPS(_PSB);

	cout << endl << "Tong 2 phan so: ";
	_xuatPS(_tinhTongPS(_PSA, _PSB));

	cout << endl << "Hieu 2 phan so: ";
	_xuatPS(_tinhHieuPS(_PSA, _PSB));

	cout << endl << "Tich 2 phan so: ";
	_xuatPS(_tinhTichPS(_PSA, _PSB));

	cout << endl << "Thuong 2 phan so: ";
	_xuatPS(_tinhThuongPS(_PSA, _PSB));

	cout << endl;
	system("pause");
	return 0;
}

void _nhapPS(SPhanSo& _PS)
{
	do
	{
		cout << "Nhap tu: ";
		cin >> _PS.ITu;

		cout << "Nhap mau: ";
		cin >> _PS.IMau;

		if (!_PS.IMau)
		{
			system("cls");
			cout << "Nhap sai, vui long kiem tra lai(Mau != 0)!" << endl;
		}
	} while (!_PS.IMau);
}

void _xuatPS(const SPhanSo _PS)
{
	cout << _PS.ITu << "/" << _PS.IMau;
}

SPhanSo _rutGonPS(SPhanSo _PS)
{
	SPhanSo _KetQua;
	int _IUCLN = _timUCLN(_PS.ITu, _PS.IMau);
	_KetQua.ITu = _PS.ITu / _IUCLN;
	_KetQua.IMau = _PS.IMau / _IUCLN;

	return _KetQua;
}

SPhanSo _tinhTongPS(SPhanSo _PSA, SPhanSo _PSB)
{
	SPhanSo _KetQua;

	// Quy dong mau:
	_KetQua.IMau = _PSA.IMau * _PSB.IMau;

	_KetQua.ITu = (_PSA.ITu * _PSB.IMau) + (_PSB.ITu * _PSA.IMau);

	return _rutGonPS(_KetQua);
}

SPhanSo _tinhHieuPS(SPhanSo _PSA, SPhanSo _PSB)
{
	SPhanSo _KetQua;

	// Quy dong mau:
	_KetQua.IMau = _PSA.IMau * _PSB.IMau;

	_KetQua.ITu = (_PSA.ITu * _PSB.IMau) - (_PSB.ITu * _PSA.IMau);

	return _rutGonPS(_KetQua);
}

SPhanSo _tinhTichPS(SPhanSo _PSA, SPhanSo _PSB)
{
	SPhanSo _KetQua;
	_KetQua.ITu = _PSA.ITu * _PSB.ITu;
	_KetQua.IMau = _PSA.IMau * _PSB.IMau;

	return _rutGonPS(_KetQua);
}

SPhanSo _tinhThuongPS(SPhanSo _PSA, SPhanSo _PSB)
{
	SPhanSo _KetQua;
	_KetQua.ITu = _PSA.ITu * _PSB.IMau;
	_KetQua.IMau = _PSA.IMau * _PSB.ITu;

	return _rutGonPS(_KetQua);
}

int _timUCLN(int _IA, int _IB)
{
	if (!_IA && _IB) return _IB;
	if (_IA && !_IB) return _IA;

	if (_IA < 0) _IA *= -1;
	if (_IB < 0) _IB *= -1;

	// Cach 1:
	/*int _IMin = _IA < _IB ? _IA : _IB;
	for (int i = _IMin; i > 1; i--)
	{
		if (!(_IA % i) && !(_IB % i))
			return i;
	}*/

	// a = 4, b = 6
	while (_IA != _IB)
	{
		if (_IA > _IB)
			_IA -= _IB;
		else
			_IB -= _IA;
	}

	return _IA;
}

