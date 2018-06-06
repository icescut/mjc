#include <stdio.h>

#define NUMBER 5

// 对元素个数为n的int型数组v2进行倒序排列，结果保存在v1中
void intary_rcpy(int v1[], const int v2[], int n)
{
    int temp;
    for (int i = 0; i < n; ++i) {
        v1[n - i - 1] = v2[i];
    }
}

int main(void)
{
    int i;
    int vx[NUMBER];
    int vy[NUMBER];

    for (i = 0; i < NUMBER; ++i) {
        printf("vx[%d]: ", i);
        scanf("%d", &vx[i]);
    }

    intary_rcpy(vy, vx, NUMBER);

    puts("倒序为：");
    for (i = 0; i < NUMBER; ++i) {
        printf("%d ", vy[i]);
    }
    printf("\n");
    return 0;
}
