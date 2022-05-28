#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
typedef struct Stu
{
	//成员变量
	char name[20];
	short age;
	char tele[12];
	char sex[5];
}Stu;

void Print1(Stu tmp)
{
	printf("%s\n", tmp.name);
	printf("%d\n", tmp.age);
	printf("%s\n", tmp.tele);
	printf("%s\n", tmp.sex);
}

void Print2(Stu* a)
{
	printf("%s\n", a->name);
	printf("%d\n", a->age);
	printf("%s\n", a->tele);
	printf("%s\n", a->sex);
}

int main()
{
	Stu s1 = {"张三",12,"110","男"};
	Print1(s1);//这种方法进行传参，若实参过大，则形参拷贝，占用空间更大，浪费资源
	//即 函数传参的时候，参数是需要压栈的，如果传递一个结构体对象的时候，结构体过大，参数压栈的系统开销比较大，所以会导致性能的下降
	Print2(&s1);//传址传参，拷贝的是地址，地址无论怎么样，只占用4个或8个字节
	return 0;
}
//结构体传参，要传结构体的地址