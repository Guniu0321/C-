#include<stdio.h>
int main()
{
	//键盘录入的基本使用
	int a;//定义一个变量（不赋值）来接受键盘输入的数据

	scanf("%d\n", &a);//用scanf时不要忘记变量前加上“&”
	printf("%d\n", a);
	return 0;
}