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

void YusufBadr(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}

//int dx[8] = {0, 1, 1, 1, 0, -1, -1, -1};
//int dy[8] = {1, 1, 0, -1, -1, -1, 0, 1};

int modExp(int x, int y){
    int res = 1;
    x=x%mod;
    if(x==0) return 0;

    while(y>0){
        if (y&1){
            res = (res*x)%mod;
        }
        y=y>>1;
        x=(x*x)%mod;
    }
    return res;
}


void solve() {
    int n; cin >> n;
    cout << modExp(2, n) << endl;
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
