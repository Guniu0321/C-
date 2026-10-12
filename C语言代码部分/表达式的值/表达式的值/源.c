#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a;
	double x;
	double y;
	scanf("%d %lf %lf", &a, &x, &y);
	printf("%.6f", x + a % 3*(int)(x + y) % 2 / 4);

}