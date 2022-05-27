#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d", &a, &b);
//	c = a + b;
//	printf("sum=%d\n", c);
//	return 0;
//}

//int main()
//{
//	//const-常变量
//	//const修饰的常变量，不是表示常量，而是不能变的变量
//	const int num = 4;
//	int num = 4;
//	printf("%d\n", num);
//	return 0;
//}

//define 定义的标识符常量
//#define MAX 10 //MAX为常量
//int main()
//{
//	int arr[MAX] = { 0 };
//	printf("%d\n", MAX);
//	return 0;
//}

//枚举常量
//枚举-一一列举
enum Sex
{
	MALE,
	FEMALE,
	SECRET
};
//MALE,FEMALE,SECRET-枚举常量
//int main()
//{
//	printf("%d\n", MALE);//0
//	printf("%d\n", FEMALE);//1
//	printf("%d\n", SECRET);//2
//	return 0;
//}

//char字符串类型
//"abcdef"
//"hello bit"
//""空字符串

//int main()
//{
//	char arr1[] = "abc";//数组
//	//"abc" -- 'a','b','c','\0' -- '\0'字符串的结束标志，字符串结束后会自动加‘\0’，不需要输入
//	char arr2[] = { 'a','b','c',0};//''代表字符，“”代表字符串
//	//'a','b','c',后面加0或‘\0’都可以，字符结束需要输入
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	return 0;
//}

//数据在计算机上存储的时候，存储的是2进制
//#av$
//a-97
//A-65
//ASCII 编码

//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c',0 };
//	printf("%d\n", strlen(arr1));//strlen-计算字符串的长度
//	printf("%d\n", strlen(arr2));
//	return 0;
//}

//转义字符   \＋  为转义字符
//int main()
//{
//	printf("%d\n", strlen("c:\test\32\test.c"));//13  \t为转义字符，占一个长度，\32也为转义字符，占一个长度
//	return 0;
//}

//int main()
//{
//	//printf("%d\n",strlen("c:\test\32\test.c"));
//	printf("%c\n", '\32');
//	//\32--32是2个8进制数字                             \ddd  表示1-3个八进制的数字，如\130       \xdd表示2个十六进制数字，如\x30
//	//32作为8进制代表的那个十进制数字，作为ASCII码值，对应的字符
//	//32-->10进制26->作为ASCII码值代表的字符
//	return 0;
//}

//选择语句
//int main()
//{
//	int input = 0;
//	printf("加入比特\n");
//	printf("你要好好学习吗？（1/0）>:");
//	scanf("%d", &input);
//	if (input == 1)
//		printf("好offer\n");
//	else
//		printf("卖红薯\n");
//	return 0;
//}

//int main()
//{
//	int line = 0;
//	printf("加入比特\n");
//	while (line < 10000)
//	{
//		printf("敲一行代码：%d\n", line);
//		line++;
//	}
//	if (line >= 10000)
//		printf("好offer\n");
//	return 0;
//}

//函数
//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}
//
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	int sum = 0;
//	sum = Add(num1, num2);
//	printf("sum=%d\n", sum);
//	return 0;
//}

//int main()
//{
//	//int a=1;
//	//int b=2;
//	//int c=3;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };//定义一个存放10个整数数字的数组,,数组[]里的数只能用常量标注，不能用变量
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d\n", arr[i]);
//		i++;
//	}
//	//printf("%d\n", arr[4]);//数组内编号为4的数，即5
//	//char ch[20];//定义一个存放20个字符串的数组
//	//float arr2[5];//定义一个存放5个小数数字的数组
//	return 0;
//}

//int main()
//{
//	//移（2进制）位操作符
//	//<<左移
//	//>>右移
//	int a = 1;
//	//整型1占4个字节-32bit位
//	//00000000000000000000000000000001
//	int b = a << 2;//把a左移2个字节 00000000000000000000000000000100
//	printf("%d\n", b);
//	return 0;
//}

//int main()
//{
//	//(2进制)位操作
//	//& 按位与
//	//| 按位或
//	//^ 按位异或
//	//int a=3;
//	//int b=5;
//	//int c=a&b;
//	int a = 3;
//	int b = 5;
//	int c = a ^ b;//异或
//	//异或计算规律：
//	//对应二进制位相同，则为0
//	//对应二进制位相异，则为1
//	//011   3
//	//101   5
//	//110   6
//	printf("%d\n", c);
//		return 0;
//}

//单目操作符
//！    逻辑反操作
//-     负值
//+     正值
//&     取地址
//sizeof 操作数的类型长度
//~     对一个数的二进制按位取反
//--    前置、后置
//++    
