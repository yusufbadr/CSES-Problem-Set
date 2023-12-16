#include <bits/stdc++.h>
#define endl '\n'
#define int long long
using namespace std;
#define ll long long
#define ceil(a, b) ((a+b-1)/b)
#define mod (int) 1e9+7


signed main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int n;
    cin >> n;
    vector<int> dp(n+1);
    dp[0]=1;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= 6 && i-j>=0; ++j) {
            dp[i]+=dp[i-j];
            dp[i] %= mod;
        }
    }

    cout << dp[n] << endl;
    return 0;
}
