/*
 * 用字符和字符编码显示文件内容
 */
#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int n;
    unsigned long count = 0;
    unsigned char buf[16];
    FILE *fp;
    char fname[FILENAME_MAX];

    printf("文件名：");
    scanf("%s", fname);

    if ((fp = fopen(fname, "rb")) == NULL)
        printf("文件打开失败！\n");
    else {
        while ((n = fread(buf, 1, 16, fp)) > 0) {
            int i;

            printf("%08lx ", count);    //地址

            for (i = 0; i < n; ++i)
                printf("%02X ", (unsigned)buf[i]);  // 十六进制

            if (n < 16)
                for (i = n; i < 16; ++i)
                    printf("   ");

            for (i = 0; i < n; ++i)
                putchar(isprint(buf[i]) ? buf[i] : '.');

            putchar('\n');

            count += 16;
        }
        fclose(fp);
    }

}
