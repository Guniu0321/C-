#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	//求1-100的和
	int sum = 0;
	for (int a = 1;a <= 100;a++)
	{
		sum = a + sum;
	}
	printf("1到100的和为:%d", sum); 
	//求1-100中奇数和偶数的和
	int sum2 = 0;
	int sum3 = 0;
	for (int b = 1; b <= 100;b += 2)
	{
		sum2 = sum2 + b;
	}
	printf("奇数和为：%d\n", sum2);
	for (int c = 2; c <= 100;c += 2)
	{
		sum3 = sum3 + c;
	}
	printf("偶数和为：%d\n", sum3);

}