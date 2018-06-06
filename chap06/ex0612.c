#include <stdio.h>

// 将3行2列矩阵和2行3列矩阵的乘积，存储在2行2列的矩阵中。
void mat_mul(const int b[3][2], const int a[2][3], int c[2][2])
{
    int row_a, col_a;
    int row_b, col_b;

    // 遍历a的所有行
    for (row_a = 0; row_a < 2; ++row_a) {
        printf("第%d行\n", row_a);
        // 遍历b的所有列
        for (col_b = 0; col_b < 2; ++col_b) {
            printf("  第%d列\n", col_b);
            // row_a * col_b
            int sum = 0;
            for (col_a = 0; col_a < 3; ++col_a) {
                row_b = col_a;
                printf("    [%d][%d] * [%d][%d]\n", row_a, col_a,row_b,col_b);
                sum += a[row_a][col_a] * b[row_b][col_b];
            }
                printf("    =[%d][%d]\n", row_a, col_b);
            c[row_a][col_b] = sum;
        }
    }
}

int main(void)
{
    int a[][3] = {
        {2, 3, -1},
        {6, 1, -2}
    };

    int b[][2] = {
        {4, -5},
        {-3, 0},
        {1, 2},
    };

    int c[2][2];

    mat_mul(b, a, c);
    puts("结果为:");
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            printf("c[%d][%d] = %d\n", i, j, c[i][j]);
        }
    }
    printf("\n");

    return 0;
}
