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

////�����ݹ�
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
//}//��һ���ݹ飬��һ��㷵��
//�ݹ��������Ҫ����
//1�����������������������������������ʱ�򣬵ݹ�㲻�ټ���������ᵼ�����
//2.ÿ�εݹ���ú�Խ��Խ�ӽ������������

#include <string.h>

//int my_strlen(char* str)
//{
//	if (*str != '\0')
//	{
//		return 1 + my_strlen(str + 1);//�õݹ�����
//	}
//	else
//		return 0;
//}

//int my_strlen(char* str)    //strΪָ���������ŵ���b�ĵ�ַ
//{
//	int count = 0;
//	while (*str != '\0')   //�ַ�������õ����ű�ʾ
//	{
//		count++;
//		str++;           //str+1���ɴ��i�ĵ�ַ
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "bit";
//	int len = my_strlen(arr);//���ַ�������     arr�����飬���鴫�Σ�����ȥ�Ĳ����������飬���ǵ�һ��Ԫ�صĵ�ַ
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
//		return i* fac(i- 1);//�������1==fac(i-1),Ȼ�����Ϸ��ر��2*fac(i-1)=2,ֵ2�ط��ظ�fac(i-1),���ϳ˱��3*fac(i-1)=6,��ֵÿ�ζ����ظ����ú���
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int z = fac(n);
//	printf("%d\n", z);
//	return 0;
//}

//��n��쳲�������
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
	printf("��%d��쳲�������=%d",n,ret);
	return 0;
}
