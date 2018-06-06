/*
 * 确认拥有静态存储期的对象的默认的初始化
 */
#include <stdio.h>

int fx; // 用0初始化

int main(void)
{
    int i;
    static int      si;
    static double   sd;
    static int      sa[5];

    printf("fx = %d\n", fx);
    printf("si = %d\n", si);
    printf("sd = %f\n", sd);

    for (i = 0; i < 5; ++i)
        printf("sa[%d] = %d\n", i, sa[i]);

    return 0;
}
