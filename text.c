//包含一个叫stdio.h的文件
//std-标准 standard input output
#include <stdio.h>


//int 是整型的意思
//main前面的int表示main函数调用返回一个整型值
//int main()//主函数-程序的入口-main函数有且仅有一个
//{
//	//这里完成任务
//	//在屏幕上输出hello world
//	//函数-print function-printf-打印函数
//	//库函数-C语言本身提供给我们使用的函数
//    //别人的东西-打招呼
//	//#include
//	printf("hello 比特\n");
//	return 0;//返回 0
//}

//char-字符类型
//%d -打印整型
//%c -打印字符
//%f -打印浮点数字-打小数
//%p -以地址形式打印
//%x -打印16进制
//%o -
//int main()
//{
//	//char ch = 'A';//内存
//	//printf("%c\n", ch);//%c --打印字符格式的数据
//	//return 0;
//	//int age = 20;
//	//printf("%d\n", age);//%d --打印整型十进制数据
//	/*float f = 5.0;
//	printf("%f\n", f);*/
//	double d = 3.14;
//	printf("%lf\n", d);
//	return 0;
//}
//int main()
//{
//	printf("%d\n", sizeof(char));//1个字节
//	printf("%d\n", sizeof(short));//2
//	printf("%d\n", sizeof(int));//4
//	printf("%d\n", sizeof(long));//4
//	printf("%d\n", sizeof(long long));//8
//	printf("%d\n", sizeof(float));//4
//	printf("%d\n", sizeof(double));//8
//	return 0;
//}
//int main()
//{
//	short age = 20;//向内存申请2个字节=16比特位，用来存放20
//	return 0;
//}
//int num2 = 20;//全局变量-定义在代码块（{}）之外的变量
//
//int main()
//{
//	int num1 = 10;//局部变量-定义在代码块（{}）内部
//	return 0;
//}

//int a = 100;
//int main()
//{
//	int a = 10;
//	//局部变量和全局变量的名字建议不要相同-容易产生误会，产生bug
//	//当局部变量和全局变量的名字相同的时候，局部变量优先
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	//计算2个数的和
//	int num1 = 10;
//	int num2 = 20;
//	int sum = 0;
//	//输入数据-使用输入函数scanf_s
//	scanf_s("%d%d", &num1, &num2);//取地址符号&
//	
//	//C语言规定，变量要定义在当前代码块的最前面
//	sum = num1 + num2;
//	printf("sum=%d\n", sum);
//	return 0;
//}

//int main()
//{
//	{
//		int num = 0;//最近的大括号{}即为作用域
//		printf("%d\n", num);
//	}
//	return 0;
//}