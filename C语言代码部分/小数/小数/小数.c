#include<stdio.h>
int main()
{
	/*1 定义float，double数据类型变量。
	float类型保留小数点后两位
	double类型保留后三位*/
	float a = 1.88F;//赋值float类型要在数字后面加上F
	printf("%.2f\n", a);

	double b = 12321.12314;
	printf("%.3lf\n", b);
	//2 利用sizeof测量两个数据类型长度
	printf("%zu\n", sizeof(a));
	printf("%zu\n", sizeof(b));
	//3 小数类型无法与unsigned结合





	
}