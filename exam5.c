#include<stdio.h>
int main()
{
	printf("请输入三个整数：");
	int a,b,c,max,min;
	scanf("%d %d %d",&a,&b,&c);
	if(a>=b&&b>=c)
	{
		max=a,min=c;
	}
	else if(a>=c&&c>=b)
	{
		max=a,min=b;
	}
	else if(b>=a&&a>=c)
	{
		max=b,min=c;
	}
	else if(b>=c&&c>=a)
	{
		max=b,min=a;
	}
	else if(c>=b&&b>=a)
	{
		max=c,min=a;
	}
	else
	{
		max=c,min=b;
	}
	printf("%d,%d",max,min);
	return 0;
	
}
