#include <stdio.h>
#include <string.h>
#include <stdlib.h>
 
void fun(int *tab, int size)
{
    int a = 0;
    int b = 0;
    while(a < size)
    {
        if(tab[a] == -1)
            a++;
        b++;
        a++;
    }
    printf("%d\n", b);
}
void slove(int *tab, int size)
{
    int a = 0;
    int b = a + 1;
    int y = 0;
    int x = 0;
    while(b < size)
    {
        y = tab[a] + tab[b];
        if(y % 2 != 0)
        {
            if(tab[a] + tab[b] % 2 != 0 && tab[a + 1] + tab[b + 1] % 2 != 0)
                tab[a + 1] = -1;
            if(tab[a] + tab[b] % 2 != 0 && tab[a + 1] + tab[b + 1] % 2 == 0)
                tab[a] = -1;
            if(tab[a] + tab[b] % 2 == 0 && tab[a + 1] + tab[b + 1] % 2 != 0)
                tab[b + 1] = -1;
        }
        a++;
        b++;
    }
    fun(tab,size);
}
int main()
{
    int a,b,c,d,y,x;
    char *str;
    int *tab;
    scanf("%d", &x);
    while(x)
    {
        a = 0;
        scanf("%d", &y);
        tab = malloc(y * sizeof(int));
        while(a < y)
            scanf("%d", &tab[a++]);
        slove(tab, y);
        free(tab);
        x--;
    }
}