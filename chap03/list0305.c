#include <stdio.h>

int main(void)
{
    int num;

    printf("请输入一个整数：");
    scanf("%d", &num);

    if (num)
        puts("输入的整数不为0。");
    else
        puts("输入的整数为0。");

    return 0;
}
