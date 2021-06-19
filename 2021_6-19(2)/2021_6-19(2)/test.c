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
		printf("读大学老哈，看哈你文化水平唉\n请输入：尥蹶子\n否则你的电脑将于2分钟之后会关机\n");
		scanf("%s", input);
		if (strcmp(input, "尥蹶子") == 0)
		{
			system("shutdown -a");
			break;
		}
	}
	return 0;
}