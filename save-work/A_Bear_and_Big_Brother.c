#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    char **str = malloc(6 * sizeof(char *));
    str[5] = NULL;
    a = 0;
    while(a < 5){
        str[a] = malloc(6);
        str[a][5] = 0;
        a++;
    }
    a = 0;
    while(a < 5){
        scanf("%s", str[a++]);
    }
}