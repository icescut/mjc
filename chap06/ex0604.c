/*
 * 计算两个整数的平方差
 */
#include <stdio.h>

int sqr(int x)
{
    return x * x;
}

int pow4(int x)
{
    return sqr(sqr(x));
}

int main(void)
{
    int x;

    printf("整数x：");      scanf("%d", &x);

    printf("%d的四次幂是%d。\n", x, pow4(x));

    return 0;
}
