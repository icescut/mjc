/*
 * 使用宏互换成两个变量
 */
#include <stdio.h>

#define swap(type,a,b) {type t = a;a = b;b = t;}

int main(void)
{
    int     a = 10, b = 20;

    printf("a = %d, b = %d\n", a, b);
    swap(int, a ,b);
    puts("互换之后");
    printf("a = %d, b = %d\n", a, b);
    return 0;
}
