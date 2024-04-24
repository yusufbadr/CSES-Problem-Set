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


void solve() {
    int n;
    cin >> n;

    vector<string> res;
    res.emplace_back("0");
    res.emplace_back("1");

    for (int i = 2; i < (1<<n); i = i<<1){
        for (int j=i-1; j>=0; j--){
            res.push_back(res[j]);
        }

        for (int j = 0; j < i; j++){
            res[j] = "0" + res[j];
        }

        for (int j = i; j < i<<1; j++){
            res[j] = "1" + res[j];
        }
    }

    for (auto&i:res) cout << i << endl;

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
