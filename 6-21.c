#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#pragma pack(1)//设置默认对齐数为1
struct s
{
	char c1;
	int i;
	char c2;
};//vs默认对齐数为8
#pragma pack()//取消设置的默认对齐数，还原为默认

#include <stddef.h>//offsetof的头文件，offsetof是宏
struct q
{
	char c;
	int i;
	double d;
};

//int main()
//{
//	printf("%d\n", offsetof(struct q, c));//offsetof可以算偏移量
//	return 0;
//}

struct e
{
	char c;
	int a;
	double v;
};
void Init(struct e* p)
{
	p->c = 'w';
	p->a = 10;
	p->v = 3.14;
}
int main()
{
	struct e qwe = { 0 };
	Init(&qwe);//结构体传参要传地址
	printf("%c %d %lf", qwe.c, qwe.a, qwe.v);
	return 0;
}