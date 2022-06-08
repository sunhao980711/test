#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
void Print(char* str)
{
	printf("%s\n", str);
}

int main()
{
	void (*p)(char*) = Print;//格式  返回值 （*p）(参数类型)=函数名
	(*p)("hello,bit");
	return 0;
}

//代码1
//（* （void(*）())0）();
// void(*)() -函数指针类型
//把0强制类型转换成：void（*）（）函数指针类型 - 0就是一个函数的地址
//调用0地址处的该函数