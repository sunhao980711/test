#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
//int main()
//{
//	int a = 0;
//    for (a = 1; a <= 100; a++)
//	{
//		printf("%d ", a);
//	}
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int sum = 0;
//	int n = 0;
//	int ret = 1;
//	scanf("%d", &n);
//	for ( i = 1; i <=n; i++)
//	{
//		int j = 1;
//		ret = 1;
//		for ( j = 1; j <=i; j++)
//		{
//			ret *= j;
//		}
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

int Add(int x, int y)
{
	int z = 0;
	z = x + y;
	return z;
}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	Add(a, b);
//	printf("%d", a+b);
//	return 0;
//}

#include <assert.h>
char* my_strcpy(char* dest,const char* src)
{
	char* ret = dest;
	assert(dest != NULL);//����  ����������ڳ���������������������������򱨴����⴫�ݿ�ָ��
	assert(src != NULL);
	//��strָ����ַ���������destָ��Ŀռ�
	while (*dest++ = *src++)
	{
		;
	}
	return ret;
}

int main()
{
	char arr1[] = "##############";
	char arr2[] = "bit";
	printf("%s\n", my_strcpy(arr1, arr2));
	return 0;
}

//int main()
//{
//	const int num = 10;
//	int n = 20;
//	int* const p = &num;
//	p = &n;//error     const����ָ�������*�ұ�ʱ�����ε���ָ�����p����p���ܱ��ı�
//	const int* p = &num;
//	*p = 20;//error    const����ָ�������*���ʱ�����ε�ʱ*p,*p���ܱ��ı�
//	printf("%d\n", num);
//	return 0;
//}