#include<stdio.h>
int main()
{
	int x = 10;
	int y = 20;
	int p;
	p = product(x, y);
	printf("the product is:%d", p);
	return 0;

}
int product(int a, int b)
{
	int c;
	c = a * b;
	return c;
}
