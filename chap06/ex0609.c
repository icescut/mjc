#include <stdio.h>

#define NUMBER 5

// 对元素个数为n的int型数组v进行倒序排列
void rev_intary(int v[], int n)
{
    int temp;
    for (int i = 0; i < n / 2; ++i) {
        temp = v[i];
        v[i] = v[n - i - 1];
        v[n - i - 1] = temp;
    }
}

int main(void)
{
    int i;
    int vx[NUMBER];

    for (i = 0; i < NUMBER; ++i) {
        printf("vx[%d]: ", i);
        scanf("%d", &vx[i]);
    }

    rev_intary(vx, NUMBER);

    puts("倒序为：");
    for (i = 0; i < NUMBER; ++i) {
        printf("%d ", vx[i]);
    }
    printf("\n");
    return 0;
}
