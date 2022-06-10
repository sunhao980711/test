#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>//qsort函数的头文件
#include <string.h>//strcmp的头文件
//qsort库函数  quick sort快速排序
//qsort的格式
//void qsort(void* base, size_t num, size_t width, int(*cmp)(const void* e1, const void* e2));
//  将传递的参数改为void*的格式，元素个数，一个元素的字节，指针函数

//int cmp_int(const void* e1, const void* e2)
//{
//	//比较两个整形值的函数
//	return *(int*)e1 - *(int*)e2;//强制转换将void*类型转换成int*类型，再解引用    
//}

//int main()
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
// 第一个参数：待排序数组的首元素地址
// 第二个参数：待排序数组的元素个数
// 第三个参数：待排序数组的每个元素的大小-单位是字节
// 第四个参数：是函数指针，比较两个元素的所用函数的地址-这个函数使用者自己实现
//             函数指针的两个参数是：待比较的两个元素的地址
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//对浮点数进行排序
//int cmp_float(const void* e1, const void* e2)
//{
//	return ((int)(*(float*)e1 - *(float*)e2));
//}
//void test2()
//{
//	float f[] = { 9.0,8.0,7.0,6.0,5.0,4.0 };
//	int sz = sizeof(f) / sizeof(f[0]);
//	qsort(f, sz, sizeof(f[0]), cmp_float);
//	int j = 0;
//	for (j = 0; j < sz; j++)
//	{
//		printf("%f ", f[j]);
//	}
//}
//int main()
//{
//	test2();
//	return 0;
//}

//对结构体进行排序
struct Stu
{
	char name[20];
	int age;
};

int cmp_stu_by_name(const void* e1, const void* e2)
{
	//比较名字就是比较字符串
	//字符串比较不能直接用><=来比较，应用strcmp函数
	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
}


void test3()
{
	struct Stu s[3] = { {"ahangsan",20},{"lisi",30},{"wangwu",10} };
	int sz = sizeof(s) / sizeof(s[0]);
	qsort(s, sz, sizeof(s[0]), cmp_stu_by_name);
	int v = 0;
	for (v = 0; v < 3; v++)
	{
		printf("%s %d ", s[v].name,s[v].age);
	}
}

int main()
{
	test3();
	return 0;
}
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	char ch = 'w';
//	void* p = &a;
//	p = &ch;
//	//void* 类型的指针可以接收任意类型的地址   但是不能进行解引用操作和-+整数的应用
//	return 0;
//}

int main()
{
	int a[] = { 1,2,3,4 };
	printf("%d\n", sizeof(a + 0));//4- 数组名是表示首元素地址，sizeof(a)才表示整个数组，而sizeof(a+0)还是首元素地址
	printf("%d\n", sizeof(a + 1));//4- 第二个元素大小
	printf("%d\n", sizeof(&a));//4- &a取出的是数组的地址，但数组的地址也是地址，地址的大小就是4/8个字节（就是指针）
	printf("%d\n", sizeof(&a + 1));//4- 跳过一个数组，还是地址
}
int main()
{
	char arr[] = { 'a','b','c','d','e','d' };
	printf("%d\n", sizeof(arr + 0));//4- 首元素地址，地址大小就是4/8
}

char arr[] = { 'a','b','c','d','e','f' };
printf("%d\n", strlen(arr + 0));//随机值
