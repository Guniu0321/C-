#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
//练习：根据月份输出季节
	int mon;
	printf("请输入月份\n");
	scanf("%d", &mon);
	switch (mon) {
	case 12://利用case穿透，没有break的话case就会一直往下穿，例如输入12 他会一直传到case1--printf 
	case 1:
	case 2:
		printf("冬季\n");
		break;
	case 3:
	case 4:
	case 5:
		printf("春季");
	case 6: 
	case 7:
	case 8:
		printf("夏季");
		break;
	case 9:
	case 10:
	case 11:
		printf("秋季");
		break;
	default:
		printf("没有这个月份");
		break;


	
		

		

	}
  
	
}