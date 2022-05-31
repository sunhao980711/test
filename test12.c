#define _CRT_SECURE_NO_WARNINGS 1
//函数
//库函数
//自定义函数
#include <stdio.h>
//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = 0;
//	sum = Add(a, b);
//	printf("sum=%d\n", sum);
//	return 0;
//}

//库函数
//IO函数
//字符串操作函数
//字符操作函数
//内存操作函数
//时间/日期函数
//数学函数
//其他库函数

#include <string.h>//strcpy的头文件
//int main()
//{
//	char arr1[] = "bit";//字符串结束的标志为最后位\0
//	char arr2[20] = "*8***********";
//	strcpy(arr2, arr1);//strcpy拷贝，strcpy(目的地，源头)，即把arr1的内容拷贝给arr2,即最末位\0也拷贝进来
//	printf("%s\n", arr2);
//	return 0;
//}

//memset
//memory -内存 set -设置
//int main()
//{
//	char arr[] = "hello world";
//	memset(arr, '*', 5);  //将arr前5个替换成字符*
//	printf("%s\n", arr);
//	return 0;
//}

//自定义函数
//格式
//ret_type fun_name(para1, *)
//{
//	statement;//语句项，函数体
//}
//ret_type 返回类型
//fun_name 函数名
//para1    函数参数


//当实参传给形参的时候
//形参其实是实参的一份临时拷贝，对形参的修改是不会改变实参
void Swap(int x, int y)
{
	int tmp = 0;
	x = y;
	y = tmp;
}
//指针
void Swap2(int* pa, int* pb) //  函数括号后面的参数为形参
{
	int tmp = 0;
	tmp = *pa;
	*pa = *pb;
	*pb = tmp;
}
//int main()
//{
//	int a = 30;
//	int b = 40;
//	Swap2(&a, &b);    //&a,&b为实参   实参可以是常量、变量、表达式、函数
//	printf("a=%d b=%d\n", a, b);
//	return 0;
//}
//Swap是传值调用，Swap2是传址调用

//int is_prime(int n)
//{
//	int j = 0;
//	for (j = 2; j < n; j++)
//	{
//		if (n % j == 0)
//			break;
//	}
//	if (n == j)
//	{
//		return 1;
//	}
//}
//int main()
//{
//	//打印100-200之间的素数
//	int i = 0;
//	for (i=100;i<=200;i++)
//	{
//		//判断i是否为素数
//		if (is_prime(i) == 1)
//			printf("%d ", i);
//	}
//	return 0;
//}

int binary_search(int arr[], int k, int sz)//本质上arr是一个指针
{
	//算法的实现、
	int left = 0;
	int right = sz - 1;
	
	while(left<=right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else
			return mid;
	}
	return -1;
}

//int main()
//{
//	//二分查找
//	//在一个有序数组中查找具体的某个数
//	//如果找到了，返回这个数的下标。找不到的返回-1
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 17;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = binary_search(arr, k,sz);
//	//arr传递过去的是数组arr首元素的地址
//	if (ret == -1)
//	{
//		printf("找不到指定的数字\n");
//	}
//	else
//	{
//		printf("找到了，下标是：%d\n", ret);
//	}
//	return 0;
//}

void Add(int* pb)//没有返回值，就用void
{
	*pb = *pb + 1;
}

int main()
{
	int num = 0;
	Add(&num);
	printf("num=%d\n", num);
	return 0;
}

//链式访问
//把一个函数的返回值作为另一个函数的参数

int main()
{
	printf("%d", printf("%d", printf("%d", 43)));//4321
	return 0;
}
//printf的返回值是字符个数，如printf（"%d",43）的返回值为2