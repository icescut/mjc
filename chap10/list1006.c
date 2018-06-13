/*
 * 将两个整数值互换
 */
#include <stdio.h>

void swap(int *px, int *py)
{
    int temp = *px;
    *px = *py;
    *py = temp;
}

int main()
{
    int na, nb;
    printf("A : ");
    scanf("%d", &na);
    printf("B : ");
    scanf("%d", &nb);
    swap(&na, &nb);
    printf("The A is %d, the B is %d\n", na, nb);
    return 0;
}

