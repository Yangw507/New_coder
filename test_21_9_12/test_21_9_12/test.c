#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int n = 1;
	int ret = 1;
	int i = 1;
	int sum = 0;
	for (n = 1; n <= 10; n++)
	{
		ret = 1;///////////////////////////////////
		for (i = 1; i <= n; i++)
		{
			ret = ret * i;
		}
		sum = sum + ret;
	}
	printf("%d\n", sum);
	return 0;
}


////best method//////
int main()
{
	int n = 0;
	int ret = 1;
	int sum = 0;
	for (n = 1; n <= 3; n++)
	{
		ret = ret * n;
		sum = sum + ret;
	}
	printf("%d\n", sum);
	return 0;
}

//find a number in array////
int main()
{
	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
	int i = 0;
            //       40    / 4
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < sz; i++)
	{
		if (arr[i] == 7)
		{
			printf("find it! at the %dth", i);
			break;
		}
	}
	if (i == sz)
	{
		printf("can't find it! ");
	}
	return 0;
}
////best method/////////binary search///////////////
int main()
{
	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
	int k = 7;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int left = 0;
	int right = sz - 1;
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else
		{
			printf("find it at %dth", mid);
			break;
		}
	}
	if (left > right)
	{
		printf("no this number!");
	}
	return 0;
}
