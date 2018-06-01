#include <stdio.h>

int main(void)
{
    int no, no_save;
    char ch1 = '+', ch2 = '-';
    char c = ch1;

    printf("正整数：");
    scanf("%d", &no);

    no_save = no;
    
    while(no-- > 0) {
        putchar(c);

        c = (c == ch1) ? ch2 : ch1;
    }

    if (no_save >= 1)
        putchar('\n');

    return 0;
}
