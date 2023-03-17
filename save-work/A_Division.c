#include <stdio.h>
#include <string.h>
#include <stdlib.h>
 
int main()
{
    int x;
    int y;
    scanf("%d", &x);
    while(x > 0)
    {
        scanf("%d", &y);
        if(y >= 1900)
            puts("Division 1");
        else if(y >= 1600 && y <= 1899)
            puts("Division 2");
        else if(y >= 1400 && y <= 1599)
            puts("Division 3");
        else if(y <= 1399)
            puts("Division 4");
        x--;
    }
}