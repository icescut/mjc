/*
 * 以十进制、八进制和十六进制的形式显示
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
 * 显示unsigned型整数x的后n位
 */
void print_nbits(unsigned x, unsigned n)
{
    int i = int_bits();
    // 从高位到低位，逐位和1进行与运算，判断是1或0
    i = (n < i) ? n - 1 : i - 1;
    for (; i >= 0; --i)
        putchar(((x >> i) & 1U) ? '1' : '0');
}

int main(void)
{
    unsigned i;

    for (i = 0; i <= 100U; ++i) {
        printf("%5u ", i);
        print_nbits(i, 16);
        printf(" %06o %04x\n", i, i);
    }

    return 0;
}
