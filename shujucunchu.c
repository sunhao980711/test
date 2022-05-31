#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//int main()
//{
//	//写一段代码告诉我们当前机器的字节序是什么
//	int a = 1;
//	char* p = (char*)&a;
//	if (*p == 1)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//	return 0;
//}

int main()
{
	int a = 1;
	int* p = &a;

}

//指针类型的意义：
//1. 指针类型决定了指针解引用操作符能访问几个字节；char*p；*p访问了1个字节，int*p;*p访问4个字节
//2. 指针类型决定了指针+1，-1，加的或者减的是几个字节；char*p;p+1,跳过一个字节，int*p;p+1跳过4个字节