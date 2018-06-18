#include <stdio.h>

void put_string(const char *s)
{
    while (*s) {
        putchar(*s++);
    }
    putchar('\n');
}

int main()
{
    char str[] = "Hello world";
    char str2[] = "Hi world";
    put_string(str);
    put_string(str2);
    return 0;
}

