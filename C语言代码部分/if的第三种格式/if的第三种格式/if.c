#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	//练习1 ：氪金额度对应vip等级
	int money;
	printf("您的充值金额为：");
	scanf("%d", &money);
	if (money >= 1 && money <= 99)
	{
		printf("尊贵的VIP1\n");
	}
	else if (money >=100 && money <= 499)
	{
		printf("尊贵的VIP2\n");
	}
	else if (money >= 500 && money <= 999)
	{
		printf("尊贵的VIP3\n");
	}
	else
	{
		printf("尊贵的至尊vip\n");
	}

}