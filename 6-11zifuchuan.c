#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
int main()
{
	if (strlen("abc") - strlen("abcdef") > 0)
	{
		printf("hehe\n");
	}
	else
	{
		printf("haha\n");
	}
	return 0;
}//hehe
//strlen��������ֵ��size_t ��unsigned int�޷�������������Զ������