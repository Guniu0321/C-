#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	/*有两个整数被除数dividend和除数divisor
	两束相除要求不用乘除取余运算
	返回dividend除以divisor得到的商和余数*/
	int dividend;
	int divisor;
	int num=0;
	printf("输入数字\n");
	scanf("%d %d", &dividend, &divisor);
	if (divisor != 0)
	{
		while (dividend >= divisor)
		{
			dividend -= divisor;
			num++;
		}
		printf("商是：%d\n,余数是：%d\n", num, dividend);
	}
	else
	{
		printf("除数不能为零");//一定要考虑特殊情况除数为0
	}

}