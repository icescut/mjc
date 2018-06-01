#include <stdio.h>

int main(void)
{
    int i, n;
    int cnt = 0;

    printf("n的值是：");
    scanf("%d", &n);

    for(i = 1; i <= n; ++i) {
        if (n % i == 0) {
            printf("%d\n", i);
            ++cnt;
        }
    }

    if (cnt != 0)
        printf("约数有%d个。\n", cnt);

    return 0;
}
