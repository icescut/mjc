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
 * 返回将无符号整数x的第pos位设置为1后的值
 */
unsigned set(unsigned x, int pos)
{
    return x | (1U << (int_bits() - pos));
}

/*
 * 返回将无符号整数x的第pos位设置为0后的值
 */
unsigned reset(unsigned x, int pos)
{
    return x & ~(1U << (int_bits() - pos));
}

/*
 * 返回将无符号整数x的第pos位取反后的值
 */
unsigned inverse(unsigned x, int pos)
{
    return x ^ (1U << (int_bits() - pos));
}

/*
 * 返回将无符号整数x的第pos位到第pos+n-1位的n位设置为1后的值
 */
unsigned set_n(unsigned x, int pos, int n)
{
    for (int i = pos; i < pos + n; ++i)
        x = set(x, i);

    return x;
}

/*
 * 返回将无符号整数x的第pos位到第pos+n-1位的n位设置为0后的值
 */
unsigned reset_n(unsigned x, int pos, int n)
{
    for (int i = pos; i < pos + n; ++i)
        x = reset(x, i);

    return x;
}

/*
 * 返回将无符号整数x的第pos位到第pos+n-1位的n位取反后的值
 */
unsigned inverse_n(unsigned x, int pos, int n)
{
    for (int i = pos; i < pos + n; ++i)
        x = inverse(x, i);

    return x;
}

int main(void)
{
    unsigned x = 12345;

    printf("\n整数                  = ");         print_bits(x);
    printf("\n第%2d位开始的%2d位设为1 = ", 5, 6);   print_bits(set_n(x, 5, 6));
    printf("\n第%2d位开始的%2d位设为0 = ", 27, 2);   print_bits(reset_n(x, 27, 2));
    printf("\n第%2d位开始的%2d位设取反= ", 27, 4);   print_bits(inverse_n(x, 27, 4));
    putchar('\n');
    return 0;
}
