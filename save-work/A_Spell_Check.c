#include <stdio.h>
#include <string.h>
#include <stdlib.h>
// #include <iostream>
// #include <vector>
// #include <unistd.h>
// #include <unistd.h>
// #include <algorithm>
// #include<map>
// #include<cmath>
// #include<cstring>
// #include<sstream>
// #include <set>
// #include <unordered_set>
// #include <cstring>
// #include <string.h>
// #include <queue>
// #define ll long long
// using namespace std;

size_t ft_strlen(char *str)
{
    int x = 0;
    while(str[x])
        x++;
    return (x);
}

int slove(char *str)
{
    int a,b,c,x = 0;
    char *tab = "Timur";
    while(str[a])
    {
        while(tab[b])
        {
            if(str[a] == tab[b])
            {
                c++;
                x = 1;
            }
            b++;
        }
        if(x == 0)
            break;
        x = 0;
        b = 0;
        a++;
    }
    return c;
} 
int main()
{
    int x,y,a,b;
    char *str;
    scanf("%d", &x);
    while(x)
    {
        scanf("%d", &y);
        str = calloc(1, y + 1);
        scanf("%s", str);
        b = slove(str);
        if(b == 5)
            puts("YES");
        else
            puts("NO");
        x--;
    }
}