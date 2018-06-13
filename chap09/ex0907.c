/*
 * 
 */
#include <stdio.h>

void put_string(const char s[])
{
    int i = 0;
    while (s[i])
        putchar(s[i++]);
}

/*
 * 使字符串s显示n次
 */
void put_stringn(const char s[], int n)
{
    while (n-- > 0)
        put_string(s);
}

int main(void)
{
    char str[128];

    printf("请输入字符串：");
    scanf("%s", str);

    put_stringn(str, 3);
    printf("\n");
    return 0;
}
