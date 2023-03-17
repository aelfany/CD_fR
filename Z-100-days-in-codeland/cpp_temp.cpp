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
    int n,k;
    cin >> n >> k;
    vector<int>tab(n);
    int ans = 0;
    for(int i = 0 ; i < n;i++)
    {
        cin >> tab[i];
    }
    for(int i = 0; i < n;i++)
    {
        if(tab[i] >= tab[k - 1] && tab[i])
            ans++;
    }
    // reverse(tab.begin(),tab.end());
    // sort(tab.begin(),tab.end());
    cout << ans << endl;
}