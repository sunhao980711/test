#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
extern int Bdd(int x, int y);
int main()
{
	int a = 10;
	int b = 20;
	int arr[10] = { 0 };
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		arr[i] = i;
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	int c = Bdd(a, b);
	printf("%d", c);
	return 0;
}