#include <stdio.h>

int main(void)
{
    int i, j;
    int height, width, tmp;

    puts("让我们来画一个长方形。");
    printf("一边：");     scanf("%d", &height);
    printf("另一边：");   scanf("%d", &width);

    if (height > width) {
        tmp = height;
        height = width;
        width = tmp;
    }

    for(i = 1; i <= height; ++i) {
        for(j = 1; j <= width; ++j)
            putchar('*');
        putchar('\n');
    }

    return 0;
}
