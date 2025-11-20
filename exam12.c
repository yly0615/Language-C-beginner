#include<stdio.h>
int main()
/*{
	printf("输入一个三位正整数：");
	int a,b,c,num;
	scanf("%d",&num);
	if(num%1!=0||num<100||num>999)
	printf("输入无效");
	else
	{
		a=num/100;
	    b=(num-100*a)/10;
	    c=num-100*a-10*b;
	    if(a*a+b*b+c*c==num)
	    {
	    	printf("%d是水仙花数",num); 
		}
		else
		printf("%d不是水仙花数",num);
	}
    return 0;
}*/
{
	int a,b,c,num;
    a=num/100;
	b=(num-100*a)/10;
	c=num-100*a-10*b;
	num=100;
	while(num<=999)
	{
		if(a*a+b*b+c*c==num)
	    {
	    	printf("%d是水仙花数",num); 
		}
	}
