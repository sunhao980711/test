#define _CRT_SECURE_NO_WARNINGS 1
//��֧���
//if
//switch
//ѭ�����
//while
//for
//do while
#include <stdio.h>
//int main()
//{
//	int age = 20;
//	if (age > 18)
//		printf("������\n");
//	else
//		printf("δ������\n");
//	return 0;
//}

//int main()
//{
//	int age = 10;
//	if (age < 18)
//	{
//		printf("δ����\n");
//		printf("����̸����\n");
//
//	}//�������������Ҫִ�ж�����䣬Ӧʹ�ô���飬{ }����һ�������
//	else if (age >= 18 && age < 28)
//		printf("����\n");
//	else if (age >= 28 && age < 50)
//		printf("׳��\n");
//	else if (age >= 50 && age < 90)
//		printf("����\n");
//	else
//		printf("���\n");
//	return 0;
//}//else�����������δƥ��ifƥ��

//int main()
//{
//	int i = 1;
//	while (i <= 100)
//	{
//		if (i % 2 == 1)
//			printf("%d\n", i);
//		i++;
//
//	}
//	return 0;
//}

//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//		printf("����һ");
//		break;
//	case 2:
//		printf("���ڶ�");
//		break;
//	case 3:
//		printf("������");
//		break;
//	case 4:
//		printf("������");
//		break;
//	case 5:
//		printf("������");
//		break;
//	case 6:
//		printf("������");
//		break;
//	case 7:
//		printf("������");
//		break;
//	default:
//		printf("�������\n");
//		break;//breakֻ������ǰ�����
//	}
//	return 0;
//}switch����е�default�Ӿ���Է�������λ�ã�case��ı��ʽֻ�������γ������ʽ��case������break����Ȼ��һֱ������ȥ

//int main()
//{
//	int a = 0;
//	while (a < 11)
//	{
//		a++;
//		if (a == 5)
//			continue;//continue ������ǰѭ��continue��������ֱ������ѭ�����ж����֣���a==5��printf�����
//		printf("%d\n", a);
//		
//	}
//	return 0;
//}//1 2 3 4 6 7 8 9 10

//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//	}	
//	return 0;
//}

//int main()
//{
//	int ret = 0;
//	int ch = 0;
//	char password[20] = { 0 };
//	printf("���������룺>");
//	scanf("%s", password);//�������룬�������password������
//	while ((ch = getchar() != '\n'))
//	{
//
//	}
//	printf("��ȷ�ϣ�Y/N����>");
//	ret = getchar();
//	if (ret == 'Y')
//		printf("ȷ�ϳɹ�\n");
//	else
//		printf("����ȷ��\n");
//	return 0;
//}

//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch>'9')
//			continue;
//		putchar(ch);
//	}
//	return 0;
//}

//forѭ��
//for(���ʽ1�����ʽ2�����ʽ3)
//���ʽ1 Ϊ��ʼ�����֣����ڳ�ʼ��ѭ�����������ʽ2Ϊ�����жϲ��֣������ж�ѭ��ʱ����ֹ�����ʽ3Ϊ�������֣�����ѭ����������

//int main()
//{
//	int i = 0;
//	for (i = 1; i < 11; i++)//��ʼ��  ���ж�    ������
//	{
//		if (i == 5)
//			break;//1 2 3 4 ��while�����break����һ��������ѭ��
//		printf("%d\n", i);
//	}
//	return 0;
//}

//forѭ���ĳ�ʼ�����жϡ�����������ʡ�ԣ����ǣ�forѭ�����жϲ��������ʡ�ԣ����ж��������Ǻ�Ϊ�档

//int main()
//{
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0; k = 0; i++, k++)
//		k++;
//	return 0;//k=0Ϊ�ж����λ�ã����Ǹ����Ǹ�ֵ��0Ϊ�٣�ѭ�������룻����0��Ϊ��ѭ��
//}

//do while ѭ��
//int main()
//{
//	int i = 1;
//	do
//	{
//		printf("%d\n", i);
//		i++;
//	} while (i < 11);
//	return 0;
//}

//����n!
//int main()
//{
//	int i = 1;
//	int n = 0;
//	int a = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		a= a * i;	
//	}
//	printf("%d", a);
//	return 0;
//}

//����1��+2��+3��
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	for(n = 1; n <= 3; n++)
//	{
//		ret = 1;
//		for(i = 1;i <= n; i++)//for������for��ÿ�ζ���i=1��ʼ
//		{
//			ret = ret * i;
//		}
//		sum = sum + ret;
//	}
//	printf("sum=%d", sum);
//	return 0;
//}

#include <string.h>//strlen��strcmp���ַ�����ͷ�ļ�
#include <Windows.h>//Sleep��ͷ�ļ�
#include <stdlib.h>//system��ͷ�ļ�
//int main()
//{
//	char arr1[] = "welcome to bit!!!!!!";//�ַ������ַ�����Ҫ�������λ��\0
//	char arr2[] = "####################";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	while(left<=right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		//��Ϣһ��
//		Sleep(1000);//1000=1000ms=1s
//		system("cls");//ִ��ϵͳ�����һ������-cls-�����Ļ
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };//�ַ�������
//	for (i = 0; i < 3; i++)
//	{
//		printf("�������������룺");
//		scanf("%s", password);
//		if (strcmp(password, "123456") == 0)//  == ���������Ƚ������ַ����Ƿ���ȣ�Ӧ����һ���⺯��-strcmp
//		{
//			printf("��¼�ɹ�");
//			break;
//		}
//	}
//	if (i == 3)
//		printf("��¼ʧ�ܣ���������");
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d", &a, &b, &c);
//	if (a < b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("%d %d %d\n", a, b, c);
//	return 0;
//}

//�������������Լ��
//int main()
//{
//	int m = 0;
//	int n = 0;
//	int r = 0;
//	scanf("%d%d", &m, &n);
//	while (m % n)
//	{
//		r = m % n;
//		m = n;
//		n = r;
//	}
//	printf("%d\n", n);
//	return 0;
//}

//�ж�1000�굽2000����Щ������
//int main()
//{
//	int year = 0;
//	int count = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		//�ж�year�Ƿ�Ϊ����
//		//1.�ܱ�4�������Ҳ��ܱ�100����������
//		//2.�ܱ�400����������
//	/*	if (year % 4 == 0 && year % 100 != 0)
//		{
//			printf("%d ", year);
//			count++;
//		}
//		else if (year % 400 == 0)
//		{
//			printf("%d ", year);
//			count++;
//		}*///��һ��д��
//
//		if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
//		{
//			printf("%d ", year);
//			count++;
//		}//�ڶ���д��
//
//	}
//	printf("\n����=%d\n", count);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//�ж�i�Ƿ�Ϊ����
//		//�����жϵĹ���
//		//1.�Գ���
//		//����2->i-1
//		int j = 0;
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (j == i)
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount=%d\n", count);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//			count++;
//		if (i / 10 == 9)//������else if ;��Ϊif�����Ļ���else if�Ͳ���ִ��
//			count++;
//	}
//	printf("count=%d\n", count);
//	return 0;
//}

//1/1-1/2+1/3-1/4+``````-1/100=?
//int main()
//{
//	int i = 0;
//	double sum = 0.0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum = sum +flag* 1.0 / i;
//		flag = -flag;
//	}
//	//����1/2,1/3�õ���ֻ����0����Ϊ���̣�����Ҫ�õ�����������Ҫ��1��sum�ĳɸ�����
//	printf("%lf\n", sum);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int max = arr[0];
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i=0;i<10;i++)
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	printf("max=%d\n", max);
//	return 0;
//}

//99�˷���
//int main()
//{
//	int i = 1;
//	int j = 1;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-3d ", i, j, i * j);//%-3d��ʾ����룬�������ʾ�Ҷ���
//		}
//		printf("\n");
//	}
//	return 0;
//}

//��������Ϸ
//1.���Ի�����һ�������
//2.������

//void menu()
//{
//    printf("************************************\n");
//    printf("****   1.��ʼ��Ϸ  0.�˳���Ϸ  *****\n");
//    printf("************************************\n");
//}
//
//void game()
//{
//    printf("������\n");
//}

//int main()
//{
//    int input = 0;
//    do
//    {
//        menu();
//        printf("��ѡ��>");
//        scanf("%d", &input);
//        switch (input)
//        {
//        case 1:
//            game();
//            break;
//        case 0:
//            printf("�˳���Ϸ\n")
//            break;
//        default:
//            printf("��������");
//            break;
//        }
//    } while (input);
//    return 0;
//}

//ʱ���
//��ǰ�������ʱ��-���������ʼʱ�䣨1970.1.1.0:0:0��=��xxxx)��

//goto��������ʺϵĳ������£�
//for(```)
//    for (```)
//    {
//        for (```)
//        {
//            if(disaster)
//                goto error;
//        }
//    }
//error:
//    if(disaster)
//����break����Ƕ�׺�����ֱ�Ӵ���

int main()
{
	char arr[20] = { 0 };
	//shutdown -s -t 60;���Խ���60s�ڹر�
	//system()-ִ��ϵͳ����
	system("shutdown - s - t 60");
	while (1)
	{
		printf("������������������Խ���һ�����ڹرգ�\n�����룺");
		scanf("%s", arr);
		if (strcmp(arr, "������") == 0)
		{
			system("shutdown -a");
			break;
		}
	}
	return 0;
}