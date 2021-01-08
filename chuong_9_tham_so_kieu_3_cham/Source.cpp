#include <iostream>
#include <cstdarg> // stdarg.h (bên C)

using namespace std;

/*
Nằm trong thư viện: stdarg.h (bên C), cstdarg (bên C++).
va_list: định nghĩa kiểu dữ liệu ...
va_start: bắt đầu trỏ vào phần tử đầu tiên của kiểu dữ liệu ...
va_end: cho biết kết thúc danh sách các phần của kiểu dữ liệu ...
va_arg: truy cập vào từng phần tử trong danh sách của kiểu dữ liệu ...
*/

void _prinText(const char* _StrFormat, ...)
{
	va_list argc;
	va_start(argc, _StrFormat);
	vprintf_s(_StrFormat, argc);
	va_end(argc);
}

//int _sum(int _IA, int _IB)
//{
//	return _IA + _IB;
//}
//
//int _sum(int _IA, int _IB, int _IC)
//{
//	return _IA + _IB + _IC;

// Tính tổng n số lượng phần tử truyền vào(kiểu int).
//int _sum(int _ICount, ...)
//{
//	int _ISum = 0;
//	va_list argc;
//	va_start(argc, _ICount);
//	for (int i = 0; i < _ICount; i++)
//	{
//		int _IValue = va_arg(argc, int);
//		_ISum += _IValue;
//	}
//	va_end(argc);
//	return _ISum;
//}

// Tính tổng n số lượng phần tử truyền vào(kiểu double).
double _sum(int _ICount, ...)
{
	double _ISum = 0;
	va_list argc;
	va_start(argc, _ICount);
	for (int i = 0; i < _ICount; i++)
	{
		double _IValue = va_arg(argc, double);
		_ISum += _IValue;
	}
	va_end(argc);
	return _ISum;
}

int main()
{
	double _TienKhachDua = 5.553, _TienMonDo = 1.99;
	_prinText("%s\n%s\n%s\n%s\n%s\n%.2lf\n%.2lf\n", "Nhat Tuan", "Huy", "Hong Anh", "Hung", "Harri", _TienKhachDua, _TienMonDo);

	//cout << "Sum = " << _sum(5, 10, 5, 100, 99, 15) << endl;
	//cout << "Sum = " << _sum(5, 10.1, 5.9, 100.7, 99.5, 15.7) << endl;

	system("pause");
	return 0;
}

