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

void solve() {
    int x, y;
    cin >> x >> y;

    if (y>x){
        if (y%2==1){
            cout << y*y-x+1 << endl;
        } else {
            cout << (y-1)*(y-1)+1+x-1 << endl;
        }

    } else {
        // y<=x
        if (x%2==0){
            cout << x*x-y+1 << endl;
        } else {
            cout << (x-1)*(x-1)+1+y-1 << endl;
        }
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
