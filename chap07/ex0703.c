/*
 * 
 */
#include <stdio.h>

/*
 * 返回x的二进制数的1的个数
 */
int count_bits(unsigned x)
{
    int bits = 0;
    while (x) {
        if (x & 1U) bits++;
        x >>= 1;
    }
    return bits;
}

/*
 * 返回unsigned型的位数
 */
int int_bits(void)
{
    return count_bits(~0U);
}

/*
 * 显示unsigned型的位的内容
 */
void print_bits(unsigned x)
{
    int i;
    // 从高位到低位，逐位和1进行与运算，判断是1或0
    for (i = int_bits() - 1; i >= 0; --i)
        putchar(((x >> i) & 1U) ? '1' : '0');
}
/*
 * 返回无符号整数x右移n位后的值
 */
unsigned rrotate(unsigned x, int n)
{
    return x >> n;
}

/*
 * 返回无符号整数x左移n位后的值
 */
unsigned lrotate(unsigned x, int n)
{
    return x << n;
}

int main(void)
{
    unsigned x, n;

    printf("非负整数值：");     scanf("%u", &x);
    printf("位移位数  ：");     scanf("%u", &n);

    printf("\n整数        = ");   print_bits(x);
    printf("\n左移后的值  = ");   print_bits(lrotate(x, n));
    printf("\n右移后的值  = ");   print_bits(rrotate(x, n));
    putchar('\n');
    return 0;
}
