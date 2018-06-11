/*
 * 将标准输入的数据复制到标准输出
 */
#include <stdio.h>

int main(void)
{
    int     ch;

    while((ch = getchar()) != EOF)
        putchar(ch);
    return 0;
}
