#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int a,b,x,y,c;
    char *str;
    scanf("%d", &x);

    while(x)
    {
        scanf("%d", &y);
        str = malloc(y + 1);
        scanf("%s", str);
        str[y] = 0;
        a = 0;
        b = 0;
        c = 1;
        while(str[a]) 
        {
            if(str[a] == 'm' || str[a] == 'M')
            {
                while(str[a] == 'm' || str[a] == 'M')
                    a++;
                b++;
            }
            if(str[a] == 'e' || str[a] == 'E')
            {
                while(str[a] == 'e' || str[a] == 'E')
                    a++;
                b++;
            }
            if(str[a] == 'o' || str[a] == 'O')
            {
                while(str[a] == 'o' || str[a] == 'O')
                    a++;
                b++;
            }
            if(str[a] == 'w' || str[a] == 'W')
            {
                while(str[a] == 'w' || str[a] == 'W')
                    a++;
                b++;
            }
            if(str[a] != 0)
                b = 0;
            break;
        }
        if(b == 4)
            puts("YES");
        else
            puts("NO");
        x--;
    }
}