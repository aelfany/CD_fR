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
    int b,c,d,x,y;
    cin >> x;
    vector<int>tab(4);
    int a = 0;
    while(x)
    {
        cin >> tab[0];
        cin >> tab[1];
        cin >> tab[2];
        cin >> tab[3];
        if(tab[0] < tab[2] && tab[0] < tab[3] && tab[1] < tab[2] && tab[1] < tab[3])
            puts("YES");
        else if((tab[0] < tab[1] && tab[0] < tab[3]) && (tab[2] < tab[1] && tab[2] < tab[3]))
            puts("YES");
        else
            puts("NO");
        x--;
    }
}