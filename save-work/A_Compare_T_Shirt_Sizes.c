#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// void slove(int *tab, int size)
// {
//     int a,b,c;
//     a = 0;
//     while(a < size)
//     {
//         a++;
//     }
// }
void slove(char *str, char *str1)
{
    if(strcmp("XXXS",str) == 0 && strcmp("XS",str1) == 0)
        puts("<");
    else if(strcmp("XXXL",str) == 0 && strcmp("XL",str1) == 0)
        puts(">");
    else if(strcmp("XL",str) == 0 && strcmp("M",str1) == 0)
        puts(">");
    else if(strcmp("XXL",str) == 0 && strcmp("XXL", str1) == 0)
        puts("=");
    else if(strcmp("XXXXXS",str) == 0 && strcmp("M",str1) == 0)
        puts("<");
    else if(strcmp("XL",str) == 0 && strcmp("XXXS",str1) == 0)
        puts(">");
    else
        puts(">");
}

int main()
{
    int x,y,a,b,c,d;
    int *tab;
    char *str;
    char *str1;
    scanf("%d", &x);
    while(x)
    {
        a = 0;
        // scanf("%d", &y);
        str = calloc(1, 100);
        str1 = calloc(1, 100);
        scanf("%s", str);
        scanf("%s", str1);
        slove(str, str1);
        // tab = malloc(y * sizeof(int));
        // while(a < y)
        //     scanf("%d", &tab[a++]);
        x--;
    }
}
