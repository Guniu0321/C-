#include<stdio.h>
int main()
{
	//三元运算符--关系表达式？表达式1：表达式2;
	int a = 10;
	int b = 20;
	int c = a > b ? a : b;//用一个变量接受三元表达式的成过
	printf("%d\n", c);
	//获取三个变量中的最大值
	int d = 40;
	printf("%d\n", c > d ? c : d);//c存储着a和b中的最大值，再拿c这个临时最大值与d比较即可


}