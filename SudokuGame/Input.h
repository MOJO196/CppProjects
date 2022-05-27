#pragma once

#include <iostream>

class Input
{
private:
	uint8_t m_num;
	uint8_t m_pos; // boxRow, boxCol, row, col
public:
	Input(uint8_t num, uint8_t pos);
	~Input();

	uint8_t getBoxRow() const;
	uint8_t getBoxCol() const;
	uint8_t getRow() const;
	uint8_t getCol() const;
	uint8_t getNum() const;
	void getAllValues() const;
};


