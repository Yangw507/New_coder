#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

int main()
{
	show();
	int input = 0;
	srand((unsigned int)time(NULL));
	//char board[3][3];
	do
	{
		menu();
		printf("Choose 1 for playing or 0 for exiting :>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
		{
			printf("Start the game!\n");
			game();
			break;
		}
		case 0:
		{
			printf("Exiting successfully!\n");
			break;
		}
		default:
		{
			printf("Please choose a right number to play or exit!\n");
			break;
		}
		}
	} while (input);
	return 0;
}