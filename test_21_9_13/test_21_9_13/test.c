#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int n = 0;
	int arr[100] = { 0 };
	scanf("%d", &n);
	int i = 0;
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	int x = 0;
	scanf("%d", &x);
	int count = 0;
	for (i = 0; i < n; i++)
	{
		if (x == arr[i])
		{
			count++;
		}
	}
	printf("%d\n", count);
	return 0;
}
////////////////////////���printf����hello world��������////////////////////////////////
int main()
{
	printf("printf(\"Hello World!\\n\");");
	return 0;
}
//////////////////////////////n������ð������////////////////////////////////////////////
int main()
{
	int arr[100] = {0};
	int n = 0;
	scanf("%d", &n);
	int i = 0;
	int j = 0;
	int tmp = 0;
	//input n numbers 
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	//print these numbers
	for (i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	//bubble sort
	for (i = 0; i <= n - 1; i++)
	{
		for (j = 1; j <= n - i -1; j++)
		{
			if (arr[j - 1] > arr[j])////////ע�ⲻ����j+1����Ϊ���һ��j+1�Ѿ����������ˣ�
			{
				tmp = arr[j - 1];
				arr[j - 1] = arr[j];
				arr[j] = tmp;
			}
		}
	}
	//print these ordered numbers
	for (i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	return 0;
}
