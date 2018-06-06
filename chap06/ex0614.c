/*
 * 确认拥有静态存储期的对象的默认的初始化
 */
#include <stdio.h>

double fx[5]; // 用0初始化

int main(void)
{
    int i;
    static double   sd[5];

    for (i = 0; i < 5; ++i)
        printf("fx[%d] = %f\n", i, fx[i]);

    for (i = 0; i < 5; ++i)
        printf("sd[%d] = %f\n", i, sd[i]);

    return 0;
}
