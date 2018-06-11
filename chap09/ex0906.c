/*
 * 
 */
#include <stdio.h>

/*
 * 返回字符c出现的次数
 */
int str_chnum(const char s[], int c)
{
    int n = 0;
    int len = 0;
    while (s[len]) {
        if (s[len] == c) {
            ++n;
        }
        len++;
    }
    return n;
}

int main(void)
{
    int i;
    char str[128];

    puts("查找a的个数。");
    printf("请输入字符串：");
    scanf("%s", str);

    i = str_chnum(str, 'a');
    if (i)
        printf("字符串\"%s\"中a的个数为%d。\n", str, i);
    else
        printf("a不在字符串中\n");
    return 0;
}
