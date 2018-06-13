/*
 * 通过指针间接地操作身高
 */
#include <stdio.h>

int main()
{
    int sato = 178;
    int sanaka = 175;
    int masaki = 179;

    int *isaki, *hiroko;

    isaki = &sato;
    hiroko = &masaki;

    printf("isaki lover's height is %d\n", *isaki);
    printf("hiroko lover's height is %d\n", *hiroko);

    isaki = &sanaka;
    *hiroko = 180;

    printf("sato's height is %d\n", sato);
    printf("sanaka's height is %d\n", sanaka);
    printf("masaki's height is %d\n", masaki);
    printf("isaki lover's height is %d\n", *isaki);
    printf("hiroko lover's height is %d\n", *hiroko);
    return 0;
}
