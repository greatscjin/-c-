//华氏度转化为摄氏温度
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main(void)
{
	double C,F;
	printf("输入一摄氏温度F=");
	scanf_s("%lf", &F);
	C = (F - 32) * 5 / 9;
	printf("SO C=%F", C);
}