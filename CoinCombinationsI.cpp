#include <bits/stdc++.h>
#define endl '\n'
#define int long long
using namespace std;
#define ll long long
#define ceil(a, b) ((a+b-1)/b)
#define mod ((int) 1e9+7)
#define INF (int)1e9

signed main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int n, x; cin >> n >> x;
    vector<int> c(n);
    for (int &i:c) cin >> i;
    vector<int> count(x+1);
    count[0]=1;
    for (int i = 1; i <= x; i++){
        for (auto coin:c){
            if (i-coin>=0)
                (count[i]+=count[i-coin])%=mod;
        }
    }
    cout << count[x] << endl;
    return 0;
}
