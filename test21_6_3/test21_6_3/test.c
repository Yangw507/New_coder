#define _CRT_SECURE_NO_WARNINGS 1//为了在VS编译器里安全使用scanf
#include <stdio.h>

////全局变量 和 局部变量是两个独立的空间！
//int a = 100;//全局变量
//
//void test()
//{
//	printf("a = %d\n",a);//结果为100， 因为下面的a为局部变量！
//}
//int main()
//{
//	int a = 10;//局部变量
//	printf("a = %d\n", a);//局部优先
//	a = 20;//更改 局部变量
//	test();
//	return 0;
// const int a = 100;//让变量具备常属性（不能被改变的属性），但是a还是个变量 
//}

//enum Sex
//{
//	//枚举的可能值 - 枚举常量
//	MALE,
//	FEMALE,
//	SECRET用
//};
//
//int main()
//{
//	//char arr[10] = "abcdef";//用F10 点 调试 窗口 监视1、2、3、4随便选
//	//也可以直接
//	char arr[] = "abcdef";
//	char arr1[] = {'a','b','c','d','e','f','\0'};
//	printf("arr = %d\n", strlen(arr));
//	printf("arr = %d\n", strlen(arr1));//strlen()是库函数需要包含它的头文件---#include <string.h>
//	printf("arr = %s\n arr1 = %s\n",arr, arr1);
//
//	return 0;
//}

//int main()
//{
//	char a = '\x68';
//	printf("%c\n",a);
//	return 0;
//}
//int MAX(int x, int y)
//{
//	if (x > y)
//	{
//		return x;
//	}
//	else 
//	{
//		return y;
//	}
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int max = 0;
//	scanf("%d,%d\n",&a,&b);//注意如果在scanf格式里加一个\n那么 要想打印就要用先敲\n + 回车
//	max = MAX(a, b);
//	printf("max = %d\n",max);
//	return 0;
//}
int main()
{
    int input = 0;
    int a = 0;
    printf("请输入一个数");
    scanf("%d",&input);
    a = input % 5; 
    if(a!=0)
    {
        printf("NO");
    }
    else if(a==0)
    {
        printf("YES");
    }
    return 0;
}


