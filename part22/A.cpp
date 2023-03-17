#include <iostream>
#include <vector>
#define int long long
using namespace std;

int _gcd(int a, int b) {
    if (a == 0)
        return b;
    return (_gcd(b%a, a));
}

int32_t main(void) {
    int g = 0;
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++) cin >> v[i];
        for (int i = 0; i < n; i++) g = _gcd(g, v[i]);

        int ans = 0;
        while (g != 1) {
            for (int i = 0; i < n; i++) {
                vector<int> tmp(v);
                for (int j = 0; j < n; j++) {
                    
                }
            }
        }
        cout << ans << endl;
    }
}