#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//strstr-查找字符串函数
int main()
{
	char* p1 = "abcdefg";
	char* p2 = "bc";
	char* ret = strstr(p1, p2);//在p1里面查找第一次出现p2及往后的部分
	if (ret == NULL)
	{
		printf("字符串不存在\n");
	}
	else
	{
		printf("%s\n", ret);
	}
	return 0;
}