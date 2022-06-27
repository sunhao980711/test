#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int a = 10000;
	FILE* pf = fopen("test.txt", "wb");//以二进制的形式写到文件中
	fwrite(&a, 4, 1, pf);//写1个4个字节的数据放入pf维护的文件中去
	fclose(pf);
	pf = NULL;
	return 0;
}