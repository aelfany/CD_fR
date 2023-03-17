#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    long long y,x,a,b;
    scanf("%lld", &y);
    long long *tab = malloc(y * sizeof(int));
    a = 0;
    while(a < y)
        scanf("%lld", &tab[a++]);
    a = 0;
    while(a < y)
    {
        if(tab[a] % 2 != 0)
            puts("YES");
        else
            puts("NO");
        a++;
    }
}