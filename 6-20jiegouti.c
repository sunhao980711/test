#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//�Զ������ͣ��ṹ�壬ö�٣�������
struct 
{
	int a;
	char c;
}sa;


//�ṹ��������
struct Node
{
	int data;
	struct Node* next;//������/��ַ��
};

struct s
{
	char c;
	int a;
	double d;
	char arr[20];
};
//int main()
//{
//	struct s arr1 = { 'c',100,3.14,"hello" };
//	printf("%c %d %lf %s", arr1.c, arr1.a, arr1.d, arr1.arr);
//}

struct q
{
	char c1;
	char c2;
	int c3;
};

struct w
{
	int c4;
	char c5;
	char c6;
};
int main()
{
	struct q arr1 = { 0 };
	struct w arr2 = { 0 };
	printf("%d\n", sizeof(arr1));
	printf("%d\n", sizeof(arr2));
	return 0;
}