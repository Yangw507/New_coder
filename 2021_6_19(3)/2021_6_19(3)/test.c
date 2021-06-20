#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//金字塔重现！
//int main()
//{
//	int row = 5;
//	int k = 0;//控制不打印
//	int j = 0;//控制打印*
//	int i = 0;
//	for (i = 1; i <= row; i++)
//	{
//		for (k = 1; k <= row - i; k++)
//		{
//			printf(" ");
//		}
//		for (j = 1; j <= 2 * i - 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}
//空心金字塔
int main()
{
	int row = 5;
	int k = 1;//控制空
	int j = 1;//控制*
	int i = 1;
	int e = 1;
	for (i = 1; i <= row; i++)
	{
		for (k = 1; k <= row - i; k++)
		{
			printf(" ");
		}
		for (j = 1; j <= 2 * i - 1; j++)
		{
			if (i == row || j == 1 || j == 2 * i - 1)
			{
				printf("*");
			}
			else 
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}
// 练习
//int main()
//{
//	double fish_sizes[4] = {12.5, 2.2, 11.9, 17.2};
//	double sum = 0;
//	int n = 0;
//	for (n = 0; n < 4; n++)
//	{
//		sum += fish_sizes[n];
//	}
//	if (sum <= 40)
//	{
//		printf("safe!");
//	}
//	else
//	{
//		printf("not safe!");
//	}
//	return 0;
//}
//
//空心金字塔，且最后一行空格
//int main()
//{
//	int row = 5;
//	int k = 1;//控制空
//	int j = 1;//控制*
//	int i = 1;
//	int e = 1;
//	for (i = 1; i <= row; i++)
//	{
//		for (k = 1; k <= row - i; k++)
//		{
//			printf(" ");
//		}
//		for (j = 1; j <= 2 * i - 1; j++)
//		{
//			if (i == row || j == 1 || j == 2 * i - 1)
//			{
//				printf("*");
//			}
//			else if ((j > 1 && j < 2 * i - 1) || i == row && )
//			{
//				printf(" ");
//			}
//		}
//		printf("\n");
//	}
//	return 0;
//}