#include <iostream>
#include <Windows.h>

#include "Draw.h"

#define NOMINMAX
#define WIN32_LEAN_AND_MEAN

void drawGrid()
{
	for (uint8_t i = 0; i <= BoardSize * BoardSize + BoardSize; i++)
		std::cout << "-";

	std::cout << std::endl;

	for (uint8_t i = 0; i < BoardSize; i++)
	{
		for (uint8_t j = 0; j < BoardSize; j++)
		{
			std::cout << "|";

			for (uint8_t k = 0; k < BoardSize; k++)
			{
				for (uint8_t l = 0; l < BoardSize; l++)
					std::cout << " ";

				std::cout << "|";
			}

			std::cout << std::endl;
		}

		for (uint8_t j = 0; j <= BoardSize * BoardSize + BoardSize; j++)
			std::cout << "-";

		std::cout << std::endl;
	}
}

void drawChar(char s, uint8_t boxRow, uint8_t boxCol, uint8_t row, uint8_t col)
{
	if (boxRow > BoardSize || boxCol > BoardSize || row > BoardSize || col > BoardSize)
		std::cout << "Invalid Input";

	setCursorPosition((boxRow - 1) * (BoardSize + 1) + row, (boxCol - 1) * (BoardSize + 1) + col);
	std::cout << s;
	setCursorPosition(0, pow(BoardSize + 1, 2) + 1);
	std::cout.flush();
}

void clearLine(uint8_t line)
{
	setCursorPosition(0, line);
	std::cout << "                                                 ";
	setCursorPosition(0, pow(BoardSize + 1, 2) + 1);
	std::cout.flush();
}

void setCursorPosition(int x, int y)
{
	static const HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	std::cout.flush();
	COORD coord = { (SHORT)x, (SHORT)y };
	SetConsoleCursorPosition(hOut, coord);
}
