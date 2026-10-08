#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
//练习1：用一个整数表示原神级别
//如果元神为60级满级可以免费
//否则门外听声
	printf("你的原神级别是：");
	int level;
	scanf("%d", &level);
	if (level < 60)
	{
		printf("门外听听声得了\n");
	}
	else  
	{
		printf("尊贵的原神满级玩家请进入\n");

	}
//练习2需求：
//1 和一个人去看电影如果可以和那个人同一排并且挨着坐可以开心的看电影
//2 如果不是同一排或者没有挨着坐我会开心地打游戏
//3 电影票有两个变量分别表示第几排和座位号
	printf("输入你的具体座位：");
	int row1=4;
	int rowb;
	int num1=5;
	int numb;
	scanf("%d %d", &rowb, &numb);
	if (rowb == row1 && (num1 - numb == 1 || num1 - numb == -1))
	//有两种可能的结果时用||链接，两个表示一个整体用（）括起来

	{
		printf("爽看电影");
	}
	else
	{
		printf("游戏人生耍起嘛");
	}



}