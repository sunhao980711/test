#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
char* GetMemory(void)
{
	char p[] = "hello world";
	return p;
}
void Test(void)
{
	char* str = NULL;
	str = GetMemory();
	printf(str);
}
int main()
{
	Test();
	return 0;
}//���ֵ�����ܷ���ջ���ĵ�ַ��ջ����ַ���˺������ͻ�����

//����
//int* test()
//{
//	int a = 10;//ջ��     ����ĳ� static int a=10;�������a����ջ�����ھ�̬����static���ӳ������������ڣ����˺�������
//	return &a;//����ջ����ַ
//}
//int main()
//{
//	int* p = test();
//	*p = 20;
//	return 0;
//}//���ֵ

//int* test()
//{
//	int* ptr = malloc(100);//������������ptr���٣����Ǵ����Ķ�̬�ڴ滹����
//	return ptr;
//}
//
//int main()
//{
//	int* p = test();
//	return 0;
//}

struct S
{
	int n;
	int arr[0];//δ֪��С��-���������Ա-����Ĵ�С�ǿ��Ե�����
};
int main()
{
	struct S* ps = (struct S*)malloc(sizeof(struct S) + 5 * sizeof(int));//4���ֽڷ����int n,20���ֽڷ����arr
	ps->n = 100;
	int i = 0;
	for (i = 0; i < 5; i++)
	{
		ps->arr[i] = i;
	}
	struct S* ptr = realloc(ps, 44);
	if (ptr != NULL)
	{
		ps = ptr;
	}
	for (i = 5; i < 10; i++)
	{
		ps->arr[i] = i;
	}
    return 0;
}