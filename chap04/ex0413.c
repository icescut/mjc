#include <stdio.h>

int main(void)
{
    int i, no, sum = 0;

    printf("n的值是：");
    scanf("%d", &no);

    for(i = 1; i <= no; ++i)
        sum += i;
    printf("1到%d的和为%d。\n", no, sum);

    return 0;
}
