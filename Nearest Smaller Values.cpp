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
    // value: index
    vector<pair<int, int>> v(n);

    for (int i = 0; i < n; ++i) {
        cin >> v[i].first;
    }

    v[0].second = -1;

    for (int i = 1; i < n; ++i) {
        if (v[i].first > v[i-1].first) v[i].second = i-1;
        else if (v[i].first == v[i-1].first) v[i].second = v[i-1].second;
        else {
            int j = v[i-1].second;
            while (j != -1 && v[j].first > v[i].first)
                j = v[j].second;
            if (j==-1) v[i].second = -1;
            else if (v[j].first == v[i].first) v[i].second = v[j].second;
            else if (v[j].first < v[i].first) v[i].second = j;
            else v[i].second = -1;
        }
    }

    for (int i = 0; i < n; ++i) {
        cout << v[i].second + 1 << ' ';
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
