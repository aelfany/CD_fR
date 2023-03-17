#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    long long a,b,c;

    b = 0;
    c = 0;
    scanf("%lld", &a);
    while(a != 0)
    {
        if(a % 10 == 4)
            c++;
        if(a % 10 == 7)
            c++;
        a /= 10;
        b++;
    }
    if(b == 1)
    {
        printf("NO\n");
        return 0;
    }

    if(c == b)
        printf("YES\n");
    else
        printf("NO\n");
}