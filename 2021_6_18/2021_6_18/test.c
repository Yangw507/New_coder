#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	int a[3];
//	int max = 0;
//	for (int i = 0; i < 3; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//	for (int j = 0; j < 3 - 1; j++)
//	{
//		for (int i = 0; i < 3 - 1- j; i++)
//		{
//			if (a[i] < a[i + 1])
//			{
//				max = a[i + 1];
//				a[i + 1] = a[i];
//				a[i] = max;
//			}
//		}
//	}
//	for (int i = 0; i < 3; i++)
//	{
//		printf("%d ", a[i]);
//	}
//	printf("\n");
//	return 0;
//}
//int main()
//{
//
//	for (int i = 3; i <= 100; i++)
//	{
//		if (i%3 == 0)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//��n�Ľ׳�
//int main()
//{
//	int n = 0;
//	int num = 1;
//	scanf("%d", &n);
//	for (int i = n; i > 0; i--)
//	{
//		num = num * i;
//	}
//	printf("!%d = %d\n", n, num);
//	return 0;
//}

//����!1+!2+!3....!10 
//int main()
//{
//	int num = 1;
//	int sum = 0;
//	for (int j = 1; j <= 4; j++)
//	{
//		num = 1;/////�ص�,�������״�
//		for (int i = j; i > 0; i--)
//		{
//			num = num * i;
//		}
//		sum = sum + num;
//	}
//	printf("!1+!2+!3....!10  = %d\n", sum);
//	return 0;
//}

//���ֲ���,��������
//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	int mid = 0;
//	int l = 0;
//	int f = 7;
//	int right = 0;
//	int left = 0;
//	l = sizeof(arr) / sizeof(arr[0]);
//	right = l - 1;
//	mid = (left + right) / 2;
//	while (left <= right)
//	{
//		if (arr[mid] > f)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < f)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("�ҵ��ˣ��±�Ϊ%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("û�ҵ�\n");
//	}
//	return 0;
//}

