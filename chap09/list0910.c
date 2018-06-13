/*
 * 计算字符串中的数字字符数
 */
#include <stdio.h>

void str_count(const char s[], int cnt[])
{
    int i = 0;
    while (s[i]) {
        if (s[i] >= '0' && s[i] <= '9') {
            int k = s[i] - '0';
            cnt[k]++;
        }
        ++i;
    }
}

int main(void)
{
    int i;
    int dcnt[10] = {0};
    char str[128];

    printf("请输入字符串：");
    scanf("%s", str);

    str_count(str, dcnt);
    puts("数字字符出现的次数。");
    for (i = 0; i < 10; ++i)
        printf("%d : %d\n", i, dcnt[i]);
    return 0;
}
