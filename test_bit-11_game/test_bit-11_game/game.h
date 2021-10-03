#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>
#include <time.h>

#define ROW 3
#define COL 3

//menu
void menu();

//showing welcome
void show();

//initial the board
void initialBoard(char board[ROW][COL], int row, int col);

//print the board
void printBoard(char board[ROW][COL], int row, int col);

//player move
void PlayerMove(char board[ROW][COL], int row, int col);

//computer move
void computerMove(char board[ROW][COL], int row, int col);

//estimate who win
//player win return *
//computer win return #
//no winner continue return c
//if player == computer return &
char isWin(char board[ROW][COL], int row, int col);
