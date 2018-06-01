#include <stdio.h>

#define NUMBER 80

int main(void)
{
    int i, j;
    int num;
    int tensu[NUMBER];
    int bunpu[11] = {0};
    int max, tmp;

    printf("请输入学生人数：");

    do {
        scanf("%d", &num);
        if (num < 1 || num > NUMBER)
            printf("\a请输入1-%d的数：", NUMBER);
    } while (num < 1 || num > NUMBER);

    printf("请输入%d人的分数。\n", num);

    for (i = 0; i < num; ++i) {
        printf("%2d号：", i);
        do {
            scanf("%d", &tensu[i]);
            if (tensu[i] < 0 || tensu[i] > 100)
                printf("\a请输入1-100的数：");
        } while (tensu[i] < 0 || tensu[i] > 100);
        bunpu[tensu[i] / 10]++;
    }

    puts("\n---分布图---");

    max = bunpu[0];
    for (i = 1; i <= 10; ++i) {
        if (bunpu[i] > max) max = bunpu[i];
    }

    while (max > 0) {
        for (i = 0; i <= 10; ++i) {
            if (bunpu[i] == max) {
                printf("  * ");
                bunpu[i]--;
            } else {
                printf("    ");
            }
        }
        printf("\n");
        --max;
    }

    for (i = 0; i < 44; ++i) {
        putchar('-');
    }
    putchar('\n');

    for (i = 0; i < 11; ++i) {
        printf("%3d ", i * 10);
    }
    putchar('\n');

    return 0;
}
