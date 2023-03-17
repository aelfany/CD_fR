#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int find_min(int *tab, int size)
{
    int a = -1;
    int min = tab[0];
    while(++a < size)
        if(tab[a] < min)
            min = tab[a];
    return min;   
}

void ft_help(int *tab, int size)
{
    int min = find_min(tab, size);
    int b = 0;
    int tt = 0;
    while(b < size)
    {
        if(tab[b] > min)
            tt = tt + tab[b] - min;
        b++;
    }
    printf("%d\n", tt);
}
int main()
{
    int x;
    int a = 0;
    int y;
    int z;
    int *tab;

    scanf("%d", &x);
    while(x > 0)
    {

        scanf("%d", &y);
        tab = malloc(y * sizeof(int));
        while(a < y)
        {
            scanf("%d", &z);
            tab[a] = z;
            a++;
        }
        ft_help(tab, y);
        a = 0;
        x--;
    }
}