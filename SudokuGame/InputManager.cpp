#include "InputManager.h"

#include "Common.h"
#include "Draw.h"

Input getInput()
{
	uint8_t pos = 0;
	uint8_t input;

	for (int8_t i = 3; i > -1; i--)
	{
		for (;;)
		{
			switch (i)
			{
			case 3:
				std::cout << "Enter your box row : ";
				break;
			case 2:
				std::cout << "Enter your box col : ";
				break;
			case 1:
				std::cout << "Enter your row : ";
				break;
			case 0:
				std::cout << "Enter your col : ";
				break;
			}

			if (getInputValue(input, 1))
			{
				input = input << i * 2;
				pos += input;
				break;
			}
		}
	}
	
	for (;;)
	{
		std::cout << "Enter your value : ";

		if (getInputValue(input, 3))
			break;
	}

	return Input(input, pos);
}

bool getInputValue(uint8_t& input, const uint8_t& mul)
{
	input = 0;
	std::cin >> input;
	clearLine(pow(BoardSize + 1, 2) + 1);
	input -= 48;

	if (input >= 1 && input <= 3 * mul)
		return true;
	return false;
}
