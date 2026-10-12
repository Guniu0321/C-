
#include<stdio.h>
int main()
{
//折纸次数
//度珠穆朗玛峰的高度是8844430mm，有个足够大的纸的厚度是0.1mm
//这多少次他可以折成珠穆朗玛峰的高度
	double height=0.1;
	int h = 88444430;
	int num = 0;
	while (height <= h)
	{
		height *= 2;
		num++;

	}
	printf("需要折纸%d次", num);
	return 0;
}
