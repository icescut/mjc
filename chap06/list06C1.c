/*
 * 为n行3列的二维数组的所有构成元素赋上同样的值
 */
#include <stdio.h>

// 将v赋值给元素类型为int[3]/元素个数为n的数组m的所有构成元素
void fill(int m[][3], int n, int v)
{
    int i, j;
    for (i = 0; i < n; ++i)
        for (j = 0; j < 3; ++j)
            m[i][j] = v;
}

void mat_print(const int m[][3], int n)
{
    int i, j;
    for (i = 0; i < n; ++i) {
        for (j = 0; j < 3; ++j)
            printf("%4d", m[i][j]);
        putchar('\n');
    }
}

int main(void)
{
    int no;
    int x[2][3] = {0};
    int y[4][3] = {0};
    printf("赋值给所有构成元素的值");
    scanf("%d", &no);
    fill(x, 2, no);
    fill(y, 4, no);
    printf("--- x ---\n");  mat_print(x, 2);
    printf("--- y ---\n");  mat_print(y, 4);
    return 0;
}
