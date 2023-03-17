#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int a,b,c,x;
    int **tab = malloc(5 * sizeof(int *));
    a = 0;
    while(a < 5)
        tab[a++] = malloc(5 * sizeof(int));
    a = 0;
    while(a < 5)
    {
        b = 0;
        while(b < 5)
            scanf("%d", &tab[a][b++]);
        a++;
    }
    a = 0;
    x = 0;
    c = 0;
    while(a < 5)
    {
        b = 0;
        while(b < 5)
        {
            if(tab[a][b] == 1)
            {
                x = 1;
                c += b + 1;
                break;
            }
            b++;
        }
        if(x == 1)
            break;
        if(x == 0)
            c += 5;
        a++;
    }
    if(c > 13)
        printf("%d\n", c - 13);
    else
        printf("%d\n", 13 - c);
}