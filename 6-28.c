#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	fopen("test2.txt", "r");//���·��д��
//	fopen("D:\\code\\6-2\\5-29\\test1.txt", "r");//����·����д��
//	return0;
//}

//int main()
//{
//	FILE* pf = fopen("test2.txt", "r");//����һ��FILE���ļ���Ϣ��ָ��test2.txt,pfָ��ά������û�����ɹ���pfΪ��ָ��
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));//����ļ������ڣ����ȡʧ�ܣ������������� ����wд�벻ͬ
//		return 0;
//	}
//	//���ļ�
//	//���ļ�
//	//�ر��ļ�
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
	//д�ļ�
	fputc('b', pfwrite);
	fputc('i', pfwrite);
	fputc('t', pfwrite); 
	//���ļ�
	printf("%c", fgetc(pfread));//��ǰ�洴��ΪFILE* pfread=fopen("test3.txt","r")
	//�ر��ļ�
	fclose(pfwrite);
	pfwrite = NULL;
	return 0;
} 