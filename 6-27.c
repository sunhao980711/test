#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int a = 10000;
	FILE* pf = fopen("test.txt", "wb");//�Զ����Ƶ���ʽд���ļ���
	fwrite(&a, 4, 1, pf);//д1��4���ֽڵ����ݷ���pfά�����ļ���ȥ
	fclose(pf);
	pf = NULL;
	return 0;
}