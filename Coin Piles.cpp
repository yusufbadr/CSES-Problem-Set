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
    int a, b;
    cin >> a >> b;

    if ((2*b-a)>=0 && (2*b-a)%3==0 && (2*a-b)>=0 && (2*a-b)%3==0){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}



signed main() {
    YusufBadr();

    int t = 1;
    cin >> t;
    while (t--){
        solve();
    }

    return 0;
}
