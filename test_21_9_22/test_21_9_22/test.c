#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
/////////////////////100~200的素数//////////////////
int Prime(int x)
{
	int n = 0;
	for (n = 2; n <= sqrt(x); n++)
	{
		if (x % n == 0)
		{
			return 0;
		}
	}
	return 1;
}

int main()
{
	int i = 0;
	for (i = 100; i <= 200; i++)
	{
		if (Prime(i) == 1)
		{
			printf("%d ", i);
		}
	}
	return 0;
}
////////////////////闰年/////////////////////////
int year(int x)
{
	if ((x % 4 == 0) && (x % 100 != 0) || (x % 400 == 0))
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int main()
{
	int y = 0;
	scanf("%d", &y);
	if (year(y) == 1)
	{
		printf("%d是闰年\n", y);
	}
	else
	{
		printf("不是闰年\n");
	}
	return 0;
}
//////////////////////////////打印乘法口诀表////////////////////////////
void table(int x)
{
	int i = 0;
	for (i = 1; i <= x; i++)
	{
		int j = 0;
		for (j = 1; j <= i; j++)
		{
			printf("%d * %d = %2d  ", i, j, i * j);
		}
		printf("\n");
	}
}

int main()
{
	int n = 0;
	scanf("%d", &n);
	table(n);
	return 0;
}
/////////////////////////////////交换函数//////////////////////////
void swap(int* x, int* y)
{
	int j = 0;
	j = *x;
	*x = *y;
	*y = j;
}

int main()
{
	int a = 10;
	int b = 20;
	printf("a = %d , b = %d\n", a, b);
	swap(&a,&b);
	printf("a = %d , b = %d\n", a, b);
	return 0;
}