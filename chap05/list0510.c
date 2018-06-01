#include <stdio.h>

#define NUMBER 5

int main(void)
{
    int i;
    int tensu[NUMBER];
    int sum = 0;

    printf("请输入%d名学生的分数。\n", NUMBER);
    for (i = 0; i < NUMBER; ++i) {
        printf("%2d号:", i + 1);
        scanf("%d", &tensu[i]);
        sum += tensu[i];
    }

    printf("总分：%5d\n", sum);
    printf("平均分：%5.1f\n", (double) sum / NUMBER);

    return 0;
}
