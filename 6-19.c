#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
struct S
{
	char name[20];
	int age;
};
int main()
{
	int arr1[] = { 1,2,3,4,5 };
	int arr2[5] = { 0 };
	struct S arr3[] = { {"����",3 },{"����",4 } };
	printf("%s", arr3);
	memcpy(arr2, arr1, sizeof(arr1));//str����ֻ����ַ�����memcpyΪ�ڴ濽���������ɿ����������ͣ�Ŀ�ĵأ�Դͷ��Դͷ���ֽڴ�С��
	return 0;
}