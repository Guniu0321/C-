#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	//在1-100之间找到第一个可以被3和5整除的数字
	int num=1;
	while (num >= 1 && num <= 100)
	{
		num++;
		if (num % 5 == 0 && num % 3 == 0)
		{
			printf("1-100内第一个被3和5整除的数字是：%d\n", num);
			break;
		}
		 
	}
	//continue练习
	//一个人买了五个苹果吃到第三个发现有虫子不吃了直接吃下一个
	int a = 5;
	for (a = 5;a >= 1;a--)
	{
		if (a == 3)
		{
			printf("苹果里有虫子不吃了\n");
			continue;
		}
		
		
			printf("第%d个苹果真好吃\n", a);
		
	}

}