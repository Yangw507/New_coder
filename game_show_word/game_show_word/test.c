#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>
///////////////////show word//////////////////////
//int main()
//{
//	char arr1[] = "hello world!";
//	char arr2[] = "############";
//	int len = strlen(arr1);
//
//	int left = 0;
//	int right = len - 1;
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		//arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);
//		system("cls");
//		left++;
//		//right--;
//	}
//	printf("%s\n", arr2);
//	return 0;
//}

///////////password/////////////
//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("input password:>\n");
//		scanf("%s", password);
//		if (strcmp(password, "abcdef") == 0)
//		{
//			printf("rigister successfull!");
//			break;
//		}
//		else
//		{
//			printf("incorrect!\n");
//		}
//	}
//	if (i == 3)
//	{
//		printf("exit!");
//	}
//	return 0;
//}

//////shutdown program///////////////////////////////
int main()
{
	char input[20] = { 0 };
	system("shutdown -s -t 120");

	while (1)
	{
		printf("请输入：我是猪，否则你的电脑将会在2min后关机\n");
		scanf("%s", input);
		if (strcmp(input, "我是猪") == 0)
		{
			system("shutdown -a");
			break;
		}
	}

	return 0;
}