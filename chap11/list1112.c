#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[128];
    printf("please enter:");
    scanf("%s", str);
    printf("after change to digit:%d\n", atoi(str));
    return 0;
}

