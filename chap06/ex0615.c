/*
 * 显示put_count被调用的次数
 */
#include <stdio.h>

void put_count()
{
    static int cnt;
    ++cnt;
    printf("put_count: 第%d次\n", cnt);
}

int main(void)
{
    int i;
    for (i = 0; i < 3; ++i)
        put_count();

    return 0;
}
