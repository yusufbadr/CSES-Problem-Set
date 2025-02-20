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
    int x, n; cin >> x >> n;
    set<int> pos {0, x};
    multiset<int> distances {x};

    for (int i = 0; i < n; ++i) {
        int p; cin >> p;

        auto it_next = pos.upper_bound(p);
        auto it_prev = it_next;
        it_prev--;

        distances.erase(distances.find(*it_next - *it_prev));
        distances.insert(*it_next - p);
        distances.insert(p - *it_prev);

        pos.insert(p);

        cout << *--distances.end() << " ";
    }



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
