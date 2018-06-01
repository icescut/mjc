#include <stdio.h>

int main(void)
{
    int i, no;

    printf("正整数：");
    scanf("%d", &no);

    for(i = 2; i <= no; i += 2)
        printf("%d ", i);
    putchar('\n');

    return 0;
}
