#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//    //��֪һ��ʮ��������ӡ�˽��ƺ�ʮ��������
//	int a = 1234;
//	printf("%o\n%x\n", a, a);
//	return 0;
//}
//��ʮ������ת��Ϊʮ������
//int main()
//{
//	int a = 0xABCDEF;
//	printf("%15d", a);
//
//}
//int main()
//{
//	//BC9 printf()����ֵ��
//	int ret = 0;
//	ret = printf("Hello World!\n");
//	printf("%d\n", ret);
//}
//int main()
//{
//	//BC10 �������Ƴɼ�����ӡ
//	int a[3];
//	for (int i = 0; i < 3; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//	for (int i = 0; i < 3; i++)
//	{
//		printf("score%d = %d,", i + 1, a[i]);
//	}
//	printf("\n");
//	return 0;
//}
//int main()
//{
//	//BC11
//	int n = 0;
//	float c = 0;
//	float math = 0;
//	float eng = 0;
//	scanf("%d %f %f %f",&n, &c, &math, &eng);
//	printf("Tht each subject score of No. %d is %.2f, %.2f, %.2f\n",n, c, math, eng);
//	return 0;
//}
int main()
{
	//BC12 ��ӡ������
	char a;
	int i, j, k;
	int row = 5;
	scanf("%c", &a);
	for (int i = 1; i <= row; i++)
	{
		for (int j = 1; j <= row - i; j++)
		{

			printf(" ");
		}
		for (int k = 1; k <= 2 * i - 1; k++)
		{
			printf("%c", a);
		}
		printf("\n");
	}
	return 0;
}