#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void slove(int *tab, int size, int idel)
{
    int a = 0;
    int x = 0;
    int b;
    int y;
    int res = 0;
    int count = 0;
    int kk = 0;
    while(a < size && kk < size)
    {
        while(a < size)
        {
            if(idel >= tab[a] && idel <= tab[a + 1])
                x++;
            a+=2;
        }
        if(tab[kk] != idel)
        {
            idel == tab[kk];
        }
        if(tab[kk] == idel)
            kk++;
    }
    if(count > 1)
        printf("NO\n");
    else
        printf("YES\n");
}
int main()
{
    int x,y,a,b,size;
    int *tab;

    int f,j,u;
    scanf("%d", &x);
    while(x)
    {
        u = 0;
        scanf("%d %d", &a,&b);
        size = a * 2;
        tab = malloc(sizeof(int) * size);
        while(u < size){
            scanf("%d %d", &f,&j);
            tab[u] = f;
            u++;
            tab[u] = j;
            u++;
        }
        slove(tab, size, b);
        x--;
   }
}