#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

///////////쳲���������////////����ڼ���쳲�����������ӡ���쳲�������
////�����õݹ��������Ч�ʺܵ�,��쳲����������ʺ��õݹ�

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
///////////�����õ����ķ�ʽ
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


////////////////��ŵ������

////////////////������̨������

///////////n�Ľ׳��༰��
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