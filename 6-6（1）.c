#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//int main()
//{
//	int* p = NULL;//p是整形指针-指向整形的指针-可以存放整形的地址
//	char* pc = NULL;//pc是字符指针-指向字符的指针-可以存放字符的地址
//	int arr[10] = { 0 };
//	arr - 首元素地址
//	& arr[0] - 首元素的地址
//	& arr - 数组的地址
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
// int (*p)[10]=&arr;
// 上面的p就是数组指针
//}

//int main()
//{
//	char* arr[5];
//	char* (*pa)[5] = &arr;
//	//*说明pa是指针   ； pa是指针变量的名字    ；pa指向的数组是5个元素    ； pa指向的数组的元素类型是char*
//	return 0;
//}

void print2(int(*p)[5], int x, int y)
{
	int i = 0;
	for (i = 0; i < x; i++)
	{
		int j = 0;
		for  (j=0;j<y;j++)
		{
			printf("%d ", (*(p + i))[j]);
		}
		printf("\n");
	}
}
int main()
{
	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
	print2(arr, 3, 5);
	return 0;
}