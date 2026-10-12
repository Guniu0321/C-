#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	//给定整数n，获取所有小于n的质数的数量
	//质数：只能被1和其本身整除
	printf("请输入数字\n");
	int n;
	int num = 0;
	

	scanf("%d", &n);
	for (int i = 1;i <= n;i++)//外循环用来取数字
	{
		int count = 0;//统计n可以被几个数字整除，放在内循环前面可以保证统计每个数字因数都从0 开始
		for (int j = 1;j <= i;j++)//定义变量j为因数从一开始不断提高
		{
			if (i % j == 0)
			{
				count++;
			}
		}
		if (count == 2)//只有两个因数的数字是质数，放在内循环外面是为了统计count的在内循环的总个数
		{
			num++;
		}
	}
	printf("一共有%d个质数\n", num);

}