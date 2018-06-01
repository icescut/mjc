#include <stdio.h>

int main(void)
{
    int i, no;
    int p = 0;

    printf("正整数：");
    scanf("%d", &no);

    for(i = 1; i <= no; ++i)
        printf("%d", p = (++p) % 10);
    
    putchar('\n');

    return 0;
}
