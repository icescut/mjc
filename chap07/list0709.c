/*
 * 表示浮点型变量的值
 */
#include <stdio.h>

int main(void)
{
    float a         = 123456789012345678901234567890.0;
    double b        = 123456789012345678901234567890.0;
    long double c   = 123456789012345678901234567890.0;

    printf("a = %f\n", a);
    printf("b = %f\n", b);
    // printf("c = %lf\n", c);
    printf("c = %Lf\n", c);

    return 0;
}
