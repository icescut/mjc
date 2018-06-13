/*
 * 计算两个整数的和与差
 */
#include <stdio.h>

void sum_diff(int n1, int n2, int *sum, int *diff)
{
    *sum = n1 + n2;
    *diff = (n1 > n2) ? n1 - n2 : n2 - n1;
}

int main()
{
    int na, nb;
    int wa, sa;
    printf("A : ");
    scanf("%d", &na);
    printf("B : ");
    scanf("%d", &nb);
    sum_diff(na, nb, &wa, &sa);
    printf("The sum is %d, the diff is %d\n", wa, sa);
    return 0;
}

