#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int Add(int x, int y)
{
	int z = 0;
	z = x + y;
	return z;
}
int main()
{
	int a = 10;
	int b = 20;
	int arr[10] = { 0 };
	printf("%p\n", Add);
	printf("%p\n", &Add);//��ͬ��&�������� ���������Ǻ����ĵ�ַ
	int (*pa)(int, int) = Add;//����ָ�룬����������ָ��
	printf("%d\n", (*pa)(2, 3));//5     paָ���ź�����ַ��������
	return 0;
}