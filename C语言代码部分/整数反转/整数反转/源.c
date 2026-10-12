#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	//整数反转例如原先数字是123，反转之后变成321
	printf("请输入数字：\n");
	int num;
	int revolve = 0;
	scanf("%d", &num);
	while (num != 0)
	{
		int result = num % 10;//每次循环一次num就对十取余剩下最后一个数字，用来取数字
		num /= 10;//每次取有个数字num都要/10来减一位，用来让num最后有个数字改变随后继续取得
		revolve = revolve * 10 + result;
		//每次取完后先去出来的就×10进一位。再加上后来被取出来的
		

	}
	
	
	printf("%d\n", revolve);
}