#include <stdio.h>

int main(void)
{
    int no, no_save;

    printf("请输入一个正整数：");
    scanf("%d", &no);
    
    no_save = no;

    while(no >= 1) {
        printf("%d ", no);
        --no;
    }

    if (no_save >= 1)
        printf("\n");

    return 0;
}
