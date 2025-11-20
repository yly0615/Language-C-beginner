/*#include<stdio.h>
int main()
{
	printf("请输入一个正整数:");
	int n,a=1,sum=1;
	scanf("%d",&n);
	while(a<=n)
	{
		sum*=a;
		a++;
	}
	printf("%d",sum);
	return 0;
	 
}*/
/*#include<stdio.h>
int main()
{
    printf("请输入一个正整数:");
    int n, a = 1, sum = 1;
    scanf("%d", &n);
    
    if(n < 0) {
        printf("错误：请输入非负整数！");
        return 1;
    }
    
    while(a <= n)
    {
        sum *= a;
        a++;
    }
    printf("%d的阶乘是：%d", n, sum);
    return 0;
}*/
#include<stdio.h>
int main()
{
    printf("请输入一个正整数:");
    int n, i, factorial = 1;
    scanf("%d", &n);
    
    for(i = 1; i <= n; i++) {
        factorial *= i;
    }
    
    printf("%d! = %d", n, factorial);
    return 0;
}
