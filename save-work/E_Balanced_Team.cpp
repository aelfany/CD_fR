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

int main()
{
    int a,b,x,y,c;
    int *tab;
    scanf("%d", &x);
    a = 0;
    tab = (int *)malloc(sizeof(int) * x);
    while(a < x)
        scanf("%d", &tab[a++]);
    sort(tab,tab+x);
    y = 0;
    a = 0;
    c = 0;
    while(a < x)
    {
        b = a + 1;   
        while(b < x)
        {
            if(tab[b] - tab[a] <= 5)
                y++;
            b++;
        }
        if (y > c)
            c = y;
        y = 0;
        a++;
    }
    printf("%d\n", c + 1);
}