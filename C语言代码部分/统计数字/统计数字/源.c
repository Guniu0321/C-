#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	/*键盘录入两个数字表示一个范围
	统计在这个范围中同时被6和8整除的数字个数*/
	int a;
	int b;
	int num = 0;
	printf("请输入范围：\n");
	scanf("%d %d", &a, &b);
	int max = a > b ? a : b;
	int min = a < b ? a : b;//利用三元运算符判断输入数据的最大与最小值
	for (int c = min;c <= max && c >= min;c++)//直接让c等于a，使得让这个输入数字以后能直接进入循环并统计相关数据
	{
		if (c % 8 == 0 && c % 6 == 0)
		{
			num++;
		}
	}
	printf("在输入范围内符合条件的数字个数为：%d\n", num);
}