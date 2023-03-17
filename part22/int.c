#include<stdio.h>
#include<stdlib.h>
#include<string.h>

long int *help(int a, int *size)
{
    int x;
    int y = a;
    long int *tab;
    for(x = -1; a != 0; x++)
        a = a / 10;
    tab = (long int *)malloc(x * sizeof(int));
    *size = x;
    x = 0;
    while(y != 0)
    {
        tab[x] = y % 10;
        y = y / 10;
        x++;
    }
    return tab;
}
int sum(int j)
{
    int a,b,size;
    long int *tab = help(j, &size);
    b = 0;
    for(a = 0; a <= size; a++)
        b = b + tab[a];
    free(tab);
    return (b);
}

int main()
{
    long int a,b,c,d;
    scanf("%ld", &a);
    while(a)
    {
        scanf("%ld", &b);
        c = 0;
        d = b;
        while(d >= c){
            if((sum(d) == sum(c) || sum(d) - sum(c) == -1 || sum(d) - sum(c) == 1) && d + c == b)
            {
                printf("%ld %ld\n", d, c);
                break;
            }
            d--;
            c++;
        }
        a--;
    }
}