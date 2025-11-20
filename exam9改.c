#include<stdio.h>
int main()
{
    int a, b, c, max, min;
    printf("请输入三个整数：");
    scanf("%d %d %d", &a, &b, &c);
    
    // 先找出最大值
    max = a;
    if(b > max) max = b;
    if(c > max) max = c;
    
    // 再找出最小值
    min = a;
    if(b < min) min = b;
    if(c < min) min = c;
    
    printf("最大值：%d，最小值：%d\n", max, min);
    return 0;
}
