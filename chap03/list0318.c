#include <stdio.h>

int main(void)
{
    int no;

    printf("请输入一个整数：");
    scanf("%d", &no);

    if (no % 3 == 0)
        puts("该整数能被3整除。");
    else if (no % 3 == 1)
        puts("该数除以3的余数是1。");
    else
        puts("该数除以3的余数是2。");

    return 0;
}
