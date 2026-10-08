
#include<stdio.h>
int main()
{
	int a;//定义一个变量（不赋值）来接受键盘录入数据
	printf("请输入一个整数:");
	scanf("%d", &a);//变量前不要忘记“&”、
	printf("变量a的值为：");
	printf("%d\n", a);
	return 0;
}