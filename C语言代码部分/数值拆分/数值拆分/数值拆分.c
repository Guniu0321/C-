#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a;
	printf("请输入您的数字：\n");
	scanf("%d", &a);//scanf输入内容与参数一保持一致
	printf("数字的百位是：%d\n", a / 100);
	int shi = a / 10;//三位数除以10，剩下一个两位数，这个两位数的个位就是原来三位数的十位，所以对前一个结果再取10的余数即可
	printf("数字的十位是：%d\n", shi % 10);
	printf("数字的个位是：%d\n", a % 10);
}