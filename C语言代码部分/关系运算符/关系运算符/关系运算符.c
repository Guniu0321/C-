#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	// 1 判断一个数是否为偶数
	int a;
	printf("请输入数字：\n");
	scanf("%d", &a);
	printf("%d",a % 2 == 0);//变量对2取余，余数为零即为偶数(真，打印出来的是1）
	//判断真假的结果是数字0（假）1（真），所以打印要用%d占位
	//判断银行卡余额是否足够
	int price;
	int money;
	scanf("%d %d", &price, &money);
	printf("%d\n", price <= money);//价格小于剩下的前钱才够





}