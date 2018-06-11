/*
 * 
 */
#include <stdio.h>

/*
 * 返回第一个出现的c的位置，如果没有返回-1
 */
int str_char(const char s[], int c)
{
    int len = 0;
    while (s[len]) {
        if (s[len] == c) {
            return len;
        }
        len++;
    }
    return -1;
}

int main(void)
{
    int i;
    char str[128];

    puts("查找a。");
    printf("请输入字符串：");
    scanf("%s", str);

    i = str_char(str, 'a');
    if (i != -1)
        printf("字符串\"%s\"的a的位置在%d。\n", str, i);
    else
        printf("a不在字符串中\n");
    return 0;
}
