#include <stdio.h>

void set_zero(int v[], int n)
{
    int i;
    for (i = 0; i < n; ++i)
        v[i] = 0;
}

void print_array(const int v[], int n)
{
    int i;

    printf("{ ");
    for (i = 0; i < n; ++i)
        printf("%d ", v[i]);
    printf("}");
}

int main(void)
{
    int ary1[] = {1, 2, 3, 4, 5};
    int ary2[] = {3, 2, 1};

    printf("ary1 = ");      print_array(ary1, 5);       putchar('\n');
    printf("ary2 = ");      print_array(ary2, 3);       putchar('\n');

    set_zero(ary1, 5);
    set_zero(ary2, 3);

    puts("把0赋给了两个数组的所有元素。\n");
    printf("ary1 = ");      print_array(ary1, 5);       putchar('\n');
    printf("ary2 = ");      print_array(ary2, 3);       putchar('\n');

    return 0;
}
