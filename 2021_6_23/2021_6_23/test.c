#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

////////��ӡ100--200������ֻ�ܱ�1������������������prime number
int main()
{
	int i = 0;
	int j = 2;//�����Գ�
	//int flag = 0;//to control whether or not print the number. 
	for (i = 100; i <= 200; i++)
	{
		int flag = 0; //to control whether or not print the number. notice: flag should be equal to 0 every time! 
		for (j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				flag = 1;
				break;
			}
		}
		if (flag == 0)
		{
			printf("%d ", i);
		}
	}

	return 0;
}