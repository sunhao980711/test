#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d", &a, &b);
//	c = a + b;
//	printf("sum=%d\n", c);
//	return 0;
//}

//int main()
//{
//	//const-������
//	//const���εĳ����������Ǳ�ʾ���������ǲ��ܱ�ı���
//	const int num = 4;
//	int num = 4;
//	printf("%d\n", num);
//	return 0;
//}

//define ����ı�ʶ������
//#define MAX 10 //MAXΪ����
//int main()
//{
//	int arr[MAX] = { 0 };
//	printf("%d\n", MAX);
//	return 0;
//}

//ö�ٳ���
//ö��-һһ�о�
enum Sex
{
	MALE,
	FEMALE,
	SECRET
};
//MALE,FEMALE,SECRET-ö�ٳ���
//int main()
//{
//	printf("%d\n", MALE);//0
//	printf("%d\n", FEMALE);//1
//	printf("%d\n", SECRET);//2
//	return 0;
//}

//char�ַ�������
//"abcdef"
//"hello bit"
//""���ַ���

//int main()
//{
//	char arr1[] = "abc";//����
//	//"abc" -- 'a','b','c','\0' -- '\0'�ַ����Ľ�����־���ַ�����������Զ��ӡ�\0��������Ҫ����
//	char arr2[] = { 'a','b','c',0};//''�����ַ������������ַ���
//	//'a','b','c',�����0��\0�������ԣ��ַ�������Ҫ����
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	return 0;
//}

//�����ڼ�����ϴ洢��ʱ�򣬴洢����2����
//#av$
//a-97
//A-65
//ASCII ����

//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c',0 };
//	printf("%d\n", strlen(arr1));//strlen-�����ַ����ĳ���
//	printf("%d\n", strlen(arr2));
//	return 0;
//}

//ת���ַ�   \��  Ϊת���ַ�
//int main()
//{
//	printf("%d\n", strlen("c:\test\32\test.c"));//13  \tΪת���ַ���ռһ�����ȣ�\32ҲΪת���ַ���ռһ������
//	return 0;
//}

//int main()
//{
//	//printf("%d\n",strlen("c:\test\32\test.c"));
//	printf("%c\n", '\32');
//	//\32--32��2��8��������                             \ddd  ��ʾ1-3���˽��Ƶ����֣���\130       \xdd��ʾ2��ʮ���������֣���\x30
//	//32��Ϊ8���ƴ�����Ǹ�ʮ�������֣���ΪASCII��ֵ����Ӧ���ַ�
//	//32-->10����26->��ΪASCII��ֵ������ַ�
//	return 0;
//}

//ѡ�����
//int main()
//{
//	int input = 0;
//	printf("�������\n");
//	printf("��Ҫ�ú�ѧϰ�𣿣�1/0��>:");
//	scanf("%d", &input);
//	if (input == 1)
//		printf("��offer\n");
//	else
//		printf("������\n");
//	return 0;
//}

//int main()
//{
//	int line = 0;
//	printf("�������\n");
//	while (line < 10000)
//	{
//		printf("��һ�д��룺%d\n", line);
//		line++;
//	}
//	if (line >= 10000)
//		printf("��offer\n");
//	return 0;
//}

//����
//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}
//
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	int sum = 0;
//	sum = Add(num1, num2);
//	printf("sum=%d\n", sum);
//	return 0;
//}

//int main()
//{
//	//int a=1;
//	//int b=2;
//	//int c=3;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };//����һ�����10���������ֵ�����,,����[]�����ֻ���ó�����ע�������ñ���
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d\n", arr[i]);
//		i++;
//	}
//	//printf("%d\n", arr[4]);//�����ڱ��Ϊ4��������5
//	//char ch[20];//����һ�����20���ַ���������
//	//float arr2[5];//����һ�����5��С�����ֵ�����
//	return 0;
//}

//int main()
//{
//	//�ƣ�2���ƣ�λ������
//	//<<����
//	//>>����
//	int a = 1;
//	//����1ռ4���ֽ�-32bitλ
//	//00000000000000000000000000000001
//	int b = a << 2;//��a����2���ֽ� 00000000000000000000000000000100
//	printf("%d\n", b);
//	return 0;
//}

//int main()
//{
//	//(2����)λ����
//	//& ��λ��
//	//| ��λ��
//	//^ ��λ���
//	//int a=3;
//	//int b=5;
//	//int c=a&b;
//	int a = 3;
//	int b = 5;
//	int c = a ^ b;//���
//	//��������ɣ�
//	//��Ӧ������λ��ͬ����Ϊ0
//	//��Ӧ������λ���죬��Ϊ1
//	//011   3
//	//101   5
//	//110   6
//	printf("%d\n", c);
//		return 0;
//}

//��Ŀ������
//��    �߼�������
//-     ��ֵ
//+     ��ֵ
//&     ȡ��ַ
//sizeof �����������ͳ���
//~     ��һ�����Ķ����ư�λȡ��
//--    ǰ�á�����
//++    
