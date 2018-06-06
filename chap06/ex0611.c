#include <stdio.h>

#define NUMBER 7

// 将数组v中key出现的下标保存在idx中，并返回出现的次数。
int search_idx(const int v[], int idx[], int key, int n)
{
    int cnt = 0;
    int j = 0;
    for (int i = 0; i < n; ++i) {
        if (v[i] == key) {
            idx[j++] = i;
            ++cnt;
        }
    }
    return cnt;
}

int main(void)
{
    int vx[] = {1, 7 ,5, 7, 2, 4, 7};
    int idx[NUMBER];
    int cnt;
    int key = 7;

    cnt = search_idx(vx, idx, key, NUMBER);

    printf("找到%d个%d：\n", cnt, key);
    for (int i = 0; i < cnt; ++i) {
        printf("下标%d ", idx[i]);
    }
    printf("\n");

    return 0;
}
