#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	//�ػ�����
	char input [20] = { 0 };
	system("shutdown -s -t 120");
again:
	printf("��ĵ�����2���Ӻ��ػ���������룺������ �ͻ�ȡ���ػ�.\n");
	scanf("%s", input);
	if (strcmp(input, "������") == 0)
	{
		system("shutdown -a");
	}
	else
	{
		printf("���޻��������һ�����ĸ���ػ�Ŷ��\n");
		printf("\n");
		goto again;
	}
	return 0;
}