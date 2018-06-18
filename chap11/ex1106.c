#include <stdio.h>

char* str_chr(char *s, int c)
{
    while (*s) {
        if (*s == c)
            return s;
        else
            s++;
    }
    return NULL;
}

int main()
{
    char str[128] = "I am alan";
    char *p = str_chr(str, 'a');
    printf("before first a is '%c', after fiest a is '%c'\n", *(p - 1), *(p + 1));
    return 0;
}

