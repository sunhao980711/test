//����һ����stdio.h���ļ�
//std-��׼ standard input output
#include <stdio.h>


//int �����͵���˼
//mainǰ���int��ʾmain�������÷���һ������ֵ
//int main()//������-��������-main�������ҽ���һ��
//{
//	//�����������
//	//����Ļ�����hello world
//	//����-print function-printf-��ӡ����
//	//�⺯��-C���Ա����ṩ������ʹ�õĺ���
//    //���˵Ķ���-���к�
//	//#include
//	printf("hello ����\n");
//	return 0;//���� 0
//}

//char-�ַ�����
//%d -��ӡ����
//%c -��ӡ�ַ�
//%f -��ӡ��������-��С��
//%p -�Ե�ַ��ʽ��ӡ
//%x -��ӡ16����
//%o -
//int main()
//{
//	//char ch = 'A';//�ڴ�
//	//printf("%c\n", ch);//%c --��ӡ�ַ���ʽ������
//	//return 0;
//	//int age = 20;
//	//printf("%d\n", age);//%d --��ӡ����ʮ��������
//	/*float f = 5.0;
//	printf("%f\n", f);*/
//	double d = 3.14;
//	printf("%lf\n", d);
//	return 0;
//}
//int main()
//{
//	printf("%d\n", sizeof(char));//1���ֽ�
//	printf("%d\n", sizeof(short));//2
//	printf("%d\n", sizeof(int));//4
//	printf("%d\n", sizeof(long));//4
//	printf("%d\n", sizeof(long long));//8
//	printf("%d\n", sizeof(float));//4
//	printf("%d\n", sizeof(double));//8
//	return 0;
//}
//int main()
//{
//	short age = 20;//���ڴ�����2���ֽ�=16����λ���������20
//	return 0;
//}
//int num2 = 20;//ȫ�ֱ���-�����ڴ���飨{}��֮��ı���
//
//int main()
//{
//	int num1 = 10;//�ֲ�����-�����ڴ���飨{}���ڲ�
//	return 0;
//}

//int a = 100;
//int main()
//{
//	int a = 10;
//	//�ֲ�������ȫ�ֱ��������ֽ��鲻Ҫ��ͬ-���ײ�����ᣬ����bug
//	//���ֲ�������ȫ�ֱ�����������ͬ��ʱ�򣬾ֲ���������
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	//����2�����ĺ�
//	int num1 = 10;
//	int num2 = 20;
//	int sum = 0;
//	//��������-ʹ�����뺯��scanf_s
//	scanf_s("%d%d", &num1, &num2);//ȡ��ַ����&
//	
//	//C���Թ涨������Ҫ�����ڵ�ǰ��������ǰ��
//	sum = num1 + num2;
//	printf("sum=%d\n", sum);
//	return 0;
//}

//int main()
//{
//	{
//		int num = 0;//����Ĵ�����{}��Ϊ������
//		printf("%d\n", num);
//	}
//	return 0;
//}