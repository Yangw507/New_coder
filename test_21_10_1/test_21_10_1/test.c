#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
/////////////////////////sort popo//////////////////////////
void print(int* p, int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		//printf("%d ", p[i]);
		printf("%d ", *(p + i));
	}
}

void sort(int* arr, int sz)
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int j = 0;
		int flag = 1;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				flag = 0;
			}
		}
		if (flag == 1)
		{
			break;
		}
	}
}
int main()
{
	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	sort(arr, sz);
	print(arr, sz);
	return 0;
}