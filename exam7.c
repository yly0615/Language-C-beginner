#include<stdio.h>
int main()
{
	printf("请输入两个数和一个运算符(a+b)：");
	float a,b,sum;
    char op;
	scanf("%f %c %f",&a,&op,&b);
    switch(op){
	case '+':
	sum=a+b;
	printf("%.2f+%.2f=%.2f",a,b,sum);
	break;
	case '-':
	sum=a-b;
	printf("%.2f-%.2f=%.2f",a,b,sum);
	break;
	case '*':
	sum=a*b;
	printf("%.2f*%.2f=%.2f",a,b,sum);
	break;
	case '/':
	if(b==0)
	{
		printf("错误");
	}
	else
	{
		sum=a/b;
		printf("%.2f/%.2f=%.2f",a,b,sum);
	}
	break;
	default:
		printf("无效");
		break;
	} 
	return 0;
}
