#include <stdio.h>

void swap(int *px, int *py)
{
    int temp = *px;
    *px = *py;
    *py = temp;
}

void sort2(int *px, int *py)
{
    if (*px > *py)
        swap(px, py);
}

int main()
{
    int na, nb;
    printf("A : ");
    scanf("%d", &na);
    printf("B : ");
    scanf("%d", &nb);
    sort2(&na, &nb);
    printf("After sorted, The A is %d, the B is %d\n", na, nb);
    return 0;
}

