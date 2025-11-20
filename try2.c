#include <stdio.h>

int main() {
    int numbers[5] = {1, 2, 3, 4, 5};  // 声明并初始化数组
    
    printf("数组元素:\n");
    for(int i = 0; i < 5; i++) {
        printf("numbers[%d] = %d\n", i, numbers[i]);
    }
    
    printf("\n数组大小: %zu bytes\n", sizeof(numbers));
    printf("元素个数: %zu\n", sizeof(numbers) / sizeof(numbers[0]));
    
    return 0;
}
