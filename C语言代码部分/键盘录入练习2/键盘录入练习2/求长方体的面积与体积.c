#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	float length;
	float broadth;
	float height;
	printf("请分别输入长方体的长宽高：");
	scanf("%f %f %f", &length, &broadth, &height);
	printf("长方体上面的面积是：%.2f\n", length*broadth);//保留小数位数是在占位符百分号后面加上".几"
	printf("长方体前面的面积是：%.2f\n", height* broadth);//利用printf语句进行计算时要把运算式子写在参数二的位置
	printf("长方体侧面的面积是：%.2f\n", length*height);
	printf("长方体的的体积是：%.2f", length*broadth*height);



}