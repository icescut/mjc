#include <stdio.h>

int main()
{
    int n;
    double x;
    int a[3];
    printf("n   address : %p\n", &n);
    printf("x   address : %p\n", &x);
    printf("a[0]address : %p\n", &a[0]);
    printf("a[1]address : %p\n", &a[1]);
    printf("a[2]address : %p\n", &a[2]);
    return 0;
}
