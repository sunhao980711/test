#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//int main()
//{
//	char arr[] = "sh19980711@163.com";
//	char* p = "@.";
//	char buf[1024] = { 0 };
//	strcpy(buf, arr);
//	char* ret = NULL;
//	//strtok�ָ��ַ�������������Ϊchar*
//	for (ret = strtok(arr, p); ret != NULL; ret = strtok(NULL, p))
//	{
//		printf("%s\n", ret);
//	}
//	return 0;
//}

#include <ctype.h>
//int main()
//{
//	char arr = toupper('q');//��д
//	putchar(arr);
//	return 0;
//}

int main()
{
	//������ ������Ϣ
	//0-     No error
	//1-     Operation not permitted
	//2-	 No such file or directiory
	//.....
	//errno��һ��ȫ�ֵĴ�����ı���
	//��C���ԵĿ⺯����ִ�й����У��������󣬾ͻ�Ѷ�Ӧ�Ĵ����룬��ֵ��errno��
	//char* str=strerror(erron);
	//printf("%s\n",str);
	//���ļ�
	FILE* pf = fopen("test.txt", "r");
	if (pf == NULL)//δ�ҵ�Ϊ��ָ��
	{
		printf("%s\n", strerror(errno));
	}
	else
	{
		printf("chenggong");
	}
	return 0;
}