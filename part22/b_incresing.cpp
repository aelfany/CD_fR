#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <iostream>
#include <vector>
#include <unistd.h>
#include <unistd.h>
#include <algorithm>
#include<map>
#include<cmath>
#include<cstring>
#include<sstream>
#include <set>
#include <unordered_set>
#include <cstring>
#include <string.h>
#include <queue>
#define ll long long
using namespace std;
int *help(int a, int *size)
{
    int x;
    int y = a;
    int *tab;
    for(x = -1; a != 0; x++)
        a = a / 10;
    tab = malloc(x * sizeof(int));
    *size = x;
    x = 0;
    while(y != 0)
    {
        tab[x] = y % 10;
        y = y / 10;
        x++;
    }
    return tab;
}
int sum(int j)
{
    int a,b,x,y,size;
    int *tab = help(j, &size);
    b = 0;
    for(a = 0; a <= size; a++)
        b = b + tab[a];
    return (b);
}

int main()
{
    int a,b,c,d,x,y;
    scanf("%d", &a);
    while(a)
    {
        scanf("%d", &b);
        c = 0;
        d = b;
        while(1){
            if((sum(d) == sum(c) || sum(d) - sum(c) == -1 || sum(d) == sum(c) == 1) && sum(d) + sum(c) == b)
            {
                printf("%d %d\n", d, c);
                break;
            }
            d--;
            c++;
        }
        a--;
    }
}