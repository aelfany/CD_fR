#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int slove(int *tab, int size)
{
    int a = 0;
    int b;
    b = size - 1;
    while(b > 0)
    {
        // printf("%d\n", tab[a]);
        // printf("%d\n", tab[b]);
        while(a < size)
        {
            if(tab[a] == tab[b])
            {
                if(b - a == 2)
                    return 0;
                a += 1;
                while(a < b)
                {
                    if(tab[a] != tab[b])
                        return 1;
                    a++;
                    b--;
                }
                return 0;
            }
            a++;
        }
        b--;
    }
    return 2;
}
int main()
{
    int a,b,c,d,y,x;
    // char *str;
    int *tab;
    scanf("%d", &x);
    while(x)
    {
        a = 0;
        scanf("%d", &y);
        tab = malloc(y * sizeof(int));
        while(a < y)
            scanf("%d", &tab[a++]);
        int j = slove(tab, y);
        if(j == 0)
            printf("YES\n");
        if(j == 1)
            printf("NO\n");
        x--;
    }
}