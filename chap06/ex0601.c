#include <stdio.h>

int min2(int a, int b)
{
    if (a < b)
        return a;
    else
        return b;
}

int main(void)
{
    int n1, n2;

    puts("请输入两个整数。");
    printf("整数1：");      scanf("%d", &n1);
    printf("整数2：");      scanf("%d", &n2);

    printf("较小的整数的值是%d。\n", min2(n1, n2));

    return 0;
}
