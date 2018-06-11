/*
 * 将字符串存储在数组中并显示
 */
#include <stdio.h>

int main(void)
{
    char str[4];

    str[0] = 'A';
    str[1] = 'B';
    str[2] = 'C';
    str[3] = '\0';

    printf("字符串str为\"%s\"。\n", str);
    return 0;
}
