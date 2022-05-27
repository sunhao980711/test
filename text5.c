#define _CRT_SECURE_NO_WARNINGS 1
//分支语句
//if
//switch
//循环语句
//while
//for
//do while
#include <stdio.h>
//int main()
//{
//	int age = 20;
//	if (age > 18)
//		printf("成年人\n");
//	else
//		printf("未成年人\n");
//	return 0;
//}

//int main()
//{
//	int age = 10;
//	if (age < 18)
//	{
//		printf("未成年\n");
//		printf("不能谈恋爱\n");
//
//	}//如果条件成立，要执行多条语句，应使用代码块，{ }就是一个代码块
//	else if (age >= 18 && age < 28)
//		printf("青年\n");
//	else if (age >= 28 && age < 50)
//		printf("壮年\n");
//	else if (age >= 50 && age < 90)
//		printf("老年\n");
//	else
//		printf("耄耋\n");
//	return 0;
//}//else与离他最近的未匹配if匹配

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
//		printf("星期一");
//		break;
//	case 2:
//		printf("星期二");
//		break;
//	case 3:
//		printf("星期三");
//		break;
//	case 4:
//		printf("星期四");
//		break;
//	case 5:
//		printf("星期五");
//		break;
//	case 6:
//		printf("星期六");
//		break;
//	case 7:
//		printf("星期天");
//		break;
//	default:
//		printf("输入错误\n");
//		break;//break只跳出当前代码块
//	}
//	return 0;
//}switch语句中的default子句可以放在任意位置；case后的表达式只能是整形常量表达式；case后必须加break，不然会一直进行下去

//int main()
//{
//	int a = 0;
//	while (a < 11)
//	{
//		a++;
//		if (a == 5)
//			continue;//continue 跳过当前循环continue后面任务，直接跳到循环的判定部分，即a==5的printf不输出
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
//	printf("请输入密码：>");
//	scanf("%s", password);//输入密码，并存放在password数组中
//	while ((ch = getchar() != '\n'))
//	{
//
//	}
//	printf("请确认（Y/N）：>");
//	ret = getchar();
//	if (ret == 'Y')
//		printf("确认成功\n");
//	else
//		printf("放弃确认\n");
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

//for循环
//for(表达式1：表达式2；表达式3)
//表达式1 为初始化部分，用于初始化循环变量，表达式2为条件判断部分，用于判断循环时候终止；表达式3为调整部分，用于循环条件调整

//int main()
//{
//	int i = 0;
//	for (i = 1; i < 11; i++)//初始化  ；判断    ；调整
//	{
//		if (i == 5)
//			break;//1 2 3 4 与while语句中break作用一样，跳出循环
//		printf("%d\n", i);
//	}
//	return 0;
//}

//for循环的初始化、判断、调整都可以省略，但是：for循环的判断部分如果被省略，那判断条件就是恒为真。

//int main()
//{
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0; k = 0; i++, k++)
//		k++;
//	return 0;//k=0为判断语句位置，但是给的是赋值，0为假，循环不进入；若非0则为死循环
//}

//do while 循环
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

//例题n!
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

//例题1！+2！+3！
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	for(n = 1; n <= 3; n++)
//	{
//		ret = 1;
//		for(i = 1;i <= n; i++)//for里面套for，每次都从i=1开始
//		{
//			ret = ret * i;
//		}
//		sum = sum + ret;
//	}
//	printf("sum=%d", sum);
//	return 0;
//}

#include <string.h>//strlen、strcmp、字符串的头文件
#include <Windows.h>//Sleep的头文件
#include <stdlib.h>//system的头文件
//int main()
//{
//	char arr1[] = "welcome to bit!!!!!!";//字符串和字符数组要考虑最后位的\0
//	char arr2[] = "####################";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	while(left<=right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		//休息一秒
//		Sleep(1000);//1000=1000ms=1s
//		system("cls");//执行系统命令的一个函数-cls-清空屏幕
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };//字符串数组
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入您的密码：");
//		scanf("%s", password);
//		if (strcmp(password, "123456") == 0)//  == 不能用来比较两个字符串是否相等，应该用一个库函数-strcmp
//		{
//			printf("登录成功");
//			break;
//		}
//	}
//	if (i == 3)
//		printf("登录失败，已锁定。");
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

//求两个数的最大公约数
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

//判断1000年到2000年哪些是闰年
//int main()
//{
//	int year = 0;
//	int count = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		//判断year是否为闰年
//		//1.能被4整除并且不能被100整除是闰年
//		//2.能被400整除是闰年
//	/*	if (year % 4 == 0 && year % 100 != 0)
//		{
//			printf("%d ", year);
//			count++;
//		}
//		else if (year % 400 == 0)
//		{
//			printf("%d ", year);
//			count++;
//		}*///第一种写法
//
//		if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
//		{
//			printf("%d ", year);
//			count++;
//		}//第二种写法
//
//	}
//	printf("\n年数=%d\n", count);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//判断i是否为素数
//		//素数判断的规则
//		//1.试除法
//		//产生2->i-1
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
//		if (i / 10 == 9)//不能用else if ;因为if成立的话，else if就不会执行
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
//	//若是1/2,1/3得到的只能是0，因为是商，所以要得到分数，必须要将1和sum改成浮点数
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

//99乘法表
//int main()
//{
//	int i = 1;
//	int j = 1;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-3d ", i, j, i * j);//%-3d表示左对齐，正数则表示右对齐
//		}
//		printf("\n");
//	}
//	return 0;
//}

//猜数字游戏
//1.电脑会生成一个随机数
//2.猜数字

//void menu()
//{
//    printf("************************************\n");
//    printf("****   1.开始游戏  0.退出游戏  *****\n");
//    printf("************************************\n");
//}
//
//void game()
//{
//    printf("猜数字\n");
//}

//int main()
//{
//    int input = 0;
//    do
//    {
//        menu();
//        printf("请选择：>");
//        scanf("%d", &input);
//        switch (input)
//        {
//        case 1:
//            game();
//            break;
//        case 0:
//            printf("退出游戏\n")
//            break;
//        default:
//            printf("输入有误");
//            break;
//        }
//    } while (input);
//    return 0;
//}

//时间戳
//当前计算机的时间-计算机的起始时间（1970.1.1.0:0:0）=（xxxx)秒

//goto语句真正适合的场景如下：
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
//无需break跳过嵌套函数，直接处理。

int main()
{
	char arr[20] = { 0 };
	//shutdown -s -t 60;电脑将在60s内关闭
	//system()-执行系统命令
	system("shutdown - s - t 60");
	while (1)
	{
		printf("请输入你是猪，否则电脑将在一分钟内关闭，\n请输入：");
		scanf("%s", arr);
		if (strcmp(arr, "你是猪") == 0)
		{
			system("shutdown -a");
			break;
		}
	}
	return 0;
}