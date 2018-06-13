/*
 * 字符串逆向输出
 */
#include <stdio.h>

void put_stringr(const char s[])
{
    int i = 0;
    while (s[i])
        ++i;
    do {
        putchar(s[--i]);
    } while (i);
}

int main(void)
{
    char str[128];

    printf("请输入字符串：");
    scanf("%s", str);

    printf("逆向：");
    put_stringr(str);
    printf("\n");
    return 0;
}
