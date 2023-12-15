#include <bits/stdc++.h>
#define endl '\n'
#define int long long
using namespace std;
 
int N = 3;
signed main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
 
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int n; cin >> n;
    vector<int> v(n+1);
    int j;
 
    for (int i = 0; i < n - 1; ++i) {
        cin >> j;
        v[j]++;
    }
 
    for (int i = 1; i <= n; ++i) {
        if (!v[i]){
            cout << i << endl;
            break;
        }
    }
 
 
    return 0;
}
