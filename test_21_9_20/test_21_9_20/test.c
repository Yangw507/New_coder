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

////////////////////////��1234��˳���ӡ����/////////////////////////�ݹ飨recursion��///////////////
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

////////////��д��������������ʱ���������ַ����ĳ���/////////////////////
//////////////////����д��////////
//int my_strlen(char* s)
//{
//	int count = 0;
//	if (*s != '\0')
//	{
//		count++;
//		s++;
//		my_strlen(s);////////////��Ϊÿ�ε��ö����������ڴ�����ڴ�ռ䣬���Դ���
//	}
//	return count;
//}
/////////////////////////////////��ȷд��/////////////////////////////
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
//	//���ַ�������
//	char arr[10] = "abcdef";
//	//char arr1[] = "abcdef";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}
/////////////////////////////��n�Ľ׳�(factorial)////////////////////////////// 
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