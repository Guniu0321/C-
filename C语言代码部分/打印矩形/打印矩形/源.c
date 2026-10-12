#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	for (int i = 1;i <= 3; i++)//外循环保证打印行数
	{
		for (int j = 1;j <= 5;j++)
		{
			printf("*");//内循环保证每行打印五个*
		}
		printf("\n");//内循环进行完之后一行有五个星，此代码表示换行，下一次外循环就在下一行打印五个*
	}
	//打印7行8列的*
	for (int a=1;a<=7;a++)
	{
		for (int b = 1;b <= 8;b++)
		{
			printf("*");
		}
		printf("\n");
	}
	//打印五行五列的三角形
	for (int c = 1;c <= 5;c++)
	{
		for (int d = c;d <= 5;d++)//让d等于c，c不断增加内循环的进行次数减少进而打印的*也减少
		{
			printf("*");
		}
		printf("\n");
	}
}