#ifndef FILE_H
#define FILE_H

#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>
#include <fstream>

// Colors for the board: W_ON_W means white piece-white square, etc.
#define W_ON_W "\E[31;47m"
#define B_ON_W "\E[30;47m"
#define W_ON_B "\E[37;41m"
#define B_ON_B "\E[30;41m"
#define DEFAULT "\E[0m"

/**********************************************************************
 * Sets up the chess board and passes it to interact
 *********************************************************************/
void initialize();

/**********************************************************************
 * This is where all the interactions with the user will take place
 **********************************************************************/
void interact(char board[8][8]);

/***********************************************************************
 * Given the board array, draws the board to the console
 **********************************************************************/
void drawBoard(char board[8][8]);

#endif
