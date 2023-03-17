#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// void slove(int *tab, int size)
// {
//     int a,b,c;
//     a = 0;
//     while(a < size)
//     {
//         a++;
//     }
// }

int main()
{
    int x,y,a,b,c,d;
    int *tab;
    char *str;
    scanf("%d", &x);
    while(x)
    {
        a = 0;
        scanf("%d", &y);
        tab = malloc(y * sizeof(int));
        while(a < y)
            scanf("%d", &tab[a++]);
        slove(tab, y);
        x--;
    }
}