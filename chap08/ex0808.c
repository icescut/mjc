/*
 * 求两个整数x和y的最大公约数
 */
#include <stdio.h>

int gcd(int x, int y)
{
    int z;
    if (x > y) {
        if (z = x % y) {
            return gcd(y, z);
        } else {
            return y;
        }
    } else {
        if (z = y % x) {
            return gcd(x, z);
        } else {
            return x;
        }
    }
}

int main(void)
{
    int     x, y;

    printf("x : ");
    scanf("%d", &x);
    printf("y : ");
    scanf("%d", &y);

    printf("%d和%d的最大公约数为%d。\n", x, y, gcd(x, y));
    return 0;
}
