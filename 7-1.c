#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <errno.h>
//int main()
//{
//	FILE* pfwrite = fopen("test3.txt", "w");
//	if (pfwrite == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//д�ļ�
//	fputc('b', pfwrite);
//	fputc('i', pfwrite);
//	fputc('t', pfwrite); 
//	//�ر��ļ�
//	fclose(pfwrite);
//	pfwrite = NULL;
//	return 0;
//} 

//int main()
//{
//	char buf[1024] = { 0 };
//	FILE* pf = fopen("test3.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//���ļ�
//	fgets(buf, 1024, pf);//�ı��������ֻ�����һ��
//	printf("%s\n", buf);
//	return 0;
//}

//int main()
//{
//	FILE* pfwrite = fopen("test3.txt", "w");
//	if (pfwrite == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//д�ļ�
//	fputs("hello\n", pfwrite);
//	fputs("world\n", pfwrite); //�ı������룬w�Ḳ��֮ǰ���ļ�����
//	//�ر��ļ�
//	fclose(pfwrite);
//	pfwrite = NULL;
//	return 0;
//} 

struct g
{
	int n;
	float score;
	char arr[10];
};
int main()
{
	struct g s1 = { 100,3.14f,"bit" };
	FILE* pf = fopen("test3.txt", "w");
	if (pf == NULL);
	{
		return 0;
	}
	fprintf(pf, "%d%f%s", s1.n, s1.score, s1.arr);
	fclose(pf);
	pf = NULL;
	return 0;
}