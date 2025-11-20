#include<stdio.h>
int main()
{
	int a,b,c;
	printf("水仙花数有：");
	for(int i=100;i<=999;i++)
	{
		a=i/100;
	    b=(i-100*a)/10;
	    c=i-100*a-10*b;
	    if(a*a*a+b*b*b+c*c*c==i)
	    printf("%d ",i);
	    
	}
	return 0; 
}
