#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//int main()
//{
//	//дһ�δ���������ǵ�ǰ�������ֽ�����ʲô
//	int a = 1;
//	char* p = (char*)&a;
//	if (*p == 1)
//	{
//		printf("С��\n");
//	}
//	else
//	{
//		printf("���\n");
//	}
//	return 0;
//}

int main()
{
	int a = 1;
	int* p = &a;

}

//ָ�����͵����壺
//1. ָ�����;�����ָ������ò������ܷ��ʼ����ֽڣ�char*p��*p������1���ֽڣ�int*p;*p����4���ֽ�
//2. ָ�����;�����ָ��+1��-1���ӵĻ��߼����Ǽ����ֽڣ�char*p;p+1,����һ���ֽڣ�int*p;p+1����4���ֽ�