#include <bits/stdc++.h>
#define endl '\n'
#define int long long
using namespace std;
#define ll long long
#define ceil(a, b) ((a+b-1)/b)
#define mod (int) 1e9+7
#define INF (int)1e9


signed main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int n, x;
    cin >> n >> x;
    vector<int> c(n+1);

    for (int i = 1; i <= n; ++i) {
        cin >> c[i];
    }

    vector<int> sum(x+1);
    sum[0]=0;

    for (int i = 1; i<=x; i++){
        sum[i]=INF;
        for (auto coin:c){
            if (i-coin>=0)
                sum[i]=min(sum[i-coin]+1, sum[i]);
        }
    }

    if (sum[x]==INF) cout << "-1" << endl;
    else cout << sum[x] << endl;

    return 0;
}
