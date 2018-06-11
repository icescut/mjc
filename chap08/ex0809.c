/*
 * 计算出现的行数
 */
#include <stdio.h>


int main(void)
{
    int     i, ch;
    int cnt = 0;

    while ((ch = getchar()) != EOF) {
        if (ch == '\n')
            cnt++;
    }

    printf("行数为%d\n", cnt);

    return 0;
}
