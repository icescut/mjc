#include <stdio.h>

int main(void)
{
    int num;

    printf("请输入一个整数：");
    scanf("%d", &num);

    if ((num % 10) == 5)
        puts("该整数的个位数是5。");
    else
        puts("该整数的个位数不是5。");

    return 0;
}
