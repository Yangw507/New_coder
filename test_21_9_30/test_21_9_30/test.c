#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

///////////////½»»»Ë³ÐòÔÙÁ·/////////////////
int my_strlen(char* x)
{
	int count = 0;
	while (*x != '\0')
	{
		count++;
		x++;
	}
	return count;
}

void reverse_string(char x[])
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
	printf("%s\n", arr);
	//int ret = my_strlen(arr);
	//printf("%d\n",ret);
	return 0;
}