/*
 * 整数的平方和浮点数的平方（函数式宏）
 */
#include <stdio.h>

#define sqr(x) ((x) * (x))

int main(void)
{
    int     n;
    double  x;

    printf("请输入一个整数：");
    scanf("%d", &n);
    printf("该数的平方是%d。\n", sqr(n));

    printf("请输入一个实数：");
    scanf("%lf", &x);
    printf("该数的平方是%f。\n", sqr(x));
    return 0;
}
