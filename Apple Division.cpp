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
    int n; cin >> n;
    vector<int> v(n);
    int sum = 0;
    for(auto&i:v) cin >> i, sum+=i;

    int mn = INF;

    for (int mask = 1; mask < (1<<n); mask++){
        int w1 = 0;
        for (int i = 0; i < n; i++){
            if (mask & (1 << i)){
                w1+=v[i];
            }
        }

        mn = min(mn, abs((sum-w1)-w1));
    }

    cout << mn << endl;

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
