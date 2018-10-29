# Cheap_Maze_Generator
Simple maze generator, uses recursive backtrack algorithm; generates a maze that is displayed on console with 0s (hallway) and 1s (walls); this so it can be used on self-written game-engine

## How to use:
### 1. Add cheaper_mazegen.cpp, cheaper_mazegen.h, cheaper_mazegen_cell.cpp and cheaper_mazegen_cell.h to your project
### 2. On your code include "cheaper_mazegen_cell.h" and "cheaper_mazegen.h"
### 3. Create an object of type Maze (if no argument is passed, default size is set to 11)
### 4. generate the maze using the Maze class's init method (Maze::Init())
### 5. Extract it as string using the getMaze method (Maze::getMaze()) this can be stored in a string
### 6. ???
### 7. Profit.

The main.cpp provided is a basic example of the use of the maze generator.
Don't expect it to be too fancy, I made it this way so I can use it on a self-written game engine I'm working on with OpenGL, however, it can be easily modified to convert into a more fancy version.
You can easily alter the cell class so it keep track of all walls (i suggest using binary literals), and instead of moving 2 spaces each iteration
move only 1, while "destroying" the walls on both cells using binary operations (&=), then just add a method to check for each cell which walls 
it has active, and depending on the walls draw underscores "_" or pipes "|" to represent walls and get a cleaner-looking maze.
