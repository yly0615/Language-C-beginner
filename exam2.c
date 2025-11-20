#include<stdio.h>
int main()
{
	printf("请输入三个整数：");
	int a,b,c;
	scanf("%d,%d,%d",&a,&b,&c);
	float average=(a+b+c)/3.0;
	printf("%.2f",average);
	return 0; 
}
