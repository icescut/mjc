/*
 * 线性查找（顺序查找）
 */
#include <stdio.h>

#define NUMBER 5    /* 元素个数 */
#define FAILED -1   /* 查找失败 */

/*
 * 查找元素数为n的数组v中与key一致的元素
 */
int search(const int v[], int key, int n)
{
    int i = 0;

    while(1) {
        if (i == n)
            return FAILED;
        if (v[i] == key)
            return i;
        ++i;
    }
}

int main(void)
{
    int i, ky, idx;
    int vx[NUMBER];

    for (i = 0; i < NUMBER; ++i) {
        printf("vx[%d]: ", i);
        scanf("%d", &vx[i]);
    }

    printf("要查找的值：");
    scanf("%d", &ky);

    // 从元素个数为NUMBER的数组vx中查找ky
    idx = search(vx, ky, NUMBER);

    if(idx == FAILED)
        puts("查找失败！");
    else
        printf("%d是数组的第%d号元素\n", ky, idx + 1);

    return 0;
}
