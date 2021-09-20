#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include "add.h"
#include <string.h>
//int main()
//{
//	int a = 5;
//	int b = 3;
//	int ret = add(a, b);
//	printf("a + b =%d\n", ret);
//	return 0;
//}

////////////////////////把1234按顺序打印出来/////////////////////////递归（recursion）///////////////
//void print(unsigned x)
//{
//	if (x > 9)
//	{
//		print(x / 10);
//	}
//	printf("%d ", x % 10);
//}
//
//int main()
//{
//	int a = 1234;
//	print(a);
//	return 0;
//}

////////////编写函数不允许创建临时变量，求字符串的长度/////////////////////
//////////////////错误写法////////
//int my_strlen(char* s)
//{
//	int count = 0;
//	if (*s != '\0')
//	{
//		count++;
//		s++;
//		my_strlen(s);////////////因为每次调用都会重新找内存分配内存空间，所以错了
//	}
//	return count;
//}
/////////////////////////////////正确写法/////////////////////////////
//int my_strlen(char* s)
//{
//	if (*s != '\0')
//	{
//		return 1 + my_strlen(s + 1);
//	}
//	else
//	{
//		return 0;
//	}
//}
//int main()
//{
//	//求字符串长度
//	char arr[10] = "abcdef";
//	//char arr1[] = "abcdef";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}
/////////////////////////////求n的阶乘(factorial)////////////////////////////// 
//int Fac1(int n)
//{
//	int i = 0;
//	int a = 1;
//	for (i = 1; i <= n; i++)
//	{
//		a *= i;
//	}
//	return a;
//}

int Fac(int n)
{
	if (n <= 1)
	{
		return 1;
	}
	else
	{
		return n * Fac(n - 1);
	}
}

int main()
{
	int n = 0;
	scanf("%d", &n);
	int ret = Fac(n);
	printf("%d\n", ret);
	return 0;
}