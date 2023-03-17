#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main()
{
    int a,b,x;
    scanf("%d", &x);

    while(x)
    {
        scanf("%d", &a);
        scanf("%d", &b);
        printf("%d\n", a + b);
        x--;
    }
}