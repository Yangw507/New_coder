#define _CRT_SECURE_NO_WARNINGS 1


//ÅÅĞò´úÂë
#include <stdio.h>
int main()
{
	int arr[10];
	int min = 0;
	printf("input 5 numbers\n");
	for (int i = 0; i < 5; i++)
	{
		scanf("%d", &arr[i]);
	}
	for (int c = 0; c < 5 - 1; c++)
	{

		for (int i = 0; i < 5 - 1 - c; i++)
		{
			if (arr[i] > arr[i + 1])
			{
				min = arr[i+1];
				arr[i + 1] = arr[i];
				arr[i] = min;
			}
		}
	}
	for (int i = 0; i < 5; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	return 0;
}