#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int Add(int x, int y)
{
	return x + y;
}
int Sub(int x, int y)
{
	return x - y;
}
int Mul(int x, int y)
{
	return x * y;
}
int Div(int x, int y)
{
	return x / y;
}

//int main()
//{
//	int(*parr[4])(int, int) = {Add,Sub,Mul,Div};//����ָ������
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d\n", parr[i](2, 3));
//	}
//	return 0;
//}

//char* my_strcpy(char* dest, const char* scr);
////1.дһ������ָ�� pf,�ܹ�ָ��my_strcpy
////2.дһ������ָ������ pfArr ,�ܹ����4��my_strcpy�����ĵ�ַ
//
//char* (*pf)(char*,const char*)=my_strcpy
//char* (*pfArr[4])(char*,const char*)={}

void Menu()
{
	printf("************************\n");
	printf("******1.Add   2.Sub*****\n");
	printf("******3.Mul   4.Div*****\n");
	printf("*********0.exit*********\n");
}

//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	do
//	{
//		Menu();
//		printf("��ѡ��ģʽ��");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			printf("������������������");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Add(x, y));
//			break;
//		case 2:
//			printf("������������������");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Sub(x, y));
//			break;
//		case 3:
//			printf("������������������");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Mul(x, y));
//			break;
//		case 4:
//			printf("������������������");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Div(x, y));
//			break;
//		default:
//			printf("�˳�");
//			break;
//		}
//	} while (input);
//	return 0;
//}

//�ú���ָ����������
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	do
//	{
//		Menu();
//		printf("��ѡ��ģʽ��");
//		scanf("%d", &input);
//		int (*p[])(int, int) = { 0,Add,Sub,Mul,Div };
//		if (input >= 1 && input <= 4)
//		{
//			printf("������������������");
//			scanf("%d%d", &x, &y);
//			int ret = p[input](x, y);
//			printf("%d\n", ret);
//		}
//		else if (input == 0)
//		{
//			printf("�˳�");
//		}
//		else
//		{
//			printf("��������\n");
//		}
//	} while (input);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int(*p)[10] = &arr;
//	int (*pfArr[4])(int, int);
//	int (*(*ppfArr)[4])(int, int) = &pfArr;//ppfArr��һ��ָ��[����ָ������]��ָ��
//	//ppfArr ��һ������ָ�룬ָ��ָ���������4��Ԫ��
//	//ָ��������ÿ��Ԫ�ص�������һ������ָ�� int(*)��int,int��
//	return 0;
//}

//�ص�����
//�Ѻ�����ָ�루��ַ����Ϊ�������ݸ���һ������

void print(char str)
{
	printf("hehe:%c", str);
}
void test(void (*p)(char))
{
	printf("test\n");
	p('d');
}
int main()
{
	test(print);
	return 0;
}

//int main()
//{
//	char arr[] = "cad";
//	printf("%s\n", arr);
//	return 0;
//}
