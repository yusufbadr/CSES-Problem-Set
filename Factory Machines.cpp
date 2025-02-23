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

bool valid(const int& t, const vector<int>& v, const int& n){
    int total = 0;
    for (auto k:v){
        total+=t/k;
        if (total >=n) return true;
    }
    return total>=n;
}


void solve(){
    int n, t;
    cin >> n >> t;

    vector<int> v(n);
    for(auto&i:v) cin >> i;

    int hi=*min(all(v)) * t;
    int x = -1;
    for (int b = hi; b >= 1; b/=2) {
        while (!valid(x+b, v, t))
            x+=b;
    }

    cout << x+1 << endl;
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
