/*
 * 向文件写出程序运行时的日期和时间
 */

#include <stdio.h>
#include <time.h>

int main(void)
{
    FILE *fp;
    time_t current = time(NULL);
    struct tm *timer = localtime(&current);

    if((fp = fopen("dt_dat", "w")) == NULL)
        printf("文件打开失败！\n");
    else {
        printf("写入当前日期和时间。\n");

        fprintf(fp, "%d %d %d %d %d %d\n",
                timer->tm_year + 1900,  timer->tm_mon + 1,  timer->tm_mday,
                timer->tm_hour,         timer->tm_min,      timer->tm_sec);
        fclose(fp);
    }
    return 0;
}
