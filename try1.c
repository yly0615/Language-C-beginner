/*#include <stdio.h>

int main() 
{
    int num = 10;
    int *ptr;      // 声明一个整型指针
    ptr = &num;    // 将ptr指向num的地址
    
    printf("num的值: %d\n", num);
    printf("num的地址: %p\n", &num);
    printf("ptr存储的地址: %p\n", ptr);
    printf("通过ptr访问的值: %d\n", *ptr);
    
    return 0;
}*/
#include <stdio.h>

int main() {
    int a = 5, b = 10;
    int *p1 = &a, *p2 = &b;
    
    printf("初始值:\n");
    printf("a = %d, b = %d\n", a, b);
    printf("*p1 = %d, *p2 = %d\n", *p1, *p2);
    
    // 通过指针修改变量值
    *p1 = 20;
    *p2 = *p1 + 15;
    
    printf("\n修改后:\n");
    printf("a = %d, b = %d\n", a, b);
    printf("*p1 = %d, *p2 = %d\n", *p1, *p2);
    
    return 0;
}
