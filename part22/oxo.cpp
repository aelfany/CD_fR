#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
int *help(int a)
{
    int x;
    int y = a;
    int *tab;
    for(x = -1; a != 0; x++)
        a = a / 10;
    tab = (int *)malloc(x * sizeof(int));
    x = 0;
    while(y != 0)
    {
        tab[x++] = y % 10;
        y = y % 10;
    }
    return tab;
}

int main()
{
    int a,b,c,d,x,y;
    scanf("%d", &a);
    c = 0;
    int *tab;

    while(a)
    {
        scanf("%d", &b);
        x = b / 2;
        tab = 
        while(1)
        {
            
        }
        a--;
    }
}