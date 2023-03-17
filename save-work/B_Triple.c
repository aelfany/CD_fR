#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int x,y,a,k,b,c,j,count,val;
    int *tab;
    scanf("%d", &x);
    while(x)
    {
        scanf("%d", &y);
        a = 0;
        tab = malloc(y * sizeof(int)); 
        while(a < y)
            scanf("%d", &tab[a++]);
        a = 0;
        j = 0;
        val = 0;
        count = 0;
        while(a < y)
        {
            b = a + 1;
            c = 1;
            while(b < y)
            {
                if(tab[a] == tab[b])
                    c++;
                b++;
            }
            if(c >= 3)
            {
                printf("%d\n", tab[a]);
                break;
            }
            a++;
        }
        if(c < 3)
            printf("-1\n");
        free(tab);
        x--;
    }
}