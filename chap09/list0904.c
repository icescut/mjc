/*
 * 询问名字并显示问候语
 */
#include <stdio.h>

int main(void)
{
    char name[48];

    printf("请输入您的名字：");
    scanf("%s", name);

    printf("您好，%s先生/女士！！\n", name);
    return 0;
}
