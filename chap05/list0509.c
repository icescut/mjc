#include <stdio.h>

int main(void)
{
    int i;
    int tensu[5];
    int sum = 0;

    printf("请输入5名学生的分数。\n");
    for (i = 0; i < 5; ++i) {
        printf("%2d号:", i + 1);
        scanf("%d", &tensu[i]);
        sum += tensu[i];
    }

    printf("总分：%5d\n", sum);
    printf("平均分：%5.1f\n", (double) sum / 5);

    return 0;
}
