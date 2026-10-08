#include<stdio.h>
int main()
{
	  //强制转化
	/*错误代码改正：
	short a = 10;
	short b = 20;
	short result = a + b;*/
	//错误1 ：隐式转化规则：short char在运算时自动转成int类型
	//正确代码：
	short a = 10;
	short b = 20;
	
	short result = (short)(a + b);//short要放在a与b相加式子的前面否则单写一个（short）a或者（short）b都是只把二者其一强制转化

	printf("%zu\n", sizeof(result));//sizeof--测量数据  大小，要用%zu占位





} 