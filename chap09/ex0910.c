#include <stdio.h>

/*
 * 将字符串s中的数字全部删除
 */
void del_digit(char s[])
{
    int i = 0;
    int d = -1;

    // loop all chars
    while (s[i]) {
        //if digits
        //1. skip
        //2. record first digit's pos
        if (s[i] >= '0' && s[i] <= '9') {
            if (d == -1)
                d = i;
        //if not digits
        //1. override prev
        }else {
            if (d != -1){
                s[d++] = s[i];
            }
        }
        ++i;
    }
    if (d != -1)
        s[d] = '\0';
    }
    
int main()
{
    char str[128];
    
    printf("input: ");
    scanf("%s", str);
    del_digit(str);
    printf("After remove digits: %s\n", str);
    return 0;
}
    
