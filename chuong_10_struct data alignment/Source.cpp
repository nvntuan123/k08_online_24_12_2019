#include <iostream>

using namespace std;

struct _A
{
	int _IA; // 4 byte.
	char _C1; // 1 byte.
	char _C3; // 1 byte.
	// => Total: 6 byte, 8 byte.
};

struct _B
{
	char _C1; // 1 byte.
	int _IB; // 4 byte.
	char _C3; // 1 byte.
	// => Total: 6 byte, 12 byte.
};

#pragma pack(push, 1)
struct _C
{
	int _IC; // 4 byte.
	char _C1; // 1 byte.
	float _F1; // 4 byte.
	double _D1; // 8 byte.
	// => Total: 17 byte.
};
#pragma pack(pop)

int main()
{
	_A* a;
	_B* b;
	cout << "sizeof _A: " << sizeof(a) << endl;
	cout << "sizeof _B: " << sizeof(b) << endl;
	cout << "sizeof _C: " << sizeof(_C) << endl;

	system("pause");
	return 0;
}

