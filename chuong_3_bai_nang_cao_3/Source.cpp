#include <iostream>
#include <Windows.h>

inline bool IsPressed(int presskey)
{
	return GetAsyncKeyState(presskey);
}

int main()
{
	system("color C");

	int ITemp = 0;
	char CCharacter;

	std::cout << "\nPress Enter to start  ::  Press SPACE to stop  ::  Press SPACE again to resum\n";
	std::cout << "\n00:00:00";
	CCharacter = getchar();

	if (CCharacter == '\n')
	{
		system("cls");
		std::cout << "\nPress Enter to start  ::  Press SPACE to stop  ::  Press SPACE again to resum\n";

		for (int IHour = 0; IHour <= 24; IHour++)
		{
			for (int IMinutes = 0; IMinutes <= 59; IMinutes++)
			{
				if (IMinutes >= 1)
				{
					std::cout << "\nPress Enter to start  ::  Press SPACE to stop  ::  Press SPACE again to resum\n";
				}

				for (int ISecond = 0; ISecond <= 59; ISecond++)
				{
					if (IsPressed(VK_SPACE))
					{
						ITemp++;
					}
					if (ITemp % 2 == 1)
					{
						system("pause");
					}
					if (ISecond == 0)
					{
						std::cout << "\n";
					}

					if (!(IHour / 10))
					{
						std::cout << "0";
					}
					std::cout << IHour << ":";

					if (!(IMinutes / 10))
					{
						std::cout << "0";
					}
					std::cout << IMinutes << ":";

					if (!(ISecond / 10))
					{
						std::cout << "0";
					}
					std::cout << ISecond;

					Sleep(1000);

					system("cls");
					std::cout << "\nPress Enter to start  ::  Press SPACE to stop  ::  Press SPACE again to resum\n";
					std::cout << "\n";
				}
				system("cls");
			}
		}
	}

	system("pause");
	return 0;
}

