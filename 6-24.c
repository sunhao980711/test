#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>//malloc的头文件
#include <string.h>

//int main()
//{
//	int* p = (int*)malloc(20);
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			*(p + i) = i;
//		}
//	}
	//malloc开辟20个空间
	//假设20个字节不能满足我们的使用
	//希望我们能够有40个字节
	//这里就可以用realloc来调整动态开辟的内存

	//realloc使用的注意事项：
	//1.如果p指向的空间之后有足够的内存空间可以追加，则直接追加，后返回p
	//2.如果p指向的空间之后没有足够的内存空间可以追加，则realloc函数会重新找一个新的内存区域
	//开辟一块满足需求的空间，并且把原来内存中的数据拷贝回来，释放旧的内存空间，最后返回新开辟的内存空间地址
	//3.得用一个新的变量来接收realloc函数的返回值
//	int* ptr = realloc(p, 40);
//	if (ptr != NULL)
//	{
//		p = ptr;
//	}
//	//依然要释放空间
//	free(p);
//	p == NULL;
//	return 0;
//}

//开辟动态内存会遇到的问题
//1.一定要判断是否为空指针
//2.防止越界访问
//int main()
//{
//	int* p = (int*)malloc(5 * sizeof(int));
//	if (p == NULL)
//	{
//		return 0;
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			*(p + i) = i;
//		}//错误，越界访问，开辟的是5个int字节，但是for循环里有10个int字节
//	}
//}

//int main()
//{
//	int* p = realloc(NULL, 40);//realloc(NULL,40)=malloc(40)
//}

//4.使用free释放动态开辟内存的一部分
//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		return 0;
//	}
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*p++ = i;
//	}
//	free(p);//错误，p不能改变
//	p = NULL;
//}

int main()
{
	char* str= "hello,world";
	printf("%s\n", str);
	printf(str);
	printf("hello,world");//三种写法都可以
	return 0;
}