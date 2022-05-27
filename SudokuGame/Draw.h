#pragma once

#include <cstdint>

#include "Common.h"

void drawGrid();
void drawChar(char s, uint8_t boxRow, uint8_t boxCol, uint8_t row, uint8_t col);
void clearLine(uint8_t line);

void setCursorPosition(int x, int y);
