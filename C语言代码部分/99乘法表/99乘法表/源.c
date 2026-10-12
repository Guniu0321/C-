#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	for (int i = 1;i <= 9;i++)//外层循环控制行数
	{
		for (int j = 1;j <= i;j++)
		{
			printf("%d*%d=%d\t", i,j,i * j);//内循环控制每行打印的式子个数
			//为了实现几乘几的效果要用变量占位来打印式子。“\t”制表符让每个式子对齐
		}
		printf("\n");
		
	}
}