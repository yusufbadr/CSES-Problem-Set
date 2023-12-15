#include <bits/stdc++.h>
#define endl '\n'
#define int long long
using namespace std;
 
signed main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
 
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int n; cin >> n;
    vector<int> v(n);
    for (int& i:v) cin >> i;
    int ans = 0;
    for (int i = 1; i < n; i++){
        if (v[i]<v[i-1]){
            ans+=v[i-1]-v[i];
            v[i] = v[i-1];
        }
    }
    cout << ans << endl;
    return 0;
}
