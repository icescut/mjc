#include <stdio.h>

int sumup(int n)
{
    int sum = 0;
    while (n > 0)
        sum += n--;

    return sum;
}

int main(void)
{
    int n1;

    printf("整数：");      scanf("%d", &n1);

    printf("1到%d之间的和是%d。\n", n1, sumup(n1));

    return 0;
}
