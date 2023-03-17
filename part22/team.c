#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void ft_tab(int *tab, int size)
{
    int a = 0;
    int b;
    int x = 0;
    while(a < size)
    {
        b = a + 1;
        while(b < size)
        {
            if(tab[a] == tab[b])
                x = 1;
            b++;
        }
        a++;
    }
    if(x == 1)
        printf("NO\n");
    else
        printf("YES\n");
}
int main()
{
    int x;
    int a;
    int b;
    int y;
    int *tab;

    scanf("%d", &x);
    a = 0;
    while(x > 0)
    {
        scanf("%d", &y);
        tab = malloc(y * sizeof(int));
        while(a < y)
        {
            scanf("%d", &b);
            tab[a] = b;
            a++;
        }
        ft_tab(tab,y);
        a = 0;
        x--;
    }
}