#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
struct S
{
	char name[20];
	int age;
};
int main()
{
	int arr1[] = { 1,2,3,4,5 };
	int arr2[5] = { 0 };
	struct S arr3[] = { {"张三",3 },{"李四",4 } };
	printf("%s", arr3);
	memcpy(arr2, arr1, sizeof(arr1));//str函数只针对字符串，memcpy为内存拷贝函数，可拷贝任意类型（目的地，源头，源头的字节大小）
	return 0;
}