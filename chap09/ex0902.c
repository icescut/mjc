/*
 * 将字符串变成空字符串
 */
#include <stdio.h>

int main(void)
{
    char str[] = "ABC";

    printf("字符串str为\"%s\"。\n", str);
    puts("将字符串变成空字符串");
    str[0] = '\0';
    printf("字符串str为\"%s\"。\n", str);
    return 0;
}
