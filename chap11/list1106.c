#include <stdio.h>

char* str_copy(char *d, const char *s)
{
    char *t = d;
    while (*d++ = *s++)
        ;
    return t;
}

int main()
{
    char str[128] = "ABC";
    char tmp[128];

    printf("before copy str = \"%s\"\n", str);
    printf("please enter:");

    scanf("%s", tmp);
    str_copy(str, tmp);
    printf("after copy str = \"%s\"\n", str);
    return 0;
}

