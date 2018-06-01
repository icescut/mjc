#include <stdio.h>

int main(void)
{
    int i, j, len;

    puts("让我们来画一个向下的金字塔。");
    printf("金字塔有几层：");     scanf("%d", &len);

    for(i = len; i > 0; --i) {
        for(j = 0; j < len - i; ++j)
            putchar(' ');
        for(j = (i - 1) * 2 + 1; j > 0; --j)
            printf("%d", (len - i + 1) % 10);
        putchar('\n');
    }

    return 0;
}
