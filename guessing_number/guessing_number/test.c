#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>////////system(""), rand()
#include <windows.h>///////Sleep()
#include <string.h>////////strlen(), strcmp()
#include <time.h>

//menu
void menu()
{
	printf("*******************\n");
	printf("****  1. play  ****\n");
	printf("****  0. exit  ****\n");
	printf("*******************\n");
}
//game function
void game()
{
	                              //srand((unsigned int)time(NULL));
	int guess = 0;
	int ran = rand()%100 + 1;
	                              //printf("%d\n", ran);///////////////debug ran
	while (1)
	{
		printf("Guessing a number:> ");
		scanf("%d", &guess);
		if (guess < ran)
		{
			printf("You guessed too small\n");
		}
		else if (guess > ran)
		{
			printf("You guessed too big\n");
		}
		else
		{
			printf("Correct!\n");
			break;
		}
	}
}

int main()
{
	//创建用于欢迎界面的变量并初始化
	char arr1[] =  "Welcome to guessing number game!\nPlease guess a number between 1 and 100\nChoosing 1 to start, 0 to exit\n";
	char arr2[] =  "                                                                                                        " ;
	int len = strlen(arr1);
	int left = 0;
	int right = len - 1;
	//猜数字变量
	int input = 0;
	//生成随机数的生成起点
	srand((unsigned int)time(NULL));
	//出现欢迎界面
	while (left <= right)
	{
		arr2[left] = arr1[left];
		printf("%s\n", arr2);
		Sleep(100);
		system("cls");
		left++;
	}
	printf("%s\n", arr2);
    //make a random number to guess
	do
	{
		menu();
		printf("Choose play or exit：>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
		{
			printf("Start game\n\n");
			game();
			break;
		}
		case 0:
		{
			printf("exit successfully\n");
		}
		default:
			printf("Oh! You have chosen an incorrect number\n");
			break;
		}
	} while (input);
	return 0;
}

