#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
typedef struct Stu
{
	//��Ա����
	char name[20];
	short age;
	char tele[12];
	char sex[5];
}Stu;

void Print1(Stu tmp)
{
	printf("%s\n", tmp.name);
	printf("%d\n", tmp.age);
	printf("%s\n", tmp.tele);
	printf("%s\n", tmp.sex);
}

void Print2(Stu* a)
{
	printf("%s\n", a->name);
	printf("%d\n", a->age);
	printf("%s\n", a->tele);
	printf("%s\n", a->sex);
}

int main()
{
	Stu s1 = {"����",12,"110","��"};
	Print1(s1);//���ַ������д��Σ���ʵ�ι������βο�����ռ�ÿռ�����˷���Դ
	//�� �������ε�ʱ�򣬲�������Ҫѹջ�ģ��������һ���ṹ������ʱ�򣬽ṹ����󣬲���ѹջ��ϵͳ�����Ƚϴ����Իᵼ�����ܵ��½�
	Print2(&s1);//��ַ���Σ��������ǵ�ַ����ַ������ô����ֻռ��4����8���ֽ�
	return 0;
}
//�ṹ�崫�Σ�Ҫ���ṹ��ĵ�ַ