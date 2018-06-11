/*
 * 不使用递归的方式来实现factorial
 */
#include <stdio.h>

int factorial(int n)
{
    int  res = 1;
    while(n) {
        res *= n--;
    }
}

int main(void)
{
    int     n;

    printf("请输入一个整数：");
    scanf("%d", &n);

    printf("%d的阶乘为%d。\n", n, factorial(n));
    return 0;
}
