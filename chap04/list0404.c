#include <stdio.h>

int main(void)
{
    int sum = 0;
    int cnt = 0;
    int retry;

    do {
        int t;

        printf("请输入一个整数：");
        scanf("%d", &t);

        sum += t;
        cnt++;

        printf("要重复一次吗？【Yes...0 / t...9】：");
        scanf("%d", &retry);

    } while (retry == 0);

    printf("和为%d，平均值为%.2f。\n", sum, (double) sum / cnt);
    return 0;
}
