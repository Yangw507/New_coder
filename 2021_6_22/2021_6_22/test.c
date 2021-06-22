#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//注意 a++ 到底是在什么时候执行的！
//int main()
//{
//	int a = 0, b = 0;
//	for (a = 1, b = 1; a <= 100; a++)
//	{
//		if (b >= 20) break;
//		if (b % 3 == 1)
//		{
//			b = b + 3;
//			continue;
//		}
//		b = b - 5;
//	}
//	printf("%d\n", a);
//	return 0;
//}
//////////猜数字游戏

//void menu()
//{
//	printf("*********************\n");
//	printf("****** 1. play ******\n");
//	printf("****** 0. exit ******\n");
//	printf("*********************\n");
//	printf("choose:>");
//}
//void game()
//{
//	int ret = rand() % 100 + 1;
//	int guess = 0;
//	printf("guess the number:>");
//	scanf("%d", &guess);
//    while (guess != ret)
//	{
//		//if (guess == ret)
//		//{
//		//	printf("you're right!\n");
//		//	break;
//		//}
//	    if (guess > ret)
//		{
//			printf("bigger than the number!\n");
//			printf("guess the number:>");
//			scanf("%d", &guess);
//		}
//		else
//		{
//			printf("smaller than the number!\n");
//			printf("guess the number:>");
//			scanf("%d", &guess);
//		}
//	}
//	if (guess == ret)
//	{
//		printf("you're right!\n");
//	}
//}
//
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	menu();
//	do
//	{
//		scanf("%d", &input);//0, 1
//		switch (input)
//		{
//		case 1:
//		{
//			game();
//			menu();
//			break;
//
//		}
//		case 0:
//		{
//			printf("exit succesfully!\n");
//			menu();
//			break;
//		}
//		default:
//		{
//			printf("wrong number!\n");
//			menu();
//			break;
//		}
//		}
//	} while (1);
//	return 0;
//}

/////////求最大公约数
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a,&b);
//	int m = a > b ? b : a;//如果a>b那么取b否则取a
//	while (1)
//	{
//		if (a % m == 0 && b % m == 0)
//		{
//			printf("greatest common divisor is :%d\n", m);
//			break;
//		}
//		m--;
//	}
//
//	return 0;
//}
////////辗转相除法
int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	int r = 0;
	while (r = a % b)
	{
		a = b;
		b = r;
	}
	printf("greatest common divisor is %d\n", b);
	return 0;
}
