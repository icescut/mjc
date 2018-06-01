#include <stdio.h>

int main(void)
{
    int no, no_save;

    printf("正整数：");
    scanf("%d", &no);

    no_save = no;
    
    while(no-- > 0) {
        putchar('*');
    }

    if (no_save >= 1)
        putchar('\n');

    return 0;
}
