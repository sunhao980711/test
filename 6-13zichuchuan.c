#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//my_strcpy(char* dest,const char* src)
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//	char* ret = dest;
//	//拷贝src指向的字符串到dest指向的空间，包含‘\0’
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	//返回目的空间的起始地址
//	return ret;
//}
//int main()
//{
//	char arr1[] = "abcdefg";
//	char arr2[] = "bit";
//	//strcpy();
//	strcpy(arr1, arr2);//会将“bit\0”都拷进去，必须有‘\0’，即字符串类型
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
	strcat(arr1, arr2);//strcat 追加字符串的函数，也是（目的地，源头），目的地容量必须足够大
	printf("%s\n", arr1);
	return 0;
}