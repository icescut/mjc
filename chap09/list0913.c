#include <stdio.h>

void put_strarray(const char s[][6], int n)
{
    int i;
    for (i = 0; i < n; ++i){
        int j = 0;
        printf("s[%d] = \"", i);

        while (s[i][j]) {
            putchar(s[i][j++]);
        }



        puts("\"");
    }
}

int main()
{
    char cs[][6] = {"Turbo", "NA", "DOHC"};
    put_strarray(cs, 3);
    return 0;
}

