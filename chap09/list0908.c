/*
 * 判断字符串的长度
 */
#include <stdio.h>

/*
 * 返回字符串str的长度
 */
int str_length(const char s[])
{
    int len = 0;
    while (s[len])
        len++;
    return len;
}

int main(void)
{
    char str[128];

    printf("请输入字符串：");
    scanf("%s", str);

    printf("字符串\"%s\"的长度是%d。\n", str, str_length(str));
    return 0;
}
