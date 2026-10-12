#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	//判断一个数是不是回文数（正着和反着一样的数字ep：121）
	int num;
	printf("请输入数字：\n");
	scanf("%d", &num);
	int original = num;//再输入之后再用一个变量存储输入的num的初始值
	int rev = 0;
	while (num != 0)
	{
		int result = num % 10;
		num /= 10;
		rev = rev * 10 + result;
		
	}

	if (rev == original)
	{
		printf("该数字是回文数");
	}
	else
	{
		printf("该数字不是回文数");
	}

}