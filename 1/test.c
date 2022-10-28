//上课课本的page74
#include<stdio.h>
int main()
{
	int a = 3, b = 4, c = 5;
	printf("a=%d,b=%d,c=%d\n", a, b, c);
	double x = 1.2, y = 2.4, z = -3.6;
	printf("x=%.2f,y=%.3f,z=%.1f\n",x,y,z);
	printf("x+y=%.2f,y+z=%.2f,z+x=%.2f\n",x + y, y + z, z + x);
	char ch = 'a';
    printf("char='%c'or%d\n",ch,ch);
	return 0;
	//注意：  .n格式限制的是小数的位数



}