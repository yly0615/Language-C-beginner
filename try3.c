#include <stdio.h>

#define SIZE 5

int main() {
    int arr[SIZE];
    
    printf("请输入%d个整数:\n", SIZE);
    for(int i = 0; i < SIZE; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
    
    printf("\n您输入的数组是:\n");
    for(int i = 0; i < SIZE; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    // 计算数组元素之和
    int sum = 0;
    for(int i = 0; i < SIZE; i++) {
        sum += arr[i];
    }
    printf("数组元素之和: %d\n", sum);
    
    return 0;
}
