#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int x,y;
    scanf("%d", &x);
    char *str;
    y = 0;
    while(x){
    str = malloc(3);
    scanf("%s", str);
    if (str[1] == '+')
            ++y;
        else
            --y;
        x--;
    }
    printf("%d\n", y);
}