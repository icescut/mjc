#include <stdio.h>

int str_chnum(const char *s, int c)
{
    int num = 0;
    while (*s) {
        if (*s++ == c)
            num++;
    }
    return num;
}

int main()
{
    char str[128] = "I am alan";
    printf("\"%s\" has %d %c\n", str, str_chnum(str, 'a'), 'a');
    return 0;
}

