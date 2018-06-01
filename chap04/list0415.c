#include <stdio.h>

int main(void)
{
    int i, no;

    printf("正整数：");
    scanf("%d", &no);

    for(i = 1; i <= no; ++i)
        if (no % i == 0)
            printf("%d ", i);
    putchar('\n');

    return 0;
}
