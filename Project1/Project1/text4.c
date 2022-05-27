#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	double a = 3.14;
//	double* pd = &a;
//	*pd = 2.56;
//	printf("%lf\n", a);
//	return 0;
//}

//int main()
//{
//	printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(short*));
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(double*));//在32位平台上，指针变量大小都是4个字节
//}

//结构体
//复杂对象--结构体--我们自己创造出来的一种类型
struct Book
{
	char name[20];//C语言程序设计
	short price;//55
};

#include <string.h>
//int main()
//{
//	//利用结构体类型-创建一个该类型的结构体变量
//	struct Book b1 = { "C语言程序设计",55 };
//	strcpy(b1.name, "C++");//strcpy-string copy-字符串拷贝-库函数-string.h  //name为数组，不能随意改变，改变需引入头文件，price是变量，可随意改变
//	struct Book* pb = &b1;
//	//利用pb打印出书名和价格
//	//结构体变量.成员
//	printf("%s\n", (*pb).name);
//	printf("%d\n", (*pb).price);
//	//结构体指针->成员
//	printf("%s\n", pb->name);
//	printf("%d\n", pb->price);//两种写法都可以
//	printf("书名：%s\n", b1.name);
//	printf("价格：%d\n", b1.price);
//	return 0;
//
//}