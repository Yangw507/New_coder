#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	char input[20] = {0};
	system("shutdown -s -t 120");

	while (1)
	{
		printf("����ѧ�Ϲ����������Ļ�ˮƽ��\n�����룺������\n������ĵ��Խ���2����֮���ػ�\n");
		scanf("%s", input);
		if (strcmp(input, "������") == 0)
		{
			system("shutdown -a");
			break;
		}
	}
	return 0;
}