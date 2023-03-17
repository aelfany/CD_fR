#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main()
{
    int x,y,a,b,count;
    int *tab;
    scanf("%d", &x);
    while(x)
    {
        scanf("%d", &y);
        tab = malloc(y * sizeof(int));
        a = 0;
        b = 1;
        count = 0;
        while(a < y)
            scanf("%d", &tab[a++]);
        a = 0;
        while(b < y)
        {
            if(tab[b] - tab[a] >= 120)
                count++;
            if(tab[b] - tab[a] >= 240)
                count+=2;
            if((tab[a] >= 0 && tab[a] <= 9) && (tab[b] >= 0 && tab[b] <= 9))
                count++;
            b++;
            a++;
        }
        if(y == 1)
        {
            printf("YES\n");
        }
        // printf("%d\n", count);
        else if(count >= 2)
            printf("YES\n");
        else
            printf("NO\n");
        x--;
    }
}