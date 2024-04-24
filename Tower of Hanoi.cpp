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

vector<string> res;

void print(int a, int b){
    res.push_back(to_string(a) + " " + to_string(b));
}

void hanoi(int st, int end, int n){
    if (n==1) {
        print(st, end);
        return;
    }
    int mid = 6-(st+end);
    hanoi(st, mid, n-1);
    print(st, end);
    hanoi(mid, end, n-1);
}

void solve() {
    int n; cin >> n;
    hanoi(1, 3, n);
    cout << res.size() << endl;
    for(auto &i:res) cout << i << endl;

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
