/*
 * 计算从n个不同整数中取出r个整数的组合数
 */
#include <stdio.h>

int combination(int n, int r)
{
    if (r == 0 || r == n)
        return 1;
    else if (r == 1)
        return n;
    else
        return combination(n-1, r-1) + combination(n-1, r);
}

int main(void)
{
    printf("从5个整数中取3个整数的组合数为%d\n", combination(5, 3));
    return 0;
}
