#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// void slove()
// {
// }

int main()
{
    int x,y,a,b,c,d;
    int *tab;
    char *str;
    scanf("%d", &x);
    a = 0;
    scanf("%d", &y);
    str = calloc(1, y);
    scanf("%s", str);
    tab = malloc(y * sizeof(int));
    while(a < y)
        scanf("%d", &tab[a++]);
    slove(tab, y);
}