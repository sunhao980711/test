#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//int main()
//{
//	//创建一根数组-存放整型10个
//	int arr[10] = { 1,2,3 };//{1，2，3，0，0，0，0，0，0，0}不完全初始化，剩下的元素默认初始化为0
//	char arr2[5] = { 'a','b' };
//	char arr3[5] = "ab";
//	char arr4[] = "abcdef";
//	printf("%d\n", sizeof(arr4));//7
//	//sizeof 计算 arr4所占空间的大小，sizeof 计算变量、数组、类型的大小-单位是字节
//	//7个元素-char 7*1=7
//	printf("%d\n", strlen(arr4));//6
//	//strlen 求字符串的长度,'\0'之前的字符个数。只跟字符串有关，需要引入头文件
//	return 0;
//}

//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c' };
//	printf("%d\n", sizeof(arr1));//4
//	printf("%d\n", sizeof(arr2));//3
//	printf("%d\n", strlen(arr1));//3
//	printf("%d\n", strlen(arr2));//随机值，，因为找不到'\0'
//	return 0;
//}

//int main()
//{
//	char arr[] = "abcdef";
//	int i = 0;
//	for (i = 0;i < (int)strlen(arr); i++)
//	{
//		printf("%c\n", arr[i]);
//	}
//	return 0;
//}
//数组在内存中是连续存放的

//二维数组的创建
//int main()
//{
//	int arr[3][4];//3行4列整形数组
//	char arr[3][5];//3行5列字符数组
//}

//int main()
//{
//	int arr[3][4] = { 1,2,3,4,5 };//1234
//	                              //5000
//								  //0000 
//	int arr[3][4] = { {1,2,3},{4,5} };//1230
//	                                  //4500
//	                                  //0000
//	return 0;
//}

//int arr[][4] = { {2,3},{4,5} }//行可以省略，列不能省
//int main()
//{
//	int arr[3][4] = { {1,2,3},{4,5} };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//冒泡排序
//void bubble_sort(int arr[], int sz)
//{
//	//确定冒泡排序的趟数
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < sz; i++)
//	{
//		int flag = 1;//假设这一趟要排序的数据已经有序
//		//每一趟冒泡排序
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;//本躺排序的数据其实不完全有序
//			}
//		}
//		if (flag == 1)
//		{
//			break;
//		}
//	}
//}
//int main()
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };//对数组进行升序排序
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	bubble_sort(arr, sz);//arr传过去的是首元素的地址，所以要把sz传过去
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5 };
//	printf("%p\n", arr);//0133FBF0  通常情况下，数组名是数组首元素的地址
//	//例外
//	//1.sizeof（数组名）-数组名表示整个数组，sizeof（数组名）计算的是整个数组的大小，单位是字节
//	//2.&数组名，数组名代表整个数组，&数组名，取出的是整个数组的地址
//	printf("%p\n", &arr[0]);//0133FBF0
//	printf("%d\n", *arr);//1
//	return 0;
//}

//操作符
//除了%操作符之外，其他的几个操作符可以作用于整数和浮点数

//右移操作符：
//1.算术右移
//右边丢弃，左边补原符号位（例如正数左边补0，负数左边补1）
//2.逻辑右移
//右边丢弃，左边补0
//整数的二进制表示有：原码、反码、补码（正数原码、补码、反码都一样）
//存储到内存的是补码
//例如-1
//原码为10000000000000000000000000000001
//反码为11111111111111111111111111111110
//补码为11111111111111111111111111111111

//左移操作符
//左边丢弃，右边补0（左移右移只能作用于整数）

//a ^ b表示异或

//不创建临时变量，交换两个数的值
//int main()
//{
//	int a = 3;
//	int b = 5;
//	//加减法(缺点，可能会导致溢出)
//	a = a + b;
//	b = a - b;
//	a = a - b;
//	printf("a=%d\nb=%d\n", a, b);
//	return 0;
//}

//异或的方法
//int main()
//{
//	int a = 3;
//	int b = 4;
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("a=%d\nb=%d\n", a, b);
//	return 0;
//}

//求一个整数存储在内存中的二进制中1的个数
//int main()
//{
//	int count = 0;
//	int i = 0;
//	int num = 0;
//	scanf("%d", &num);
//	for (i = 0; i < 32; i++)
//	{
//		if ((num >> i) & 1 == 1)
//		{
//			count++;
//		}
//	}
//	printf("%d\n", count);
//	return 0;
//}

//int main()
//{
//	short s = 0;//short短整形，2个字节
//	int a = 10;
//	printf("%d\n", sizeof(s = a + 5));
//	printf("%d\n", s);
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	printf("%d\n", ~a);
//	//~a按位取反
//	//000000000000000000000000000000
//	//111111111111111111111111111111 -%d存的是补码,还要转换成原码
//	//111111111111111111111111111110 -反码
//	//100000000000000000000000000001 -原码
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	//printf("%d\n", ++a);//11   前置++，先++，后使用
//	printf("%d\n", a++);//10   后置++，先使用，后++
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = 0;
//	/*if (a > b)
//	{
//		max = a;
//	}
//	else
//		max = b;*/
//	max = (a > b ? a : b);
//	printf("%d\n", max);
//	return 0;
//}

//逗号表达式
//int a=1;
//int b=2;
//int c=(a>b,a=b+10,a,b=a+1);  c=13,从左往右依次计算，不成立的表达式不起作用

//创建结构体类型
struct Stu
{
	char name[20];
	int age;
	char id[20];
};

//int main()
//{
//	int a = 10;
//	struct Stu s1 = { "张三",20,"202061205138"};//使用struct Stu这个类型创建了一个学生对象s1，并初始化
//	struct Stu* ps = &s1;
//	printf("%s\n", ps->name);//结构体指针->成员名    效果等价于    printf("%s\n",(*ps).name);
//	printf("%s\n", s1.name);
//	printf("%d\n", s1.age);
//	printf("%s\n", s1.id);
//
//	return 0;
//}

//int main()
//{
//	char a = 3;
//	//00000000000000000000000000000011
//	//00000011 a     因为是char类型，所以只能存储1个字节，即8个比特位
//	char b = 127;
//	//00000000000000000000000001111111
//	//01111111 b
//	//a和b相加
//	//00000000000000000000000000000011
//	//00000000000000000000000001111111
//	//00000000000000000000000010000010
//	char c = a + b;
//	//10000010 c
//	//11111111111111111111111110000010 补码  整形提神，按符号位提升，若符号位为1，全补1，若为0，全补0
//	//11111111111111111111111110000001 反码
//	//10000000000000000000000001111110 原码，c的原码
//	printf("%d\n", c);
//	return 0;
//}

//指针
//指针类型决定了指针进行解引用操作的时候，能够访问空间的大小
//int* p; *p能够访问4个字节
//char* p; *p能够访问1个字节
//double* p; *p能够访问8个字节

//指针类型决定了：指针走一步走多远（指针的步长）
//int* p;p+1-->4
//char*p ;p+1-->1
//double* p;p+1-->8

//int main()
//{
//	int* p = NULL;
//	int a = 10;
//	p = &a;
//	if (p != NULL)
//	{
//		*p = 20;
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d\n", *p);
//		p = p + 1;
//	}
//	return 0;
//}

//int main()
//{
//	char ch[5] = { 0 };
//	int arr[10] = { 1,9,3,4,5,6,7,8,10,11 };
//	printf("%d\n", &arr[9] - &arr[2]);//8
//	printf("%d\n", &arr[9] - &ch[0]);//err错误写法
//	return 0;
//}

int my_strlen(char* str)
{
	char* start = str;
	char* end = str;
	while (*end !='\0')
	{
		end++;
	}
	return end - start;
}
//int main()
//{
//	char arr[] = "bit";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", arr);//首元素的地址
//	printf("%p\n", &arr[0]);//首元素的地址
//	printf("%p\n", &arr);//整个数组的地址
//}

//二级指针
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	int** ppa = &pa;
//	**ppa;//10
//}

int main()
{
	int a = 10;
	int b = 20;
	int c = 30;
	int* arr[3] = { &a,&b,&c };
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		printf("%d ", *arr[i]);
	}
	return 0;
}