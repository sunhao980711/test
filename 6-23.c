#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//��̬�ڴ濪��
#include <stdlib.h>//malloc��ͷ�ļ�
#include <string.h>


int main()
{
	//���ڴ�����10�����οռ�
	int* p = (int*)malloc(10 * sizeof(int));
	if (p == NULL)
	{
		//��ӡ����ԭ���һ�ַ�ʽ
		printf("%s\n", strerror(errno));
	}//����Ҫ����Ƿ񿪱ٳɹ�
	else
	{
		//����ʹ�ÿռ�
		int i = 0;
		for (i = 0; i < 10; i++)
		{
			*(p + i) = i;
			printf("%d ", *(p + i));
		}
	}
	//����̬����Ŀռ䲻��ʹ�õ�ʱ��
	//��Ӧ�û�������ϵͳ
	free(p);//free�����������ͷŶ�̬���ٵĿռ��
	p == NULL;//ʹp�Ҳ������ռ�
	return 0;
}

//calloc
int main()
{
	int* p = (int*)calloc(10, sizeof(int));//��ѿռ��ÿ���ֽڳ�ʼ��Ϊ0
	//�����malloc����һ��
}

//realloc������̬�����ڴ�ռ�Ĵ�С