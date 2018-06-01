#include <stdio.h>

int main(void)
{
    int a, b;

    puts("请输入两个整数：");
    printf("整数a："); scanf("%d", &a);
    printf("整数b："); scanf("%d", &b);

    if (a == b)
        puts("A和B相等");
    else if (a > b)
        puts("A大于B");
    else
        puts("A小于B");

    return 0;
}
