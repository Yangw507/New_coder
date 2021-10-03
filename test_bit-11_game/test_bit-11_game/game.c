#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

//menu
void menu()
{
	printf("*********************\n");
	printf("******* 1.play ******\n");
	printf("******* 0.exit ******\n");
	printf("*********************\n");
	
}

//showing welcome
void show()
{
	char arr1[] = "Welcome to tictactoe!";
	char arr2[] = "                     ";
	int left = 0;
	int right = strlen(arr1);
	while (left <= right)
	{
		arr2[left] = arr1[left];
		left++;
		printf("%s\n", arr2);
		Sleep(100);
		system("cls");
	}
	printf("%s\n", arr2);
}

//initial the board
void initialBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}

//print the board
void printBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
			{
				printf("|");
			}
		}
		printf("\n");
		///print ---
		if (i < row - 1)
		{
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
				{
					printf("|");
				}
			}
		}
		printf("\n");
	}
	printf("\n");
}

//player move
void PlayerMove(char board[ROW][COL], int row, int col)
{
	printf("player first\n输入坐标表示落棋位置(第一个格子表示1，1)\n用空格表示“，”\n");
	int x = 0;
	int y = 0;
	while (1)
	{
		printf("请输入坐标:>");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("该位置已经被占用,请重新输入\n");
			}
		}
		else
		{
			printf("超出范围，请输入棋盘范围内的坐标\n");
		}
	}
}

//computer move
void computerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("电脑走\n");
	while (1)
	{
		x = rand() % row;
		y = rand() % col;
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}
}

//estimate whether the board is full or not
int isFull(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
			{
				return 0;
			}
		}
	}
	return 1;
}

//estimate who win
char isWin(char board[ROW][COL], int row, int col)
{
	int i = 0;
	//estimate row
	for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
		{
			return board[i][0];
		}
	}
    // estimate col
	for (i = 0; i < col; i++)
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ')
		{
			return board[0][1];
		}
	}
	//estimate diagonal
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ')
	{
		return board[0][0];
	}
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != ' ')
	{
		return board[0][2];
	}
	//estimate dogfall
	if (isFull(board, ROW, COL))
	{
		return '&';
	}
	return 'c';

	//continue
}

//game 
void game()
{
	char board[ROW][COL];
	//initial the board
	initialBoard(board, ROW, COL);
	//print the board
	printBoard(board, ROW, COL);
	//play
	char ret = 0;
	while (1)
	{
		PlayerMove(board, ROW, COL);
		printBoard(board, ROW, COL);
		ret = isWin(board, ROW, COL);
		if (ret != 'c')
		{
			break;
		}
		computerMove(board, ROW, COL);
		printBoard(board, ROW, COL);
		ret = isWin(board, ROW, COL);
		if (ret != 'c')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("player win!\n");
	}
	else if (ret == '#')
	{
		printf("computer win!\n");
	}
	else
	{
		printf("Dogfall!\n");
	}
}
