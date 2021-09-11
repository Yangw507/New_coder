#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int a = 10;
	printf("%p\n", &a);
	int* pa = &a;
	*pa = 20;
	return 0;
}