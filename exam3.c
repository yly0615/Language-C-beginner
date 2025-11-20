#include<stdio.h>
int main()
{
	printf("输入一个四位整数：");
	int num;
	scanf("%d",&num);
	int a=num/1000;
	int b=(num%1000)/100;
	int c=(num%100)/10;
	int d=num%10;
	int num1=d*1000+c*100+b*10+a;
	printf("%d",num1);
	return 0;
}

