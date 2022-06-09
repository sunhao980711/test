#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int Add(int x, int y)
{
	return x + y;
}
int Sub(int x, int y)
{
	return x - y;
}
int Mul(int x, int y)
{
	return x * y;
}
int Div(int x, int y)
{
	return x / y;
}

//int main()
//{
//	int(*parr[4])(int, int) = {Add,Sub,Mul,Div};//函数指针数组
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d\n", parr[i](2, 3));
//	}
//	return 0;
//}

//char* my_strcpy(char* dest, const char* scr);
////1.写一个函数指针 pf,能够指向my_strcpy
////2.写一个函数指针数组 pfArr ,能够存放4个my_strcpy函数的地址
//
//char* (*pf)(char*,const char*)=my_strcpy
//char* (*pfArr[4])(char*,const char*)={}

void Menu()
{
	printf("************************\n");
	printf("******1.Add   2.Sub*****\n");
	printf("******3.Mul   4.Div*****\n");
	printf("*********0.exit*********\n");
}

//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	do
//	{
//		Menu();
//		printf("请选择模式：");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			printf("请输入两个操作数：");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Add(x, y));
//			break;
//		case 2:
//			printf("请输入两个操作数：");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Sub(x, y));
//			break;
//		case 3:
//			printf("请输入两个操作数：");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Mul(x, y));
//			break;
//		case 4:
//			printf("请输入两个操作数：");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Div(x, y));
//			break;
//		default:
//			printf("退出");
//			break;
//		}
//	} while (input);
//	return 0;
//}

//用函数指针数组来做
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	do
//	{
//		Menu();
//		printf("请选择模式：");
//		scanf("%d", &input);
//		int (*p[])(int, int) = { 0,Add,Sub,Mul,Div };
//		if (input >= 1 && input <= 4)
//		{
//			printf("请输入两个操作数：");
//			scanf("%d%d", &x, &y);
//			int ret = p[input](x, y);
//			printf("%d\n", ret);
//		}
//		else if (input == 0)
//		{
//			printf("退出");
//		}
//		else
//		{
//			printf("输入有误\n");
//		}
//	} while (input);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int(*p)[10] = &arr;
//	int (*pfArr[4])(int, int);
//	int (*(*ppfArr)[4])(int, int) = &pfArr;//ppfArr是一个指向[函数指针数组]的指针
//	//ppfArr 是一个数组指针，指针指向的数组有4个元素
//	//指向的数组的每个元素的类型是一个函数指针 int(*)（int,int）
//	return 0;
//}

//回调函数
//把函数的指针（地址）作为参数传递给另一个函数

void print(char str)
{
	printf("hehe:%c", str);
}
void test(void (*p)(char))
{
	printf("test\n");
	p('d');
}
int main()
{
	test(print);
	return 0;
}

//int main()
//{
//	char arr[] = "cad";
//	printf("%s\n", arr);
//	return 0;
//}
