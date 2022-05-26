#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
//int main()
//{
//	int a = 0;
//    for (a = 1; a <= 100; a++)
//	{
//		printf("%d ", a);
//	}
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int sum = 0;
//	int n = 0;
//	int ret = 1;
//	scanf("%d", &n);
//	for ( i = 1; i <=n; i++)
//	{
//		int j = 1;
//		ret = 1;
//		for ( j = 1; j <=i; j++)
//		{
//			ret *= j;
//		}
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

int Add(int x, int y)
{
	int z = 0;
	z = x + y;
	return z;
}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	Add(a, b);
//	printf("%d", a+b);
//	return 0;
//}

#include <assert.h>
char* my_strcpy(char* dest,const char* src)
{
	char* ret = dest;
	assert(dest != NULL);//断言  即如果括号内成立，不发生情况，若不成立，则报错，避免传递空指针
	assert(src != NULL);
	//把str指向的字符串拷贝到dest指向的空间
	while (*dest++ = *src++)
	{
		;
	}
	return ret;
}

int main()
{
	char arr1[] = "##############";
	char arr2[] = "bit";
	printf("%s\n", my_strcpy(arr1, arr2));
	return 0;
}

//int main()
//{
//	const int num = 10;
//	int n = 20;
//	int* const p = &num;
//	p = &n;//error     const放在指针变量的*右边时，修饰的是指针变量p本身，p不能被改变
//	const int* p = &num;
//	*p = 20;//error    const放在指针变量的*左边时，修饰的时*p,*p不能被改变
//	printf("%d\n", num);
//	return 0;
//}