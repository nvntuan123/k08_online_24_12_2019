// Bài 155 trang 61 sách 1000 bài tập lập trình C.
#include <iostream>
#include <cmath>

using namespace std;

/*
Ý tưởng: ban đầu ta cho biến max = |phần tử đầu trong mảng - x|.
Tiếp theo ta duyệt và nhớ bỏ qua phần tử đầu vì đã được xử lý ở trên rồi, mỗi lần duyệt thì tính ra khoảng cách giữa phần tử i và x.
Lưu ý: kiến thức toán học muốn khoảng tích từ điểm A -> B: |B - A|.
*/

int _TimTheoYeuCau(int _IArr[], int _IN, int _IX)
{
	if (_IArr != nullptr)
	{
		//int _IMax = abs(_IArr[0] - _IX);
		int _IIndexMax = 0;
		int _IMax = _IArr[_IIndexMax] - _IX;
		if (_IMax < 0)
			_IMax *= -1;
		cout << 0 << ": " << _IMax << endl;
		for (int i = 1; i < _IN; i++)
		{
			int _IValue = _IArr[i] - _IX;
			if (_IValue < 0)
				_IValue *= -1;
			//cout << i << ": " << _IValue << endl;
			if (_IValue > _IMax)
			{
				_IMax = _IValue;
				_IIndexMax = i;
			}
		}
		return _IIndexMax;
	}
	return -1;
}

int main()
{
	int _IArr[] = { 24, 45, 23, 13, 43, -12 };

	int _IX = 15;

	int _IIndex = _TimTheoYeuCau(_IArr, sizeof(_IArr) / sizeof(int), _IX);
	if (_IIndex != -1)
	{
		cout << "Phan tu xa X nhat la: " << _IArr[_IIndex] << endl;
	}
	else
	{
		cout << "Error!" << endl;
	}

	system("pause");
	return 0;
}

