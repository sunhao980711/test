#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>//malloc��ͷ�ļ�
#include <string.h>

//int main()
//{
//	int* p = (int*)malloc(20);
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			*(p + i) = i;
//		}
//	}
	//malloc����20���ռ�
	//����20���ֽڲ����������ǵ�ʹ��
	//ϣ�������ܹ���40���ֽ�
	//����Ϳ�����realloc��������̬���ٵ��ڴ�

	//reallocʹ�õ�ע�����
	//1.���pָ��Ŀռ�֮�����㹻���ڴ�ռ����׷�ӣ���ֱ��׷�ӣ��󷵻�p
	//2.���pָ��Ŀռ�֮��û���㹻���ڴ�ռ����׷�ӣ���realloc������������һ���µ��ڴ�����
	//����һ����������Ŀռ䣬���Ұ�ԭ���ڴ��е����ݿ����������ͷžɵ��ڴ�ռ䣬��󷵻��¿��ٵ��ڴ�ռ��ַ
	//3.����һ���µı���������realloc�����ķ���ֵ
//	int* ptr = realloc(p, 40);
//	if (ptr != NULL)
//	{
//		p = ptr;
//	}
//	//��ȻҪ�ͷſռ�
//	free(p);
//	p == NULL;
//	return 0;
//}

//���ٶ�̬�ڴ������������
//1.һ��Ҫ�ж��Ƿ�Ϊ��ָ��
//2.��ֹԽ�����
//int main()
//{
//	int* p = (int*)malloc(5 * sizeof(int));
//	if (p == NULL)
//	{
//		return 0;
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			*(p + i) = i;
//		}//����Խ����ʣ����ٵ���5��int�ֽڣ�����forѭ������10��int�ֽ�
//	}
//}

//int main()
//{
//	int* p = realloc(NULL, 40);//realloc(NULL,40)=malloc(40)
//}

//4.ʹ��free�ͷŶ�̬�����ڴ��һ����
//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		return 0;
//	}
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*p++ = i;
//	}
//	free(p);//����p���ܸı�
//	p = NULL;
//}

int main()
{
	char* str= "hello,world";
	printf("%s\n", str);
	printf(str);
	printf("hello,world");//����д��������
	return 0;
}