//变量课堂任务
#include<stdio.h>
int main()
{
	int a;
	a = 10;
	printf("%d\n",a);
	int b = 20;
	int e = a+b;//用一个新的变量存储a+b的结果
	printf("a+b的结果是：%d\n", e);

	//用一个变量表示微信余额
	/*需求：初始微信有100
	* 收到了一个2元红包
	*/
	int money;
	money = 100;
	money += 2;                                                                                       
	printf("我微信余额为：%d\n", money);
	return 0;


}