#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// void slove(char *str)
// {
//     int a,b,c;
//     a = 0;
//     while(str[a])
//     {
//         a++;
//     }
// }

int main()
{
    int x,y,a,b,c,d;
    char *str;
    int *tab;
    scanf("%d", &x);
    while(x)
    {
        a = 0;
        scanf("%d", &y);
        str = calloc(1, y);
        scanf("%s", str);
        slove(str);
        x--;
    }
}
