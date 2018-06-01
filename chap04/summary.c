#include <stdio.h>

int main(void)
{
    int i, j;
    int x, y, z;

    do {
        printf("0-100的整数值。");
        scanf("%d", &x);
    } while (x < 0 || x > 100);

    y = z = x;

    while (y >= 0)
        printf("%d %d\n", y--, ++z);

    printf("宽和高为整数面积为%d的长方形的边长是：\n",x);

    for (i = 1; i < x; ++i) {
        if (i * i > x) break;
        if (x % i != 0) continue;
        printf("%d x %d\n", i, x / i);
    }

    puts("5行7列的星号：");

    for (i = 1; i <= 5; ++i) {
        for (j = 1; j <= 7; ++j)
            putchar('*');
        putchar('\n');
    }

    return 0;
}
