#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	//字符串的结束标志：‘\0’
//	//"abcdef";
//	//'\0'--转义字符--ASCII码值为0
//	//0->数字0
//	//'0'->48
//	//'a','b','c'
//	return 0;
//}

//int MAX(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	int max = 0;
//	max = MAX(num1, num2);
//	printf("较大值是%d\n", max);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int arr[] = { 1,2,3,4,5,6 };
//	printf("%d\n", sizeof(arr));//计算数组大小，单位为字节，int整型为4个字节，4x6=24，共24个字节
//	printf("%d\n", sizeof(arr) / sizeof(arr[0]));
//	return 0;
//}

//int main()
//{
//	int a = 0;//4个字节，32bit位
//	int b = ~a;//b是有符号的整型
//	//~ --按（2进制）位取反
//	//0000000000000000000000000000
//	//1111111111111111111111111111
//	//第一个数字为1，代表的是负数
//	//负数在内存中存储的时候，存储的是二进制的补码
//	return 0；
//}

//int main()
//{
//	int a = 10;
//	int b = a++;//后置++，先使用，即先赋值给b10,再a++
//	printf("a=%d b=%d\n", a, b);//a=11,b=10
//	int c = ++a;//前置++，先++,再使用，， 即a=11,c=11
//	return 0;
//}

//int main()
//{
//	//真  -非0
//	//假  -0
//	//&&  -逻辑与   两个为真才为真
//	//||  -逻辑或   一个为真就为真
//	int a = 0;
//	int b = 5;
//	int c = a && b;
//	printf("c=%d\n", c);//c=0
//	return 0;
//}

//条件操作符
//exp1? exp2:exp3
//int main()
//{
//	int a = 100;
//	int b = 20;
//	int max = 0;
//	max = (a > b ? a : b);//a>b若成立，把a值赋给max，若不成立，把b值赋给max.
//	printf("较大值为%d\n", max);
//	return 0;
//}

//只要是整数，内存中存储的都是二进制的补码
//正数--原码，反码，补码 相同
//负数：
//原码                                反码                                       补码
//直接按照正负写出的二进制序列        原码的符号位不变其他位按位取反得到         反码+1
//-2
//10000000000000000000000000000010  -原码  32位
//11111111111111111111111111111101  -反码
//11111111111111111111111111111110  -补码 

//int main()
//{
//	signed int;//定义的变量是有符号的
//	unsigned int;//定义的变量是无符号的，即正数
//}

//int main()
//{
//	//typedef - 类型定义-类型重定义
//	typedef unsigned int u_int;
//	unsigned int num = 20;
//	u_int num2 = 20;//二者表达一致
//	return 0;
//}

//void test()
//{
//	static int a = 1;//a是一个静态的局部变量    static 修饰局部变量，局部变量的生命周期变长；  static修饰全局变量 改变了变量的作用域，让静态的全局变量只能在自己所在的源文件内部使用，出了源文件就没法再使用。
//	a++;
//	printf("a=%d\n", a);
//}
//int main()
//{
//	int i = 0;
//	while (i < 5)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}
//static修饰函数改变了函数的链接属性，外部链接属性变成内部链接属性

//int main()
//{
//	int a = 10;//4个字节
//	int* p = &a;//有一种变量用来存放地址的--指针变量
//	//&a；//取地址
//	//printf("%p\n", &a);//取地址用%p
//	*p = 20;//*--解引用操作符     通过p找到a,并把20赋给a
//	printf("a=%d\n", a);//a=20
//	return 0;
//}

//int main()
//{
//	char ch = 'w';
//	char* pc = &ch;
//	*pc = 'a';
//	printf("%c\n", ch);
//	return 0;
//}
//指针大小在32位平台是4个字节，64位平台是8个字节。