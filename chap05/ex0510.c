#include <stdio.h>

#define ROW1 4
#define COL1 3
#define ROW2 3
#define COL2 4

int main(void)
{
    int i, j, k, temp;
    int matrix1[ROW1][COL1] = {0};
    int matrix2[ROW2][COL2] = {0};
    int res[ROW1][COL2] = {0};

    puts("请输入第一个矩阵：");
    for (i = 0; i < ROW1; ++i) {
        for (j = 0; j < COL1; ++j) {
            printf("[%d][%d]:", i, j);
            scanf("%d", &matrix1[i][j]);
        }
    }
    
    putchar('\n');

    puts("请输入第二个矩阵：");
    for (i = 0; i < ROW2; ++i) {
        for (j = 0; j < COL2; ++j) {
            printf("[%d][%d]:", i, j);
            scanf("%d", &matrix2[i][j]);
        }
    }
    
    putchar('\n');

    // 第一个矩阵的1~ROW1行
    for (i = 0; i < ROW1; ++i) {
        // 第二个矩阵的1~COL2列
        for (j = 0; j < COL2; ++j) {
            temp = 0;
            for (k = 0; k < COL1; ++k) {
                temp += matrix1[i][k] * matrix2[k][j];
            }
            res[i][j] = temp;
        }
        
    }

    puts("结果是：");
    for (i = 0; i < ROW1; ++i) {
        for (j = 0; j < COL2; ++j) {
            printf("[%d][%d] = %d\n", i, j, res[i][j]);
        }
    }

    return 0;
}
