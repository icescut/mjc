#include <stdio.h>

int main(void)
{
    int a, b, i, min, max, sum = 0;

    puts("请输入两个整数值。");
    printf("整数a:");   scanf("%d", &a);
    printf("整数b:");   scanf("%d", &b);

    if (a > b) {
        min = b;
        max = a;
    } else {
        min = a;
        max = b;
    }

    i = min;

    do {
        //printf("i : %d ", i);
        sum += i++;
    } while (i <= max);

    printf("大于等于%d小于等于%d的所有整数的和是%d。\n", min, max, sum);
    
    return 0;
}
