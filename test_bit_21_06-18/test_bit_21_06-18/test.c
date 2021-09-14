#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>

//////////////////////////打印1-100所有有9的整数/////////////////////////////////
int main()
{
	int count = 0;
	int i = 0;
	for (i = 1; i < 100; i++)
	{
		if ((i % 10) == 9)
		{
			count++;
		}
		if ((i / 10) == 9)
		{
			count++;
		}
	}
	printf("%d\n", count);
	return 0;
}
/////////////////////////////打印100-200的素数（只能被1和它本身整除的数）////////////////////////////////
int main()
{
	int j = 0;
	int i = 0;
	int count = 0;
	for (i = 101; i <= 200; i += 2)
	{
		int flag = 1;
		for (j = 2; j <= sqrt(i); j++)
		{
			if (i % j == 0)
			{
				flag = 0;
				break;
			}
		}
		if (flag == 1)
		{
			printf("%d ", i);
			count++;
		}
	}
	printf("\ncount = %d\n", count);
	return 0;
 }
/////////////////////////////计算1/1-1/2+1/3-1/4+1/5 …… + 1/99 - 1/100 的值，打印出结果////////////////////
int main()
{
	int i = 0;
	double sum = 0.0;
	int flag = 1;
	for (i = 1; i <= 100; i++)
	{
		sum += flag * (1.0 / i);
		flag = -flag;
	}
	printf("%f", sum);
	return 0;
}
///////////////////////////////求是个数的最大值/////////////////////////////
int main()
{
	int arr[10] = { 0 };
	int i = 0;

	for (i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
	}
	int max = arr[0];
	for (i = 1; i < 10; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	printf("%d\n", max);
	return 0;
}
////////////////////////////////////////在屏幕上输出9*9乘法口诀表///////////////////////////////////////////
int main()
{
	int i = 0;
	int j = 0;
	for (i = 1; i <= 9; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%d * %d = %2d   ", i, j, i * j);
		}
		printf("\n");
	}
	return 0;
}
//////////////////////////////////////binary search//////////////////////////////////////////////////
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int f = 0;
	int i = 0;
	int mid = 0;
	int left = 0;
	int len = sizeof(arr) / sizeof(arr[0]);
	int right = len - 1;
	scanf("%d", &f);
	while (left <= right)
	{
		mid = (left + right) / 2;
		if (arr[mid] > f)
		{
			right = mid;
		}
		else if (arr[mid] < f)
		{
			left = mid;
		}
		else
		{
			printf("found it subscript is %d\n", mid);
			break;
		}
	}
	if (left > right)
	{
		printf("no this number!\n");
	}
	return 0;
}