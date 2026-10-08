#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	char a[100];
	printf("请输入你女朋友的名字：\n");//在末尾放上"\n"使打印出的换行
	scanf("%s", &a);
	printf("我最爱的女朋友名字是：%s\n", a);
	int b;
	printf("请输入您的年龄：\n");
	scanf("%d", &b);
	printf("您的年龄为：%d\n", b);
//键盘录入并求和】
	int num1;
	int num2;
	printf("请输入两个数的值：\n");
	scanf("%d %d", &num1, &num2);//利用参数一与输入内容一致的属性在两个%d间加空格使得输入的两个数字可以用空格分隔开

	printf("输入的两数之和为：%d", num1 + num2);

}