#include<stdio.h>
#include<stdlib.h>  // 为了使用abs函数

int main()
{
    int n, i, j, k;
    
    printf("请输入中间行的字母数（例如输入4得到ABCDCBA）：");
    scanf("%d", &n);
    
    // 打印上半部分（包括中间行）
    for(i = 1; i <= n; i++)
    {
        // 打印前导空格
        for(j = 1; j <= n - i; j++)
        {
            printf(" ");
        }
        
        // 打印递增字母
        for(k = 0; k < i; k++)
        {
            printf("%c", 'A' + k);
        }
        
        // 打印递减字母
        for(k = i - 2; k >= 0; k--)
        {
            printf("%c", 'A' + k);
        }
        
        printf("\n");
    }
    
    // 打印下半部分
    for(i = n - 1; i >= 1; i--)
    {
        // 打印前导空格
        for(j = 1; j <= n - i; j++)
        {
            printf(" ");
        }
        
        // 打印递增字母
        for(k = 0; k < i; k++)
        {
            printf("%c", 'A' + k);
        }
        
        // 打印递减字母
        for(k = i - 2; k >= 0; k--)
        {
            printf("%c", 'A' + k);
        }
        
        printf("\n");
    }
    
    return 0;
}
