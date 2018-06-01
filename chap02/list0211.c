#include <stdio.h>

int main(void)
{
    int    a, b, c;
    int    sum;
    double ave;

    puts("请输入三个整数。");
    printf("整数a：");  scanf("%d", &a);
    printf("整数b：");  scanf("%d", &b);
    printf("整数c：");  scanf("%d", &c);

    sum = a + b + c;
    ave = (double)sum / 3;

    printf("它们的合计值是%5d。\n", sum);
    printf("它们的平均值是%5.1f。\n", ave);
}
