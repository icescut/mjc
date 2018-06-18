/*
 * 用表示学生的结构体来显示信息
 */
#include <stdio.h>
#include <string.h>

#define NAME_LEN 64

struct student {
    char    name[NAME_LEN];
    int     height;
    float   weight;
    long    schols;
};

int main(void)
{
    struct student takao = {"Takao", 173, 86.2};

    printf("姓名 = %s\n",       takao.name);
    printf("身高 = %d\n",       takao.height);
    printf("体重 = %.lf\n",     takao.weight);
    printf("奖学金 = %ld\n",    takao.schols);
    return 0;
}
