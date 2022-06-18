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
//	//strtok分割字符串，返回类型为char*
//	for (ret = strtok(arr, p); ret != NULL; ret = strtok(NULL, p))
//	{
//		printf("%s\n", ret);
//	}
//	return 0;
//}

#include <ctype.h>
//int main()
//{
//	char arr = toupper('q');//大写
//	putchar(arr);
//	return 0;
//}

int main()
{
	//错误码 错误信息
	//0-     No error
	//1-     Operation not permitted
	//2-	 No such file or directiory
	//.....
	//errno是一个全局的错误码的变量
	//当C语言的库函数在执行过程中，发生错误，就会把对应的错误码，赋值到errno中
	//char* str=strerror(erron);
	//printf("%s\n",str);
	//打开文件
	FILE* pf = fopen("test.txt", "r");
	if (pf == NULL)//未找到为空指针
	{
		printf("%s\n", strerror(errno));
	}
	else
	{
		printf("chenggong");
	}
	return 0;
}