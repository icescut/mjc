#include <stdio.h>

#define NUMBER 5

int main(void)
{
    int i;
    int tensu[NUMBER];
    int max, min;

    printf("请输入%d名学生的分数。\n", NUMBER);
    for (i = 0; i < NUMBER; ++i) {
        printf("%2d号:", i + 1);
        scanf("%d", &tensu[i]);
    }

    max = min = tensu[0];

    for (i = 1; i < NUMBER; ++i) {
        if (tensu[i] > max) max = tensu[i];
        if (tensu[i] < min) min = tensu[i];
    }

    printf("最高分：%d\n", max);
    printf("最低分：%d\n", min);

    return 0;
}
