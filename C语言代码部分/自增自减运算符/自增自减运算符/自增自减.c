#include<stdio.h>
int main()
{
	printf("项目1\n");
	int a = 10;
	int b = a++;//b是用的a的初始值10（先用后加）
	int c = ++a;//在被b用完后a已经加1变成11了。此时c用的a的初始值，又前加加，所以a先加后用变成12
	printf("%d\n%d\n%d\n", a, b, c);
	printf("项目2\n");
	int i = 10;
	int j = 5;
	int k = i++ + ++i - --j - j--;
	//++i与--j先运行，i = 11，j=4，载参与运算
	printf("%d\n", k);
	printf("项目3\n");
	 

}