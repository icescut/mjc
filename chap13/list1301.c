/*
 * 打开和关闭文件
 */

#include <stdio.h>

int main(void)
{
    FILE *fp;
    // fp = fopen("abc", "r");
    fp = fopen("hw", "r");

    if (fp == NULL)
        printf("无法打开文件\"abc\"。\n");
    else {
        printf("成功打开文件\"abc\"。\n");
        fclose(fp);
    }
    return 0;
}
