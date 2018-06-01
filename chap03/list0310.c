#include <stdio.h>

int main(void)
{
    int no;

    printf("请输入一个整数：");
    scanf("%d", &no);

    if (no > 0)
        if (no % 2 == 0)
            puts("该整数为偶数。");
        else
            puts("该整数为奇数。");
    else
        puts("该整数为负数。\a\n");


    return 0;
}
