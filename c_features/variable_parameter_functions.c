#include <stdarg.h>
#include <stdio.h>

int sum(int count, ...) {
    int total = 0;
    va_list args;
    
    // 初始化可变参数列表 使得获得第一个参数的地址
    va_start(args, count);

    // 依次获取参数
    for (int i = 0; i < count; i++) {
        total += va_arg(args, int); // 获取一个参数并累加
    }

    // 清理可变参数列表
    va_end(args);
    return total;
}

int main() {
    printf("Sum of 2, 3, 4 is: %d\n", sum(3, 2, 3, 4));
    return 0;
}
