#include <stdio.h>

int str_length(const char *s)
{

    int len = 0;
    while (*s++)
        len++;
    return len;
}

int main()
{
    char str[128];

    printf("please enter string:");
    scanf("%s", str);
    printf("length:%d\n",str_length(str));
    return 0;
}

