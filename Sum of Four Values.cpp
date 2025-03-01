#include <bits/stdc++.h>

using namespace std;

#define int long long
#define ll long long
#define endl '\n'
#define all(x) (x).begin(), (x).end()
#define ceil(a, b) ((a+b-1)/b)
#define mod ((int) 1e9+7)
#define INF LLONG_MAX
#define sq(x) ((x)*(x))
#define sz(a) (int) a.size()
#define PI (2*acos(0.0)) // M_PI

void YusufBadr(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}

//int dx[8] = {0, 1, 1, 1, 0, -1, -1, -1};
//int dy[8] = {1, 1, 0, -1, -1, -1, 0, 1};

int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};



void solve(){
    int n, x;cin>>n>>x;
    vector<int>v(n);
    for(auto&i:v)cin>>i;
    unordered_map<int, pair<int, int>> mp; // a+b, indices

    for (int i = 0; i < n; i++){
        for (int j = i+1; j < n; j++){
            if (i==j) continue;
            mp[v[i]+v[j]] = {i, j};
        }
    }

    for (int i = 0; i < n; i++){
        for (int j = i+1; j < n; j++){
            if (mp.count(x-v[i]-v[j])){
                auto p = mp[x-v[i]-v[j]];
                if (p.first!=i && p.second!=j && p.first!=j && p.second!=i){
                    cout << ++i << ' ' << ++j << ' ' << ++p.first << ' ' << ++p.second << endl;
                    return;
                }
            }
        }
    }

    cout << "IMPOSSIBLE" << endl;




}


signed main() {
    YusufBadr();
    int t = 1;
//    cin >> t;
    while (t--){
        solve();
    }
    return 0;
}
