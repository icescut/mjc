#include <stdio.h>

void del_digit(char *s)
{
    char *d = NULL;
    while (*s) {
        if (*s >= '0' && *s <= '9') {
            if (!d)
                d = s;
        } else {
            if (d)
                *d++ = *s;
        }
        s++;
    }
    if (d)
        *d = '\0';
}

int main()
{
    char str[128];
    printf("please enter:");
    scanf("%s", str);
    del_digit(str);
    printf("after remove digits:%s\n", str);
    return 0;
}

