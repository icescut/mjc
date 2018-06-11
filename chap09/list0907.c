/*
 * 读取并显示字符串数组
 */
#include <stdio.h>

int main(void)
{
    int i;
    char s[3][128];

    for (i = 0; i < 3; ++i) {
        printf("s[%d] : ", i);
        scanf("%s", s[i]);
    }

    for (i = 0; i < 3; ++i) {
        printf("s[%d] = \"%s\"\n", i, s[i]);
    }
    return 0;
}
