#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//strcmp�ַ����Ƚ� 
int my_strcmp(const char* str1, const char* str2)
{
	assert(str1 && str2);
	while (*str1 == *str2)
	{
		if (*str1 == '\0')
		{
			return 0;//���
		}
		str1++; 
		str2++;
	}
	if (*str1 > *str2)
	{
		return 1;
	}
	else
	{
		return -1;
	}
}

//int main()
//{
//	char* p1 = "abcdef";
//	char* p2 = "aqear";
//	int ret = strcmp(p1, p2);//���ڷ���>0�����Σ����ڷ���=0��С�ڷ���<0�����Σ������ұȽ�ASCIIֵ
//	printf("%d\n", ret);
//	return 0;
//}

int main()
{
	char arr1[10] = "abcdef";
	char arr2[] = "bit";
	strncpy(arr1, arr2, 6);//����6���ַ���b��,'i','t','\0','\0','\0'
	return 0;
}

int main()
{
	char arr1[30] = "hello\0xxxxxxxxxxxx";
	char arr2[] = "world";
	strncat(arr1, arr2, 8);//׷���ַ��������涼����'\0'����
	printf("%s\n", arr1);
	return 0;
}
