#include "cheaper_mazegen_cell.h"
#include "cheaper_mazegen.h"

int main() {
	int xsize = 25;
	int ysize = 25;

	Maze maze = Maze(xsize, ysize);
	maze.Init();

	std::cout << maze.getMaze().c_str();
	getchar();
	return 0;
}