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
//	//写文件
//	fputc('b', pfwrite);
//	fputc('i', pfwrite);
//	fputc('t', pfwrite); 
//	//关闭文件
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
//	//读文件
//	fgets(buf, 1024, pf);//文本行输出，只输出第一行
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
//	//写文件
//	fputs("hello\n", pfwrite);
//	fputs("world\n", pfwrite); //文本行输入，w会覆盖之前的文件内容
//	//关闭文件
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