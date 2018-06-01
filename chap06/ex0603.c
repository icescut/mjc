#include <stdio.h>

int cube(int x)
{
    return x * x * x;
}

int main(void)
{
    int x;

    printf("整数：");      scanf("%d", &x);

    printf("%d的立方是%d。\n", x, cube(x));

    return 0;
}
