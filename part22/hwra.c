#include <libc.h>

int main()
{
    int x;
    int a;
    int y;
    int z;
    int *tab;

    scanf("%d", &x);
    scanf("%d", &z);
    tab = malloc(z * sizeof(int));
    while(x > 0)
    {
        scanf("%d", &y);
        while(a < y)
        {
            scanf("%d", &tab[y]);
            a++;
        }
        x--;
    }
}