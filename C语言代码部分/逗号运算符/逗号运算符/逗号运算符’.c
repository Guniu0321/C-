#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int i;
	printf("%d\n", (i = 3, i++, ++i, i + 5)); 
	printf("主持人给出的数字是：");
	int b;
	scanf("%d", &b);
	b = b >= 0 ? b : -b;
	//利用三元运算符取输入数字的绝对值，注意再用b去接受三元运算符的值

	printf("%d\n", (b%=3,b*10));//b%=3既是b=b%3   

}