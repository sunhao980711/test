#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#pragma pack(1)//����Ĭ�϶�����Ϊ1
struct s
{
	char c1;
	int i;
	char c2;
};//vsĬ�϶�����Ϊ8
#pragma pack()//ȡ�����õ�Ĭ�϶���������ԭΪĬ��

#include <stddef.h>//offsetof��ͷ�ļ���offsetof�Ǻ�
struct q
{
	char c;
	int i;
	double d;
};

//int main()
//{
//	printf("%d\n", offsetof(struct q, c));//offsetof������ƫ����
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
	Init(&qwe);//�ṹ�崫��Ҫ����ַ
	printf("%c %d %lf", qwe.c, qwe.a, qwe.v);
	return 0;
}