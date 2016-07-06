/*
 * TicTacToe.h
 *
 *  Created on: May 22, 2016
 *      Author: raydelto
 */

#ifndef TICTACTOE_H_
#define TICTACTOE_H_
#include <iostream>

void init();
bool validate();
void clearScreen();
void showBoard();
bool isValidInput(std::istream&);
bool isAvailable(int , int );
bool gameOver(); //implement this method

#endif // TICTACTOE_H_


