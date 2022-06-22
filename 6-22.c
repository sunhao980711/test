#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//位段
struct s
{
	int a : 2;//2指只需2个比特位
	int b : 5;
	int c : 10;
	int d : 30;
};//一共是47个比特位——6个字节，但以int类型4个字节为单位，所以占8个字节
//int main()
//{
//	struct s arr;
//	printf("%d\n", sizeof(arr));
//	return 0;
//}//8

struct a
{
	char q : 3;
	char w : 4;
	char e : 5;
	char r : 4;
};

//枚举
enum Sex
{
	//枚举的可能取值,常量
	MALE,
	FEMALE,
	SECRECT
};
//int main()
//{
//	enum Sex s = MALE;
//	printf("%d %d %d", MALE, FEMALE, SECRECT);//0,1,2 int类型
//	return 0;
//}

//联合（共用体）
union un
{
	char c;
	int i;
};
int main()
{
	union un u;
	printf("%d\n", sizeof(u));//4个字节（至少是最大类型的大小），c和i共用一个空间
}