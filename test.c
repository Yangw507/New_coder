#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	//int a = 10;// 向内存申请了4byte的空间，里面存放10
//	//printf("%p\n", &a);
//	char b = 'm';
//	char* pb = &b;
//	*pb = 'L';
//	//int * pa = &a;//指针变量
//	//* pa = 20;//*解引用操作符
//	printf("%c\n", b);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	printf("%p\n", pa);
//	printf("%p\n", *pa);//*pa实则就是a
//	printf("% p\n", &a);
//}

//int main()
//{
//	int n = 0;
//	int i = 0;
//	int x = 0;
//	int c = 0;
//	int arr[100];
//	scanf("%d",&n);//输入n个数
//	for (i = 0;i < n;i++)
//	{
//		scanf("%d ",&arr[i]);
//	}
//
//	scanf("%d", &x);
//	for (i = 0; i < n; i++)
//	{
//		if (x == arr[i])
//		{
//			c++;
//		}
//	}
//	printf("%d\n",c);
//	return 0;
//}
//int main()
//{
//	int g = 0;
//	scanf("%d",&g);
//	if (g >= 90 && g <= 100)
//	{
//		printf("A\n");
//	}
//	else if (g >= 80 && g <= 89)
//	{
//		printf("B\n");
//	}
//	else if (g >= 70 && g <= 79)
//	{
//		printf("C");
//	}
//	else if (g >= 60 && g <= 69)
//	{
//		printf("D");
//	}
//	else if (g <= 59)
//	{
//		printf("E");
//	}
//	else if (g < 0 && g>100)
//	{
//		printf("F");
//	}
//	return 0;
//}

//int main()
//{
//    int x = 0;
//    int n = 0;
//    scanf("%d", &n);
//    if (x >= 90 && x <= 100)
//    {
//        printf("A\n");
//    }
//    else if (x >= 80 && x <= 89)
//    {
//        printf("B\n");
//    }
//    else if (x >= 70 && x <= 79)
//    {
//        printf("C\n");
//    }
//    else if (x >= 60 && x < 69)
//    {
//        printf("D\n");
//    }
//    else if (x >= 0 && x <= 59)
//    {
//        printf("E\n");
//    }
//    else
//    {
//        printf("F\n");
//    }
//    return 0;
//}