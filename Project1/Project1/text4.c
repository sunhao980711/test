#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	double a = 3.14;
//	double* pd = &a;
//	*pd = 2.56;
//	printf("%lf\n", a);
//	return 0;
//}

//int main()
//{
//	printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(short*));
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(double*));//��32λƽ̨�ϣ�ָ�������С����4���ֽ�
//}

//�ṹ��
//���Ӷ���--�ṹ��--�����Լ����������һ������
struct Book
{
	char name[20];//C���Գ������
	short price;//55
};

#include <string.h>
//int main()
//{
//	//���ýṹ������-����һ�������͵Ľṹ�����
//	struct Book b1 = { "C���Գ������",55 };
//	strcpy(b1.name, "C++");//strcpy-string copy-�ַ�������-�⺯��-string.h  //nameΪ���飬��������ı䣬�ı�������ͷ�ļ���price�Ǳ�����������ı�
//	struct Book* pb = &b1;
//	//����pb��ӡ�������ͼ۸�
//	//�ṹ�����.��Ա
//	printf("%s\n", (*pb).name);
//	printf("%d\n", (*pb).price);
//	//�ṹ��ָ��->��Ա
//	printf("%s\n", pb->name);
//	printf("%d\n", pb->price);//����д��������
//	printf("������%s\n", b1.name);
//	printf("�۸�%d\n", b1.price);
//	return 0;
//
//}