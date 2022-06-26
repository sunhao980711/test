#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
char* GetMemory(void)
{
	char p[] = "hello world";
	return p;
}
void Test(void)
{
	char* str = NULL;
	str = GetMemory();
	printf(str);
}
int main()
{
	Test();
	return 0;
}//随机值，不能返回栈区的地址，栈区地址出了函数，就会销毁

//例如
//int* test()
//{
//	int a = 10;//栈区     如果改成 static int a=10;则成立，a不在栈区而在静态区，static能延长变量生命周期，出了函数还有
//	return &a;//返回栈区地址
//}
//int main()
//{
//	int* p = test();
//	*p = 20;
//	return 0;
//}//随机值

//int* test()
//{
//	int* ptr = malloc(100);//堆区，不报错，ptr销毁，但是创建的动态内存还保留
//	return ptr;
//}
//
//int main()
//{
//	int* p = test();
//	return 0;
//}

struct S
{
	int n;
	int arr[0];//未知大小的-柔性数组成员-数组的大小是可以调整的
};
int main()
{
	struct S* ps = (struct S*)malloc(sizeof(struct S) + 5 * sizeof(int));//4个字节分配给int n,20个字节分配给arr
	ps->n = 100;
	int i = 0;
	for (i = 0; i < 5; i++)
	{
		ps->arr[i] = i;
	}
	struct S* ptr = realloc(ps, 44);
	if (ptr != NULL)
	{
		ps = ptr;
	}
	for (i = 5; i < 10; i++)
	{
		ps->arr[i] = i;
	}
    return 0;
}