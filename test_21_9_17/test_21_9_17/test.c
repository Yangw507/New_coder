#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

int main()
{
	char arr1[20]={ 0 };
	char arr2[] = "hello";
	char arr3[20] = "00000000";
	//strcpy(arr1, arr2);
	printf("%s\n", arr1);
	printf("%d\n",strlen(arr1));
	printf("%d\n", strlen(arr2));
	printf("%d\n", strlen(arr3));
	return 0;
}
int main()
{
	char arr[] = "hello bit";
	char *ret = (char*)memset(arr, 'x', 5); 
	printf("%s\n", ret); //根据memset函数的返回值可知，这里的arr和ret都是地址
	return 0;
}