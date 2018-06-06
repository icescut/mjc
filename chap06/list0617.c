/*
 * 确认标识符的作用域
 */
#include <stdio.h>

int x = 75; // 文件作用域

void print_x(void)
{
    printf("x = %d\n", x);
}

int main(void)
{
    int i;
    int x = 999;

    print_x();
    printf("x = %d\n", x);

    for (i = 0; i < 5; ++i) {
        int x = i * 100;
        printf("x = %d\n", x);
    }

    printf("x = %d\n", x);

    return 0;
}
