#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int Add(int x, int y)
{
	int z = 0;
	z = x + y;
	return z;
}
int main()
{
	int a = 10;
	int b = 20;
	int arr[10] = { 0 };
	printf("%p\n", Add);
	printf("%p\n", &Add);//相同，&函数名和 函数名都是函数的地址
	int (*pa)(int, int) = Add;//函数指针，类似于数组指针
	printf("%d\n", (*pa)(2, 3));//5     pa指针存放函数地址，解引用
	return 0;
}