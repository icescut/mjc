#include <stdio.h>

int main(void)
{
    int i, no;

    printf("正整数：");
    scanf("%d", &no);

    for(i = 1; i <= no; ++i)
        putchar('*');
    putchar('\n');

    return 0;
}
