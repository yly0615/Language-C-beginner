#include<stdio.h>

int main()
{
    char ch;
    int letters = 0, digits = 0, spaces = 0, others = 0;
    
    printf("请输入一行字符（以回车结束）：");
    
    while((ch = getchar()) != '\n')
    {
        if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
        {
            letters++;
        }
        else if(ch >= '0' && ch <= '9')
        {
            digits++;
        }
        else if(ch == ' ')  // 只统计空格，不包括制表符等
        {
            spaces++;
        }
        else
        {
            others++;
        }
    }
    
    printf("\n统计结果：\n");
    printf("英文字母：%d\n", letters);
    printf("数字：%d\n", digits);
    printf("空格：%d\n", spaces);
    printf("其他字符：%d\n", others);
    
    return 0;
}
