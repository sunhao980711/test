#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//λ��
struct s
{
	int a : 2;//2ָֻ��2������λ
	int b : 5;
	int c : 10;
	int d : 30;
};//һ����47������λ����6���ֽڣ�����int����4���ֽ�Ϊ��λ������ռ8���ֽ�
//int main()
//{
//	struct s arr;
//	printf("%d\n", sizeof(arr));
//	return 0;
//}//8

struct a
{
	char q : 3;
	char w : 4;
	char e : 5;
	char r : 4;
};

//ö��
enum Sex
{
	//ö�ٵĿ���ȡֵ,����
	MALE,
	FEMALE,
	SECRECT
};
//int main()
//{
//	enum Sex s = MALE;
//	printf("%d %d %d", MALE, FEMALE, SECRECT);//0,1,2 int����
//	return 0;
//}

//���ϣ������壩
union un
{
	char c;
	int i;
};
int main()
{
	union un u;
	printf("%d\n", sizeof(u));//4���ֽڣ�������������͵Ĵ�С����c��i����һ���ռ�
}