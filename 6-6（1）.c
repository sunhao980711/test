#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//int main()
//{
//	int* p = NULL;//p������ָ��-ָ�����ε�ָ��-���Դ�����εĵ�ַ
//	char* pc = NULL;//pc���ַ�ָ��-ָ���ַ���ָ��-���Դ���ַ��ĵ�ַ
//	int arr[10] = { 0 };
//	arr - ��Ԫ�ص�ַ
//	& arr[0] - ��Ԫ�صĵ�ַ
//	& arr - ����ĵ�ַ
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
// int (*p)[10]=&arr;
// �����p��������ָ��
//}

//int main()
//{
//	char* arr[5];
//	char* (*pa)[5] = &arr;
//	//*˵��pa��ָ��   �� pa��ָ�����������    ��paָ���������5��Ԫ��    �� paָ��������Ԫ��������char*
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