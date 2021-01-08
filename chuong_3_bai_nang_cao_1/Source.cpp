// Bài 1: Dùng vòng lặp để viết chương trình đọc 1 số nguyên dương có tối đa 9 chữ số.

#include <iostream>
#include <cmath>

void readNumber(int INumber)
{
	int IValueSide = 0;
	int IExponents = log10(double(INumber)); // So mu.
	int IQuantityNumber = IExponents + 1; // So luong chu so.

	if (IQuantityNumber > 9)
	{
		std::cout << "Fail!";
		return;
	}

	int ITemp = 0;
	int IReverseNumber = 0; // so dao nguoc.

	while (INumber != 0)
	{
		int IDigit = INumber % 10;
		INumber /= 10;
		IReverseNumber += IDigit * ceil(pow(10.0, IExponents--));
	}

	if (IReverseNumber == 0)
	{
		std::cout << "\nKhong\n";
	}
	else
	{
		while (IReverseNumber != 0)
		{
			int IDigit = IReverseNumber % 10;
			IReverseNumber /= 10;

			if (IDigit == 0)
			{
				std::cout << "Khong ";
			}
			else if (IDigit == 1 && IQuantityNumber == 2)
			{
				std::cout << "Muoi ";
			}
			else if (IDigit == 1)
			{
				std::cout << "Mot ";
			}
			else if (IDigit == 2)
			{
				std::cout << "Hai ";
			}
			else if (IDigit == 3)
			{
				std::cout << "Ba ";
			}
			else if (IDigit == 4)
			{
				std::cout << "Bon ";
			}
			else if (IDigit == 5)
			{
				std::cout << "Nam ";
			}
			else if (IDigit == 6)
			{
				std::cout << "Sau ";
			}
			else if (IDigit == 7)
			{
				std::cout << "Bay ";
			}
			else if (IDigit == 8)
			{
				std::cout << "Tam ";
			}
			else
			{
				std::cout << "Chin ";
			}

			if (IQuantityNumber == 2 && IDigit > 1)
			{
				std::cout << "Muoi ";
			}
			else if (IQuantityNumber == 3)
			{
				std::cout << "Tram ";
			}
			else if (IQuantityNumber == 4)
			{
				std::cout << "Nghin ";
			}
			else if (IQuantityNumber == 5)
			{
				std::cout << "Muoi ";
			}
			else if (IQuantityNumber == 6)
			{
				std::cout << "Tram ";
			}
			else if (IQuantityNumber == 7)
			{
				std::cout << "Trieu ";
			}
			else if (IQuantityNumber == 8)
			{
				std::cout << "Muoi ";
			}
			else if (IQuantityNumber == 9)
			{
				std::cout << "Tram ";
			}

			IQuantityNumber--;
			IValueSide++;
		}
	}
}

int main()
{
	int INumber;

	std::cout << "Type a number: ";
	std::cin >> INumber;
	readNumber(INumber);

	std::cout << "\n";
	system("pause");
	return 0;
}