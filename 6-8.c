#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
void Print(char* str)
{
	printf("%s\n", str);
}

int main()
{
	void (*p)(char*) = Print;//��ʽ  ����ֵ ��*p��(��������)=������
	(*p)("hello,bit");
	return 0;
}

//����1
//��* ��void(*��())0��();
// void(*)() -����ָ������
//��0ǿ������ת���ɣ�void��*����������ָ������ - 0����һ�������ĵ�ַ
//����0��ַ���ĸú���