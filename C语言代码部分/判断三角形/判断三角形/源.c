#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a;
	int b;
	int c;
	scanf("%d %d %d", &a, &b, &c);
	if (a + b > c && a + c > b && b + c > a)
	{
		if (a == b&&b==c&&a==c)
		{
			printf("regular triangle");
		}
		else if (a == b &&a != c||a == c &&a != b || c == b&&c != a)
		{
			printf("isosceles triangle ");
		}
		else if (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a)
		{
			printf("right triangle");
		}
		else
		{
			printf("triangle");
		}
	}
	else
	{
		printf("not a triangle");
	}
}