#include <stdio.h>

int main(void)
{
    int i, n;
    int cnt = 0;

    printf("n的值是：");
    scanf("%d", &n);

    for(i = 1; i <= n; ++i) {
        putchar('*');
        if (++cnt == 5) {
            cnt = 0;
            putchar('\n');
        }
    }

    if (cnt != 0)
        putchar('\n');

    return 0;
}
