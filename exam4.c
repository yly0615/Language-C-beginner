#include<stdio.h>
int main()
{
	float a,b;
	printf("输入两个数：");
	scanf("%f%f",&a,&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("交换后：a=%.2f,b=%.2f",a,b);
	return 0;
}
