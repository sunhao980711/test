#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>//qsort������ͷ�ļ�
#include <string.h>//strcmp��ͷ�ļ�
//qsort�⺯��  quick sort��������
//qsort�ĸ�ʽ
//void qsort(void* base, size_t num, size_t width, int(*cmp)(const void* e1, const void* e2));
//  �����ݵĲ�����Ϊvoid*�ĸ�ʽ��Ԫ�ظ�����һ��Ԫ�ص��ֽڣ�ָ�뺯��

//int cmp_int(const void* e1, const void* e2)
//{
//	//�Ƚ���������ֵ�ĺ���
//	return *(int*)e1 - *(int*)e2;//ǿ��ת����void*����ת����int*���ͣ��ٽ�����    
//}

//int main()
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
// ��һ���������������������Ԫ�ص�ַ
// �ڶ��������������������Ԫ�ظ���
// �����������������������ÿ��Ԫ�صĴ�С-��λ���ֽ�
// ���ĸ��������Ǻ���ָ�룬�Ƚ�����Ԫ�ص����ú����ĵ�ַ-�������ʹ�����Լ�ʵ��
//             ����ָ������������ǣ����Ƚϵ�����Ԫ�صĵ�ַ
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//�Ը�������������
//int cmp_float(const void* e1, const void* e2)
//{
//	return ((int)(*(float*)e1 - *(float*)e2));
//}
//void test2()
//{
//	float f[] = { 9.0,8.0,7.0,6.0,5.0,4.0 };
//	int sz = sizeof(f) / sizeof(f[0]);
//	qsort(f, sz, sizeof(f[0]), cmp_float);
//	int j = 0;
//	for (j = 0; j < sz; j++)
//	{
//		printf("%f ", f[j]);
//	}
//}
//int main()
//{
//	test2();
//	return 0;
//}

//�Խṹ���������
struct Stu
{
	char name[20];
	int age;
};

int cmp_stu_by_name(const void* e1, const void* e2)
{
	//�Ƚ����־��ǱȽ��ַ���
	//�ַ����Ƚϲ���ֱ����><=���Ƚϣ�Ӧ��strcmp����
	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
}


void test3()
{
	struct Stu s[3] = { {"ahangsan",20},{"lisi",30},{"wangwu",10} };
	int sz = sizeof(s) / sizeof(s[0]);
	qsort(s, sz, sizeof(s[0]), cmp_stu_by_name);
	int v = 0;
	for (v = 0; v < 3; v++)
	{
		printf("%s %d ", s[v].name,s[v].age);
	}
}

int main()
{
	test3();
	return 0;
}
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	char ch = 'w';
//	void* p = &a;
//	p = &ch;
//	//void* ���͵�ָ����Խ����������͵ĵ�ַ   ���ǲ��ܽ��н����ò�����-+������Ӧ��
//	return 0;
//}

int main()
{
	int a[] = { 1,2,3,4 };
	printf("%d\n", sizeof(a + 0));//4- �������Ǳ�ʾ��Ԫ�ص�ַ��sizeof(a)�ű�ʾ�������飬��sizeof(a+0)������Ԫ�ص�ַ
	printf("%d\n", sizeof(a + 1));//4- �ڶ���Ԫ�ش�С
	printf("%d\n", sizeof(&a));//4- &aȡ����������ĵ�ַ��������ĵ�ַҲ�ǵ�ַ����ַ�Ĵ�С����4/8���ֽڣ�����ָ�룩
	printf("%d\n", sizeof(&a + 1));//4- ����һ�����飬���ǵ�ַ
}
int main()
{
	char arr[] = { 'a','b','c','d','e','d' };
	printf("%d\n", sizeof(arr + 0));//4- ��Ԫ�ص�ַ����ַ��С����4/8
}

char arr[] = { 'a','b','c','d','e','f' };
printf("%d\n", strlen(arr + 0));//���ֵ
