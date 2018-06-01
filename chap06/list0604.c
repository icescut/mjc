#include <stdio.h>

int max2(int a, int b)
{
    if (a > b)
        return a;
    else
        return b;
}

int max4(int a, int b, int c, int d)
{
    return max2(max2(a, b), max2(c, d));
}

int main(void)
{
    int n1, n2, n3, n4;

    puts("请输入四个整数。");
    printf("整数1：");      scanf("%d", &n1);
    printf("整数2：");      scanf("%d", &n2);
    printf("整数3：");      scanf("%d", &n3);
    printf("整数4：");      scanf("%d", &n4);

    printf("较大的整数的值是%d。\n", max4(n1, n2, n3, n4));

    return 0;
}
