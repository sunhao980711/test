#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//my_strcpy(char* dest,const char* src)
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//	char* ret = dest;
//	//����srcָ����ַ�����destָ��Ŀռ䣬������\0��
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	//����Ŀ�Ŀռ����ʼ��ַ
//	return ret;
//}
//int main()
//{
//	char arr1[] = "abcdefg";
//	char arr2[] = "bit";
//	//strcpy();
//	strcpy(arr1, arr2);//�Ὣ��bit\0��������ȥ�������С�\0�������ַ�������
//	return 0;
//}


char* my_strcat(char* dest, char* src)
{
	assert(dest != NULL);
	assert(src != NULL);
	char* ret = dest;
	while (*dest != '\0')
	{
		dest++;
	}
	while (*dest++ = *src++)
	{
		;
	}
	return ret;
}
int main()
{
	char arr1[30] = "hello";
	char arr2[] = "world";
	strcat(arr1, arr2);//strcat ׷���ַ����ĺ�����Ҳ�ǣ�Ŀ�ĵأ�Դͷ����Ŀ�ĵ����������㹻��
	printf("%s\n", arr1);
	return 0;
}