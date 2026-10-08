#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	double a;
	printf("请输入体温：");
	scanf("%lf", &a);
	if (a > 37.5)
	{
		printf("体温过高\n");
	}
	//练习：游戏人物的血条
	//需求：1 初始最大生命为200，受到八十伤害就扣80滴血，技能回复一百滴血
	int max = 200;
	int rec = 100;
	int wou = 80;
	max = max - wou + rec;
	if (max > 200)
	{
		printf("当前血量为%d\n", max = 200);
	}


}