#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int len(int a)
{
    int c = 0;
    while(a != 0){
        a /= 10;
        c++;
    }
    return c;
}

void help(int kk, int size)
{
    int a,b,c,d;
    a = 10;
    c = 0;
    d = 0;
    int *tab = malloc(size * sizeof(int));
    while(kk != 0)
    {
        b = kk % 10;
        kk /= 10;
        c++;
        if(b != 0)
        {
            if(c == 0)
                c++;
            while(len(b) != c){
                b = b * a;
                a = a * 10;
            }
            tab[d] = b;
            d++;
        }
    }
    d = 0;
    while(d < size)
        printf("%d ", tab[d++]);
        printf("\n");
}

int main()
{
    int x,a,b,c,d;
    scanf("%d", &x);
    while(x > 0)
    {
        scanf("%d", &a);
        b = a;
        while(a != 0){
            if(a % 10 != 0)
                c++;
            a /= 10;
        }
        printf("%d\n", c);
        help(b,c);
        c = 0;
        x--;
    }
}