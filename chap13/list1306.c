/*
 * 显示文件内容
 */

#include <stdio.h>

int main(void)
{
    int ch;
    FILE *fp;
    char fname[FILENAME_MAX];

    printf("文件名：");
    scanf("%s", fname);

    if ((fp = fopen(fname, "r")) == NULL)
        printf("文件打开失败。\n");
    else {
        while ((ch = fgetc(fp)) != EOF)
            putchar(ch);
        fclose(fp);
    }
    return 0;
}
