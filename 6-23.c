#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//动态内存开辟
#include <stdlib.h>//malloc的头文件
#include <string.h>


int main()
{
	//向内存申请10个整形空间
	int* p = (int*)malloc(10 * sizeof(int));
	if (p == NULL)
	{
		//打印错误原因的一种方式
		printf("%s\n", strerror(errno));
	}//必须要检查是否开辟成功
	else
	{
		//正常使用空间
		int i = 0;
		for (i = 0; i < 10; i++)
		{
			*(p + i) = i;
			printf("%d ", *(p + i));
		}
	}
	//当动态申请的空间不再使用的时候
	//就应该还给操作系统
	free(p);//free函数是用来释放动态开辟的空间的
	p == NULL;//使p找不到这块空间
	return 0;
}

//calloc
int main()
{
	int* p = (int*)calloc(10, sizeof(int));//会把空间的每个字节初始化为0
	//后面和malloc函数一样
}

//realloc调整动态开辟内存空间的大小