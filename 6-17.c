#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//strstr-�����ַ�������
int main()
{
	char* p1 = "abcdefg";
	char* p2 = "bc";
	char* ret = strstr(p1, p2);//��p1������ҵ�һ�γ���p2������Ĳ���
	if (ret == NULL)
	{
		printf("�ַ���������\n");
	}
	else
	{
		printf("%s\n", ret);
	}
	return 0;
}