#include <stdio.h>

#define NUMBER 5

// 返回元素个数为n的int型数组v中的最小值
int min_of(const int v[], int n)
{
    int min = v[0];
    for (int i = 1; i < n; ++i) {
        if (v[i] < min)
            min = v[i];
    }
    return min;
}

int main(void)
{
    int i;
    int vx[NUMBER + 1];

    for (i = 0; i < NUMBER; ++i) {
        printf("vx[%d]: ", i);
        scanf("%d", &vx[i]);
    }

    printf("最小值为%d。\n", min_of(vx, NUMBER));
    return 0;
}
