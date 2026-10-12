#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	for (int a = 1;a <= 5;a++)
	{
		printf("%d\n", a);
	}
	for (int b = 5;b>0&&b<=5;b--)//要保证b大于0不然会一直向负无穷打印
	{
		printf("%d\n", b);
	}
}