#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
///////////////////////打一个数的每一位///////////////////
void print(int x)
{
	if (x > 9)
	{
		print(x / 10);
	}
	printf("%d ", x % 10);
}

int main()
{
	int a = 0;
	scanf("%d", &a);
	print(a);
	return 0;
}
///////////////////////////////n的阶乘(factorial) recursion + non-recursion////////////////////////
/////////////recursion////////////////
int fac1(int x)
{
	if (x <= 1)
	{
		return 1;
	}
	else
	{
		return x * fac(x - 1);
	}
}
/////////////non-recursion/////////////
int fac(int x)
{
	int y = 1;
	int i = 0;
	for (i = 1; i <= x; i++)
	{
		y *= i;
	}
	return y;
}
int main()
{
	int a = 0;
	scanf("%d", &a);
	int ret = fac(a);
	printf("%d\n", ret);
	return 0;
}
////////////////////////////strlen() for recursion////////////////////////
int my_strlen(char* x)
{
	if (*x != '\0')
	{
		return 1 + my_strlen(x + 1);
	}
	else
	{
		return 0;
	}
}
int main()
{
	char arr[20] = {0};
	scanf("%s", arr);
	int ret = my_strlen(arr);
	printf("%d\n", ret);
	return 0;
}
//////////////////编写一个函数 reverse_string(char * string)（递归实现）

////////////////////实现：将参数字符串中的字符反向排列，不是逆序打印。

//////////////////要求：不能使用C函数库中的字符串操作函数。

/////////////////比如:char arr[] = "abcdef"; 

//////////////////////逆序之后数组的内容变成：fedcba/////////////////////////////
//////////////non-recursion///////////
void reverse_string1(char* x)
{
	int len = strlen(x);
	int left = 0;
	int right = len - 1;
	while (left < right)
	{
		char tmp = x[left];
		x[left] = x[right];
		x[right] = tmp;
		left++;
		right--;
	}
}
//////////////////////////recursion way/////////////////////////
int my_strlen(char* x)
{
	if (*x != '\0')
	{
		return 1 + my_strlen(x + 1);
	}
	else
	{
		return 0;
	}
}

void reverse_string(char* x)
{
	int len = my_strlen(x);
	char tmp = x[0];
	x[0] = x[len - 1];
	x[len - 1] = '\0';
	if (my_strlen(x + 1) >= 2)
	{
		reverse_string(x + 1);
	}
	x[len - 1] = tmp;
}
int main()
{
	char arr[20] = "abcdef";
	reverse_string(arr);
	printf("%s", arr);
	return 0;
}
//////////////写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和

//////////////例如，调用DigitSum(1729)，则应该返回1 + 7 + 2 + 9，它的和是19

//////////////输入：1729，输出：19
int DigitSum(int x)
{
	if (x > 9)
	{
		return (x % 10) + DigitSum(x / 10);
	}
	return x;
}

int main()
{
	int a = 0;
	scanf("%d", &a);
	int ret = DigitSum(a);
	printf("%d\n", ret);
	return 0;
}
///////////////////编写一个函数实现n的k次方，使用递归实现。///////////////////////
double Pow(int a, int b)
{
	if (b > 0)
	{
		return a * Pow(a, b - 1);
	}
	else if (b == 0)
	{
		return 1;
	}
	else
	{
		return 1.0 / Pow(a,-b);
	}
}
int main()
{
	int a = 2;
	int b = -3;
	double ret = Pow(a, b);
	printf("%lf\n", ret);
	return 0;
}
//////////////////////////斐波那契数fibonacci number////////////////////
int fib(int x)
{
	if (x <= 2)
	{
		return 1;
	}
	else
	{
		return fib(x - 1) + fib(x - 2);
	}
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	int ret = fib(n);
	printf("%d\n", ret);
	return 0;
}