#include<stdio.h>
int main()
{
	printf("请输入三个正数作为三角形的三边：");
	float a,b,c;
	scanf("%f %f %f",&a,&b,&c);
	if((a<=0||b<=0||c<=0)||(a+b<=c||a+c<=b||b+c<=a))
	{
		printf("输入无效！");
	}
	else if(a==b&&a==c)
	{
		printf("等边三角形"); 
	}
	else if(a==b||b==c||a==c)
	{
		printf("等腰三角形"); 
	}
	else
	{
		printf("普通三角形");
	}
	return 0;
	}
