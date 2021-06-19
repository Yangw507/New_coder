#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	//关机程序
	char input [20] = { 0 };
	system("shutdown -s -t 120");
again:
	printf("你的电脑在2分钟后会关机，如果输入：我是猪 就会取消关机.\n");
	scanf("%s", input);
	if (strcmp(input, "我是猪") == 0)
	{
		system("shutdown -a");
	}
	else
	{
		printf("你娃还不听话嘛，一会儿真的给你关机哦！\n");
		printf("\n");
		goto again;
	}
	return 0;
}