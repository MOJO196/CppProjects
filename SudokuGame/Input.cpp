#include "Input.h"

Input::Input(uint8_t num, uint8_t pos)
	: m_num(num), m_pos(pos)
{
}

Input::~Input()
{
}

uint8_t Input::getBoxRow() const
{
	return m_pos >> 6 & 0x3;
}

uint8_t Input::getBoxCol() const
{
	return m_pos >> 4 & 0x3;
}

uint8_t Input::getRow() const
{
	return m_pos >> 2 & 0x3;
}

uint8_t Input::getCol() const
{
	return m_pos & 0x3;
}

uint8_t Input::getNum() const
{
	return m_num;
}

void Input::getAllValues() const
{
	std::cout << "BoxRow : " << (int)getBoxRow() << std::endl;
	std::cout << "BoxCol : " << (int)getBoxCol() << std::endl;
	std::cout << "Row    : " << (int)getRow() << std::endl;
	std::cout << "Col    : " << (int)getCol() << std::endl;
	std::cout << "Number : " << (int)getNum() << std::endl;
}
