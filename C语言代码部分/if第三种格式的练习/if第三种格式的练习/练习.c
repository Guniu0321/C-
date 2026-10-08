#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
//练习：以等级公布分数
//A(85~100)
//B(70~84)
//C(60~69)
//D(60以下)
	int score;
	printf("你的分数是：");
	scanf("%d", &score);
	if (score >= 0 && score <= 100)//只有分数正常才能进行判断
	{
		if (score < 60)
		{
			printf("你的成绩为：D");
		}
		else if (score >= 60 && score <= 69)
		{
			printf("你的成绩为C");
		}
		else if (score >= 70 && score <= 84)
		{
			printf("你的成绩为B");
		}
		else
		{
			printf("你的成绩是A");
		}
	}
	else
	{
		printf("分数异常");
	}

}
