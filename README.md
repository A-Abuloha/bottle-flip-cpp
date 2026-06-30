# C++ Two-Player Bottle Flip Game

A lightweight, text-based terminal game written in C++ where two players compete in a pseudo-randomized "bottle flip" challenge to navigate a marker to their respective end of the board.

## How to Play
1. The game starts with a flag `[ X ]` in the center of a 7-slot board.
2. Players take turns pressing **ENTER** to simulate a bottle flip (50/50 success rate).
3. A successful flip by **Player 1** moves the flag left.
4. A successful flip by **Player 2** moves the flag right.
5. If a player misses, the flag stays in place and the turn passes.
6. The game ends immediately when the flag reaches either extreme end (`-3` or `3`), declaring that player the winner.

## Technical Features
* **Interactive Turn Management:** Automated loop cycling between Player 1 and Player 2 execution states.
* **Console Synchronization:** Clears the terminal buffer between actions for real-time UI tracking.
* **Dynamic Board State:** Renders a 7-node track showing the absolute position of the flag.

## How to Compile and Run

### Prerequisites
* Windows OS
* MinGW-w64 / GCC Compiler

### Compilation
To compile a fully standalone binary that includes all necessary standard libraries (avoiding missing `.dll` errors), run the following command in your terminal:

```bash
g++ main.cpp -o main.exe -static -static-libgcc -static-libstdc++
