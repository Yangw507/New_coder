#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

///////////斐波那契数列////////输入第几个斐波那契数，打印这个斐波那契数
////但是用递归这个方法效率很低,求斐波那契数不适合用递归

int Fib1(int x)
{
	if (x <= 2)
	{
		return 1;
	}
	else if (x > 2)
	{
		return Fib1(x - 1) + Fib1(x - 2);
	}
}
///////////所以用迭代的方式
int Fib(int y)
{
	int a = 1; 
	int b = 1;
	int c = 1;
	while (y > 2)
	{
		c = a + b;
		a = b;
		b = c;
		y--;
	}
	return c;
}

int main()
{
	int n = 0;
	scanf("%d", &n);
	int ret = Fib(n);
	printf("%d\n", ret);
	return 0;
}


////////////////汉诺塔问题

////////////////青蛙跳台阶问题

///////////n的阶乘相及加
int main()
{
	int n = 0;
	scanf("%d", &n);
	int i = 0;
	int sum = 0;
	int ret = 1;
	for (i = 1; i <= n; i++)
	{
		ret *= i;
		sum = sum + ret;
	}
	printf("%d sum = %d\n", ret, sum);
	return 0;
}