#include <stdio.h>

#define STUDENTS 6
#define CROUSES 2

int main(void)
{
    int i, j;
    double scores[STUDENTS][CROUSES] = {0};
    double sum_of_chinese = 0;
    double sum_of_math = 0;

    puts("请输入各门课程的分数：");
    for (i = 0; i < STUDENTS; ++i) {
        printf("第%d名学生的分数:\n", i + 1);
        for (j = 0; j < CROUSES; ++j) {
            if (j == 0) {
                printf("语文：");
                scanf("%lf", &scores[i][j]);
                sum_of_chinese += scores[i][j];
            } else {
                printf("数学：");
                scanf("%lf", &scores[i][j]);
                sum_of_math += scores[i][j];
            }
        }
    }
    putchar('\n');

    printf("语文的总分为  ：%3.1f\n", sum_of_chinese);
    printf("语文的平均分为：%3.1f\n", sum_of_chinese / STUDENTS);
    printf("数学的总分为  ：%3.1f\n", sum_of_math);
    printf("数学的平均分为：%3.1f\n", sum_of_math / STUDENTS);

    for (i = 0; i < STUDENTS; ++i) {
        printf("第%d名学生:\n", i + 1);
        double temp = 0;
        for (j = 0; j < CROUSES; ++j) {
            temp += scores[i][j];
        }
        printf("  总分  ：%3.1f\n", temp);
        printf("  平均分：%3.1f\n", temp / CROUSES);
    }



    return 0;
}
