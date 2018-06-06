/*
 * 确认对无符号整数执行算术运算不会发生溢出
 */
#include <stdio.h>

int main(void)
{
    unsigned short a = 60000;
    unsigned short b = 5536;
    unsigned short c = a + b;
    printf("%5d + %5d = %5d\n", a, b, c);
    b = 5537;
    c = a + b;
    printf("%5d + %5d = %5d\n", a, b, c);

    return 0;
}
