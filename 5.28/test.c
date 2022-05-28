#define _CRT_SECURE_NO_WARNINGS 1
#include "add.h"
#include <stdio.h>

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("%d", sum);
//	return 0;
//}

////函数递归
//void print(int n)//1234
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}

//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);
//	print(num);
//	return 0;
//}//先一层层递归，在一层层返回
//递归的两个必要条件
//1。存在限制条件，当满足这个限制条件的时候，递归便不再继续，否则会导致溢出
//2.每次递归调用后越来越接近这个限制条件

#include <string.h>

//int my_strlen(char* str)
//{
//	if (*str != '\0')
//	{
//		return 1 + my_strlen(str + 1);//用递归来做
//	}
//	else
//		return 0;
//}

//int my_strlen(char* str)    //str为指针变量，存放的是b的地址
//{
//	int count = 0;
//	while (*str != '\0')   //字符串里的用单引号表示
//	{
//		count++;
//		str++;           //str+1则变成存放i的地址
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "bit";
//	int len = my_strlen(arr);//求字符串长度     arr是数组，数组传参，传过去的不是整个数组，而是第一个元素的地址
//	printf("len=%d\n", len);
//	return 0;
//}
//
//int fac(int i)
//{
//	if (i <= 1)
//	{
//		return 1;
//	}
//	else
//		return i* fac(i- 1);//到最后那1==fac(i-1),然后往上返回变成2*fac(i-1)=2,值2载返回给fac(i-1),往上乘变成3*fac(i-1)=6,即值每次都返回给调用函数
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int z = fac(n);
//	printf("%d\n", z);
//	return 0;
//}

//第n个斐波那契数
int Fib(int x)
{
	if (x <= 2)
	{
		return 1;
	}
	else
		return Fib(x - 1) + Fib(x - 2);
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	int ret = Fib(n);
	printf("第%d个斐波那契数=%d",n,ret);
	return 0;
}
