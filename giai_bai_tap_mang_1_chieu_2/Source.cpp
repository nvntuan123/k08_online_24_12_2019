// Bài 157 trang 61 sách 1000 bài tập lập trình C.
#include <iostream>
#include <cmath>

using namespace std;

/*
Ý tưởng: ban đầu ta cho biến max = |phần tử đầu trong mảng - x|.
Tiếp theo ta duyệt và nhớ bỏ qua phần tử đầu vì đã được xử lý ở trên rồi, mỗi lần duyệt thì tính ra khoảng cách giữa phần tử i và x.
Lưu ý: kiến thức toán học muốn khoảng tích từ điểm A -> B: |B - A|.
*/

int _TimMax(int _IArr[], int _IN)
{
	if (_IArr != nullptr)
	{
		int _IIndexMax = 0;
		for (int i = 1; i < _IN; i++)
		{
			if (_IArr[_IIndexMax] < _IArr[i])
				_IIndexMax = i;
		}
		return _IIndexMax;
	}
	return -1;
}

int _TimMin(int _IArr[], int _IN)
{
	if (_IArr != nullptr)
	{
		int _IIndexMin = 0;
		for (int i = 1; i < _IN; i++)
		{
			if (_IArr[_IIndexMin] > _IArr[i])
				_IIndexMin = i;
		}
		return _IIndexMin;
	}
	return -1;
}

int main()
{
	int _IArr[] = { 24, 45, 23, 13, 43, -12 };

	int _IMax = _TimMax(_IArr, sizeof(_IArr) / sizeof(int));
	int _IMin = _TimMin(_IArr, sizeof(_IArr) / sizeof(int));

	cout << "Doan [" << _IArr[_IMin] << ", " << _IArr[_IMax] << "] chua tat ca cac gia tri trong mang." << endl;

	system("pause");
	return 0;
}

