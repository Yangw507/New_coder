#define _CRT_SECURE_NO_WARNINGS 1//Ϊ����VS�������ﰲȫʹ��scanf
#include <stdio.h>

////ȫ�ֱ��� �� �ֲ����������������Ŀռ䣡
//int a = 100;//ȫ�ֱ���
//
//void test()
//{
//	printf("a = %d\n",a);//���Ϊ100�� ��Ϊ�����aΪ�ֲ�������
//}
//int main()
//{
//	int a = 10;//�ֲ�����
//	printf("a = %d\n", a);//�ֲ�����
//	a = 20;//���� �ֲ�����
//	test();
//	return 0;
// const int a = 100;//�ñ����߱������ԣ����ܱ��ı�����ԣ�������a���Ǹ����� 
//}

//enum Sex
//{
//	//ö�ٵĿ���ֵ - ö�ٳ���
//	MALE,
//	FEMALE,
//	SECRET��
//};
//
//int main()
//{
//	//char arr[10] = "abcdef";//��F10 �� ���� ���� ����1��2��3��4���ѡ
//	//Ҳ����ֱ��
//	char arr[] = "abcdef";
//	char arr1[] = {'a','b','c','d','e','f','\0'};
//	printf("arr = %d\n", strlen(arr));
//	printf("arr = %d\n", strlen(arr1));//strlen()�ǿ⺯����Ҫ��������ͷ�ļ�---#include <string.h>
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
//	scanf("%d,%d\n",&a,&b);//ע�������scanf��ʽ���һ��\n��ô Ҫ���ӡ��Ҫ������\n + �س�
//	max = MAX(a, b);
//	printf("max = %d\n",max);
//	return 0;
//}
int main()
{
    int input = 0;
    int a = 0;
    printf("������һ����");
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


