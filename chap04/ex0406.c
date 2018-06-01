#include <stdio.h>

int main(void)
{
    int i, no;

    printf("请输入一个正整数：");
    scanf("%d", &no);
    
    i = 2;

    while(i <= no) {
        printf("%d ", i);
        i += 2;
    }

    if (no >= 0)
        printf("\n");

    return 0;
}
