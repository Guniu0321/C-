#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	//给一个整数n，判断数据是否为2的幂次方
	int n;
	printf("请输入整数：\n");
	scanf("%d", &n); 
	int num = 0;
	// 结果是1--循环结束
	//结果无法被2整除也口语结束
	while (n > 1 && n % 2 == 0)//只要n能被2整除且n！=1就循环继续
	{
		n /= 2;
		num++;
	}
	if (n == 1)//现在循环中n不断除以2，如果是2的幂次方最后结果应该是1
	{
		printf("该数是2的%d次方\n", num);
	}
	else
		printf("该数不是2的幂次方");
}