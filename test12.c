#define _CRT_SECURE_NO_WARNINGS 1
//����
//�⺯��
//�Զ��庯��
#include <stdio.h>
//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = 0;
//	sum = Add(a, b);
//	printf("sum=%d\n", sum);
//	return 0;
//}

//�⺯��
//IO����
//�ַ�����������
//�ַ���������
//�ڴ��������
//ʱ��/���ں���
//��ѧ����
//�����⺯��

#include <string.h>//strcpy��ͷ�ļ�
//int main()
//{
//	char arr1[] = "bit";//�ַ��������ı�־Ϊ���λ\0
//	char arr2[20] = "*8***********";
//	strcpy(arr2, arr1);//strcpy������strcpy(Ŀ�ĵأ�Դͷ)������arr1�����ݿ�����arr2,����ĩλ\0Ҳ��������
//	printf("%s\n", arr2);
//	return 0;
//}

//memset
//memory -�ڴ� set -����
//int main()
//{
//	char arr[] = "hello world";
//	memset(arr, '*', 5);  //��arrǰ5���滻���ַ�*
//	printf("%s\n", arr);
//	return 0;
//}

//�Զ��庯��
//��ʽ
//ret_type fun_name(para1, *)
//{
//	statement;//����������
//}
//ret_type ��������
//fun_name ������
//para1    ��������


//��ʵ�δ����βε�ʱ��
//�β���ʵ��ʵ�ε�һ����ʱ���������βε��޸��ǲ���ı�ʵ��
void Swap(int x, int y)
{
	int tmp = 0;
	x = y;
	y = tmp;
}
//ָ��
void Swap2(int* pa, int* pb) //  �������ź���Ĳ���Ϊ�β�
{
	int tmp = 0;
	tmp = *pa;
	*pa = *pb;
	*pb = tmp;
}
//int main()
//{
//	int a = 30;
//	int b = 40;
//	Swap2(&a, &b);    //&a,&bΪʵ��   ʵ�ο����ǳ��������������ʽ������
//	printf("a=%d b=%d\n", a, b);
//	return 0;
//}
//Swap�Ǵ�ֵ���ã�Swap2�Ǵ�ַ����

//int is_prime(int n)
//{
//	int j = 0;
//	for (j = 2; j < n; j++)
//	{
//		if (n % j == 0)
//			break;
//	}
//	if (n == j)
//	{
//		return 1;
//	}
//}
//int main()
//{
//	//��ӡ100-200֮�������
//	int i = 0;
//	for (i=100;i<=200;i++)
//	{
//		//�ж�i�Ƿ�Ϊ����
//		if (is_prime(i) == 1)
//			printf("%d ", i);
//	}
//	return 0;
//}

int binary_search(int arr[], int k, int sz)//������arr��һ��ָ��
{
	//�㷨��ʵ�֡�
	int left = 0;
	int right = sz - 1;
	
	while(left<=right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else
			return mid;
	}
	return -1;
}

//int main()
//{
//	//���ֲ���
//	//��һ�����������в��Ҿ����ĳ����
//	//����ҵ��ˣ�������������±ꡣ�Ҳ����ķ���-1
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 17;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = binary_search(arr, k,sz);
//	//arr���ݹ�ȥ��������arr��Ԫ�صĵ�ַ
//	if (ret == -1)
//	{
//		printf("�Ҳ���ָ��������\n");
//	}
//	else
//	{
//		printf("�ҵ��ˣ��±��ǣ�%d\n", ret);
//	}
//	return 0;
//}

void Add(int* pb)//û�з���ֵ������void
{
	*pb = *pb + 1;
}

int main()
{
	int num = 0;
	Add(&num);
	printf("num=%d\n", num);
	return 0;
}

//��ʽ����
//��һ�������ķ���ֵ��Ϊ��һ�������Ĳ���

int main()
{
	printf("%d", printf("%d", printf("%d", 43)));//4321
	return 0;
}
//printf�ķ���ֵ���ַ���������printf��"%d",43���ķ���ֵΪ2