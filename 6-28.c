#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	fopen("test2.txt", "r");//相对路径写法
//	fopen("D:\\code\\6-2\\5-29\\test1.txt", "r");//绝对路径的写法
//	return0;
//}

//int main()
//{
//	FILE* pf = fopen("test2.txt", "r");//创建一个FILE的文件信息区指向test2.txt,pf指针维护，若没创建成功，pf为空指针
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));//如果文件不存在，则读取失败，不会主动创建 ，与w写入不同
//		return 0;
//	}
//	//打开文件
//	//读文件
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

int main()
{
	FILE* pfwrite = fopen("test3.txt", "w");
	if (pfwrite == NULL)
	{
		printf("%s\n", strerror(errno));
		return 0;
	}
	//写文件
	fputc('b', pfwrite);
	fputc('i', pfwrite);
	fputc('t', pfwrite); 
	//读文件
	printf("%c", fgetc(pfread));//最前面创建为FILE* pfread=fopen("test3.txt","r")
	//关闭文件
	fclose(pfwrite);
	pfwrite = NULL;
	return 0;
} 