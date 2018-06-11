/*
 * 计算阶乘
 */
#include <stdio.h>

int factorial(int n)
{
    if (n > 0)
        return n * factorial(n - 1);
    else
        return 1;
}

int main(void)
{
    int     n;

    printf("请输入一个整数：");
    scanf("%d", &n);

    printf("%d的阶乘为%d。\n", n, factorial(n));
    return 0;
}
