#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int a,b,c,d;
    char *str = calloc(1,100);
    scanf("%s", str);
    a = 0;
    b = 0;
    while(str[a])
    {
        if(str[a] == 'h')
        {
            b++;
            while(str[a] != 'h')
                a++;
            break;
        }
        a++;
    }
    while(str[a] == 'e')
    {
        if(str[a] == 'e')
        {
            b++;
            while(str[a] != 'e')
                a++;
            break;
        }
        a++;
    }
    while(str[a] == 'l')
    {
        if(str[a] == 'l')
        {
            b++;
            while(str[a] != 'l')
                a++;
            break;
        }
        a++;
    }
    while(str[a] == 'o')
    {
        if(str[a] == 'o')
        {
            b++;
            while(str[a] != 'o')
                a++;
            break;
        }
        a++;
    }
    printf("%d\n", b);
}