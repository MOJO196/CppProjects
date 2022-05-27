#include "GameManager.h"

void run()
{
	drawGrid();
	std::vector<uint8_t> solution = genSolution();
	
	drawChar('X', 3, 3, 2, 4);
	//drawSolution(solution);
}

std::vector<uint8_t> genSolution()
{
	uint8_t maxNum = pow(BoardSize, 2);
	std::vector<uint8_t> solution(pow(BoardSize, 3));
	// generate board
	return solution;
}
