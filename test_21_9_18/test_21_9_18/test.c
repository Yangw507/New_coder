#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>

//最大值函数
int get_max(int x, int y)
{
	return (x > y ? x : y);
}
//交换函数
void Swap(int* px, int* py)
{
	int z = 0;
	z = *px;
	*px = *py;
	*py = z;
	return;
}
//判断素数函数 1 stand for prime, 0 stand for not.
int Prime(int x)
{
	int i = 0;
	for (i = 2; i <= sqrt(x); i++)
	{
		if (x % i == 0)
		{
			return 0;
		}
	}
	return 1;
}

int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	int max = get_max(a, b);
	printf("max = %d\n", max);
	return 0;
}
int main()
{
	int a = 10;
	int b = 20;
	printf("before swapping a= %d, b= %d\n", a,b);
	Swap(&a, &b);
	printf("after swapping a= %d, b= %d\n", a, b);
	return 0;
}
int main()
{
	int a = 0;
	int cnt = 0;
	//scanf("%d", &a);
	for (a = 100; a <= 200; a++)
	{
		if (Prime(a) == 1)
		{
			printf("%d ", a);
			cnt++;
		}
	}
	printf("\ncount = %d\n", cnt);
	return 0;
}