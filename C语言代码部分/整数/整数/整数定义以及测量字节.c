#include<stdio.h>
int main()
{
	//1 定义short,int,long,longlong四种数据类型
	short a = 10;//short 短整型，占用两个字节
	printf("%d\n", a);

	int b = 32179873;// int 整数，占用四个字节
	printf("%d\n", b);

	long c = 123414122L;//长整型，在windows中占用四个字节，在linux中 32位-4个字节 64位-8个字节
	//long类型定义时要在数字后面写一个l/L
	printf("%ld\n", c);

	//longlong类型  超长整形 8个字节
	long long d = 2918739811208LL;//赋值时在数字后附上LL
	printf("%lld\n", d);//在打印时要加上ll

	//2 利用sizeof测量每种数据占多少字节
	printf("%zu\n", sizeof(a));//%zu指的是把sizeof的测量结果直接打印，参数二的sizeof后括号i内放上要测量的数据
	printf("%zu\n", sizeof(b));//sizeof(变量名字/数据类型)
	printf("%zu\n", sizeof(c));
	printf("%zu\n", sizeof(d));
}